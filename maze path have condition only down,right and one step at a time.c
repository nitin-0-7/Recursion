/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
int maze(int cr,int cc,int er,int ec){
    if(cr==er && cc==ec) return 1;
    int rightWays=0;
    int downWays=0;
    if(cr==er){
        rightWays+=maze(cr,cc+1,er,ec); // only right ways call
    }
    if(cc==ec){
        downWays+=maze(cr+1,cc,er,ec);  //only downways call
    }
    if(cr<er && cc<er){
        rightWays+=maze(cr,cc+1,er,ec);
        downWays+=maze(cr+1,cc,er,ec);
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
    int noOfways=maze(1,1,n,m);
    printf("%d",noOfways);
    


    return 0;
}