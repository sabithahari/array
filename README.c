#include<stdio.h>
int main()
{

    int i,j,m,n,count=0;
    int a[10];
    scanf("%d",&n);
     for(i=0;i<n;i++)
     {
           scanf("%d",&a[i]);
     }

    scanf("%d",&m);
    for(i=0;i<n;i++)
    {
        for(j=1;j<n;j++)
        {

            if(a[i]+a[j]==m)
            {
                printf("%d %d",a[i],a[j]);
                count++;
            
 break;
            }
        }
        if(count==1)
        {
            break;
        }
    }
    return 0;
}
