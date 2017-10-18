#include<stdio.h>
int main()
{
    int t,x;
    scanf("%d",&t);
    for(x=0;x<t;x++)
    {
        int max=0,c=0,t,i,j,k,l,n,m,a[100003]={0};
        scanf("%d",&n);
        for(i=0;i<n;i++)
        scanf("%d",&a[i]);

        if(n==1)
        printf("1\n");
        else
        {

        for(j=0;j<n;j++)
        {
            c=0;

        for(k=0;k<n;)
        {
            t=a[k];
            int w=0;
            for(i=k+1;i<n;i++)
            {
                 if(a[i]==t)
                 {
                     w=1;
                     k=i;
                     c++;
                     break;
                }
            }
            if(w==0)
            k++;
        }
        if(c>max)
        max=c;
        }
        printf("%d\n",max);
        }


    }

    return 0;
}
