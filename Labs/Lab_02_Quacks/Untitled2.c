#include<stdio.h>

int main()
{
    char expr[100];
    int x=0,i=0,n;
    scanf("%d",&n);

    for(i=0; i<n; i++)
    {
        scanf("%s",expr);
        while(expr[i]!='\0')
        {
            if(expr[i]=='(')
                x++;
            else if(expr[i]==')')
            {
                x--;
                if(x<0)
                    break;
            }
            i++;
        }
        if(x==0)
            printf("Yes\n");
        else printf("No\n");
    }
}
