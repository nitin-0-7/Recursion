/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
void increasing(int x,int n){
    if(x>n) return;
    printf("%d\n",x);
    increasing(x+1,n);
    
    return;
} 


int main()
{
    int n;
    printf("Enter n ");
    scanf("%d",&n);
    increasing(1,n);
    

    return 0;
}