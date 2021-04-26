#include<stdio.h>
int main()
{
    char s[100000];
    long long int t;
    long long int a[26],i,j;
    scanf("%lld",&t);
    while(t--)
    {
        int max=0;
        scanf("%s",s);
        for(i=0;i<26;i++)
            a[i]=0;
        for(i=0; s[i]!='\0'; i++)
            if(s[i]>='a'&&s[i]<='z') a[s[i]-'a']++;
        printf("ocul.in/");

        for(i=0; i<3; i++)
        {
            for(j=0; j<26; j++)
                if(a[j]>a[max]) max=j;
            printf("%c%d",max+97,a[max]);
            a[max]=0;
        }
        printf("\n");
    }
}
