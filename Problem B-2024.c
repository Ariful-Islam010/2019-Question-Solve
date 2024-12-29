#include<stdio.h>
int main() {
    int A,B;
    while(scanf("%d %d",&A,&B)== 2) {
        int X=0,Y=1,X1=1,Y1=0,temp;
        int q,r,m,n;
        while(B!=0) {
            q=A/B;
            r=A%B;
            m=X-X1*q;
            n=Y-Y1*q;
            A=B;
            B=r;
            X=X1;
            Y=Y1;
            X1=m;
            Y1=n;
        }

        printf("%d %d %d\n",Y,X,A);
    }
return 0;
}
