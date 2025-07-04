/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
int factorial(int n){
    if(n==1 || n==0) return 1;
    int recAns=n*factorial(n-1);
    return recAns;
}

int main()
{
    int n;
    printf("Enter n ");
    scanf("%d",&n);
    int fact=factorial(n);
    printf("The factorial of %d is %d" ,n,fact);
        
    

    return 0;
}