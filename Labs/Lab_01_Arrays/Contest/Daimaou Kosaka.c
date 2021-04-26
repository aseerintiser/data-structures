#include<stdio.h>
#include<string.h>
int main()
{
    int t,i,k,count=0,j,arr[1000],p;
    char s[1000];

    scanf("%d",&t);

    for(i=0; i<t; i++)
    {
        count=0;
        scanf("%d",&k);
        fflush(stdin);
        gets(s);
        fflush(stdin);
        strrev(s);
        for(j=0;; j++)
        {
            if(s[j]=='P') count++;
            else if(s[j]=='A') break;
        }

            arr[p]=count;

    }
    for(i=0; i<t ; i++)
    {
        printf("%d\n",arr[i]);
    }
}
