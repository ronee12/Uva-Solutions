#include <iostream>
	#include "time.h"
	 
	using namespace std;
	 
	#define SET0(i) List[i>>5]&=~(1<<i)
	#define SET1(i) List[i>>5]|=(1<<i)
	#define GET(i)  ((List[i>>5]>>i)&1)
	 
	#define NUM 5500999 //expected upper limit of the required prime num
	#define SQRT 5550//388 //ceeling of the squar root of the NUM
	 
	unsigned long List[NUM>>5] = {0};
	 
	void FillList(long num)
	{
	    long t;
    num = (num << 1) + 1;
	    t = (num*num - 1) >> 1;
	    while(t<(NUM>>1))
	    {
	        SET1(t);
	        t += num;
	    }
}
	void MakeList()
	{
	    SET1(0);
	    for(long i = 1; i<=((SQRT-1)>>1); i++)
	    {
	        if(!GET(i))
	        {
	            FillList(i);
	        }
	    }
	}
	 
	int main()
{
	    clock_t start, end;
	    start = clock();
	 
	    int counter = 1; //number two counted
	 
	    MakeList();
	 
	    for(long i=1; i<(NUM>>1); i++)
	    {
	        if(!GET(i))
	        {
	            counter++;
	            if(counter==348990)
	            {
	                cout<<"40001st prime: "<<(i<<1)+1<<endl;
	                break;
	            }
	        }
	    }
	    end = clock();
	    cout<<"Done! Total time: "<<end-start<<endl;
		return 0;
	}