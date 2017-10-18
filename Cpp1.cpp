#include<stdio.h>
#include<stdlib.h>

int parent[1000];
int node[150];
char s[100000];

void reset(int n);

int main(){

   int i,j,k,test,count,n,res1,temp;
   bool blank=false;
   char dum,help[5],bfr[100];

   

   scanf("%d%c",&test,&dum);
   getchar();

   while(test--){

      do{
         gets(bfr);
      }while(!bfr[0]);

      n=bfr[0];

      reset(n);

      while(gets(s)){

         if(!s[0]) break;
         
             temp=parent[s[1]];
                  
      }

         //  Your  Algo  here.............

      
   }

   return 0;

}