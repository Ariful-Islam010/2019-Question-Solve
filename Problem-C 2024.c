#include<stdio.h>
int main()
{
    int n;
    while(1)
    {
        scanf("%d", &n);
        if(n==0)
        {
            break;
        }
        else if(n%11==0)
        {
            printf("%d is a multiple of 11\n", n);
        }
        else printf("%d is not a multiple of 11\n",n);
    }
    return 0;
}
