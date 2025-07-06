/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
int maze2(int c, int d){
    if(c==1 && d==1) return 1;
    int rightWays=0;
    int downWays=0;
    //if(c==1 && d==1) return 1;
    if(c==1){
        rightWays+=maze2(c,d-1); // only right ways call
    }
    if(d==1){
        downWays+=maze2(c-1,d);  //only downways call
    }
    if(c>1 && d>1 ){
        rightWays+=maze2(c,d-1);
        downWays+=maze2(c-1,d);
    }
    int totalWays=rightWays+downWays;
}

int main()
{
    int n;
    printf("Enter no of rows ");
    scanf("%d",&n);
    int m;
    printf("Enter no of columns  ");
    scanf("%d",&m);
    int noOfways=maze2(n,m);
    printf("There are %d ways to complete the path of maze",noOfways);
    


    return 0;
}