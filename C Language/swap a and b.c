#include <stdio.h>
int swap (int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
    return 0;
}

int main()
{
    int g=5;
    int f=10;
    int k ;
    scanf ("%d%d",&g,&f);
    k=swap(&g,&f);
    printf ("%d %d",g,f);
    
    

    return 0;
}