/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
void tower(int n, char s,char h,char d){  //n->no of disk
  if(n==0) return;
   tower(n-1,s,d,h);
    printf("%c -> %c \n",s,d);
    tower(n-1,h,s,d);
    return;                                  //s->source of disk
  }                                     //h-helper
int main()                             //d->destination of disk
{
    int n;
    printf("Enter no of disk ");
    scanf("%d",&n);
        tower(n,'A','B','C');
    

    return 0;
}