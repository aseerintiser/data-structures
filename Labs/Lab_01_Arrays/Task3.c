#include<stdio.h>
int main()
{
    int n,m,v1,v2,v3,v4,i,j,arr[100][100],x=0,y=0;
    scanf("%d %d",&n,&m);
    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    scanf("%d %d %d %d",&v1,&v2,&v3,&v4);

    //Type 1
    for(j=0; j<m; j++)
    {
        x=arr[0][j]+v1;
    }

    for(j=0; j<m; j++)
    {
        arr[1][j]=v2;
        y=y+arr[1][j];
    }
    sum1=x+y;

    //Type 2
    for(j=0; j<m; j++)
    {
        x=arr[1][j]+v1;
    }

    for(j=0; j<m; j++)
    {
        arr[0][j]=v2;
        y=y+arr[0][j];
    }
    sum2=x+y;

    //Type 3

}
