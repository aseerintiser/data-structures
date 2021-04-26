#include<stdio.h>
int main()
{
    int n,arr[1000],arr2[1000],i,j=1,max,count=0;

    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }

    arr2[0]=arr[n-1];
    max=arr2[0];
    for(i=n-2; i>=0; i--)
    {
        if(arr[i]>max)
        {
            arr2[j]=arr[i];
            j++;
            max=arr[i];
            count++;
        }
    }

    for(i=count; i>=0; i--)
    {
        printf("%d ",arr2[i]);
    }

}
