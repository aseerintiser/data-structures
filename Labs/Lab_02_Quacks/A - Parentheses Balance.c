#include<stdio.h>
#include<string.h>
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


   /* int n,i,len,j;
    char arr[1000],arr2[1000];
    scanf("%d\n", &n);

    for(i=0; i<n; i++)
    {
        gets(arr);
    }
    len=strlen(arr);

    if(len==0)
         {
             printf("Yes\n");
         }

    for(j=0; j<len; j++)
    {
        if(arr[j]=='(' || arr[j]=='[')
            arr2[j]=arr[j];
        else if (arr[j]==')' || arr[j]==']')
        {
            for(i=j-1; i>=0; i--,j++)
            {
                if (arr[j]==arr2[i]) printf("Yes\n");
                else
                {
                    printf("No\n");
                    break;
                }
            }
        }
        else
            break;

    }
    return 0;
}
*/



/* int i, test, j, len;
     char expression[150];
     scanf("%d\n", &test);
     for(i=1;i<=test;i++)
     {
         stack<char> mystack;
         cin.getline(expression,150);
         len=strlen(expression);
         if(len==0)
         {
             printf("Yes\n");
             continue;
         }
         for(j=0; j<len; j++)
         {
             if(expression[j]=='(' || expression[j]=='[')
                 mystack.push(expression[j]);
             else if (!mystack.empty() && ((mystack.top()=='(') &&(expression[j]==')' ) || (mystack.top()=='[') &&expression[j]==']' ))
                     mystack.pop();
             else if(expression[j]==' ')
                 continue;
             else
                     break;

         }

          if(mystack.empty() && len==j)
             printf("Yes\n");
         else
             printf("No\n");

     }
 return 0; */

