#include <stdio.h>

    int factorial(int a){
        if (a==1 or a==0){
            return 1;
        }else{
            return a*factorial(a-1);
        }
    }
int main(){
    int r;
    scanf ("%d",&r);
    printf("%d", factorial(r));

}