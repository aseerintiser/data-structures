#include<stdio.h>
int main()
{
    int n,d,arr[100000],i,temp,j,arr2[100000];
    scanf("%d %d",&n,&d);

    for(i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }

    /* for(i=0; i<=d; i++)
    {
        for(j=0; j<n; j++)
        {
            temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
        }
    } */
    for (i=0; i<n; i++)
    {
        arr2[(i+n-d)%n]=arr[i];
    }

    for(i=0; i<n; i++)
    {
        printf("%d ",arr2[i]);
    }
}
