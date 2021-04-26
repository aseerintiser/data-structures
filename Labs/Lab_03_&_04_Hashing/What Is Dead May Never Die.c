#include<stdio.h>
#include<string.h>

int main()
{
    int flag=0,i,arr[128]={0};
    char s[10000];

    gets(s);
    //INCREMENTING THE COUNTER FOR FIRST STRING
    for (i=0; i<strlen(s); i++)
    {
        arr[s[i]]++;
    }

    gets(s);
    //INCREMENTING THE COUNTER FOR SECOND STRING
    for (i=0; i<strlen(s); i++)
    {
        arr[s[i]]++;
    }

    gets(s);
    //DECREMENTING COUNTER FOR THIRD STRING
    for (i=0; i<strlen(s); i++)
    {
        arr[s[i]]--;
    }

    //CHECKING THE COUNTER ARRAY
    for(i=0; i<128; i++)
    {
        if (arr[i] != 0 )
        {
            flag=1;
            break;
        }
    }

    if(flag==1)
        printf("NO");
    else
        printf("YES");
}
