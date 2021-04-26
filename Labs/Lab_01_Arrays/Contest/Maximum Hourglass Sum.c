#include<stdio.h>
int main()
{
    int row,col,arr[6][6],sum=0,max=-99999;

    for(row=0; row<6; row++)
    {
        for(col=0; col<6; col++)
        {
            scanf("%d",&arr[row][col]);
        }
    }

    for(row=0; row<=3; row++)
    {
        for(col=0; col<=3; col++)
        {
            sum=0;

            sum=sum+arr[row][col];
            sum=sum+arr[row][col+1];
            sum=sum+arr[row][col+2];
            sum=sum+arr[row+1][col+1];
            sum=sum+arr[row+2][col];
            sum=sum+arr[row+2][col+1];
            sum=sum+arr[row+2][col+2];

            if(sum>max) max=sum;
        }
    }

    printf("%d",max);
}

