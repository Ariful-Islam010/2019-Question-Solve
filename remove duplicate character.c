#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,k;
    char s[1000];
    gets(s);
    int d=strlen(s);
    for(i=0;i<d;i++)
    {
        for(j=i+1;j<d;j++)
        {
            if(s[i]==s[j])
               {
                   for(k=j;k<d;k++)
                    {
                        s[k]=s[k+1];
                    }
               }
        }
    }
    printf("%s",s);
    return 0;
}
