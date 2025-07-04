/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
void increasing(int n){
    if(n==0) return;   //base case
    increasing(n-1);   //call
    printf("%d\n",n);  //code
    return;
} 


int main()
{
    int n;
    printf("Enter n ");
    scanf("%d",&n);
    increasing(n);
    

    return 0;
}