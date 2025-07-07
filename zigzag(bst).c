/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
void zigzag( int n){
    if(n==0) return;
    printf("%d ",n);   
zigzag(n-1);
    printf("%d ",n);
zigzag(n-1);
    printf("%d ",n);
    return;
}

int main()
{
    int n;
    printf("Enter n ");
    scanf("%d",&n);
zigzag(n);
    return 0;
}