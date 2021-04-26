#include<stdio.h>
int main()
{
    int n,x,arr[1000],i,p=0,q=0;

    scanf("%d %d",&n,&x);
    for(i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }

    for(i=0; i<n; i++)
    {
        if(arr[i]<=x) p++;
        else
        {
            i++;
            break;
        }
    }
    for(i=i; i<n; i++)
    {
        if(arr[i]<=x) q++;
        else break;
    }
    printf("%d",p+q);
}
