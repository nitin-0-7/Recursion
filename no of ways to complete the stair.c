/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
int stair(int n){
    if(n<=2) return n;
    int totalways=stair(n-1)+stair(n-2);
    return totalways;
}

int main()
{
	int n;
	printf("Enter number of stairs");
	scanf("%d",&n);
    int ways=stair(n);
    printf("The %d stairs has %d ways to complete the path of stair",n,ways);
	return 0;
}