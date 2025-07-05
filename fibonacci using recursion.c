/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
int fibo(int n){
if(n<=2)  return 1;
   return fibo(n-1)+fibo(n-2);
}

int main()
{
	int n;
	printf("Enter n");
	scanf("%d",&n);

    printf("fibonacci of %d is %d",n,fibo(n));
	return 0;
}