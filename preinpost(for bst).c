/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
void preinpost( int n){
    if(n==0) return;
    printf("pre %d\n",n);
    preinpost(n-1);
    printf("In %d\n",n);
    preinpost(n-1);
    printf("Post %d\n",n);
    return;
}

int main()
{
    int n;
    printf("Enter n ");
    scanf("%d",&n);
    preinpost(n);
    return 0;
}