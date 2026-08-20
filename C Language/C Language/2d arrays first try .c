#include <stdio.h>
int main() {
    int arr[2][2] = {{1, 2},{ 3, 4}};
    int yrr[2][2] = {{12,21},{3,8}};
    int result[2][2];
   int i,j,k,sum;
   for (i=0;i<2;i++){
   for (j=0;j<2;j++){
    result[i][j] =0;
    for (k=0;k<2;k++){
        result[i][j]= result[i][j] +(arr[i][k]  * yrr[k][j]);}
    }
   }
   printf ("resulting matrix = ");
   for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
   }
   return 0;
}