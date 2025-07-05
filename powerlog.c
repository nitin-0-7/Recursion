/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
int powerlog(int a,int b){
    if(b==1) return a;
    int r=powerlog(a,b/2);
    int g=r*r;
    return g;
}
int main()
{
    int n;
    printf("Enter base");
    scanf("%d",&n);
    int m;
    printf("Enter power");
    scanf("%d",&m);
   int k=powerlog(n,m);
    printf("%d raised to the power %d is %d",n,m,k);
    

    return 0;
}