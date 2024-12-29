#include<stdio.h>
int main()
{
    int first,second,i;
    char ch;
    scanf("%c",&ch);
    scanf("%d %d",&first,&second);
    if(ch=='A') printf("%d",first+second);
    else if(ch=='S') printf("%d",first-second);
    else if(ch=='M') printf("%d",first*second);
    return 0;
}
