/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
int power(int a,int b) {
    int x=1;
    for(int i=1;i<=b;i++){
        x=x*a;
    }
    return x;
	
}


int main()
{
	int n;
	printf("Enter base ");
	scanf("%d",&n);
    int m;
    printf("Enter power ");
    scanf("%d",&m);
    int p=power(n,m);
    printf("%d raised to to the power %d is %d",n,m,p);
	return 0;
}