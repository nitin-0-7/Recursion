/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
int sum(int n){
    if(n==1 || n==0) return 1;
   int recAns=n+sum(n-1);
    return recAns;
}

int main()
{
    int n;
    printf("Enter n ");
    scanf("%d",&n);
   int add=sum(n);
    printf("%d",add);
    return 0;
}