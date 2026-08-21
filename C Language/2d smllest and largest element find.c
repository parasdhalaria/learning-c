#include <stdio.h>

int main()
{
    int i ;
    int j;
  int yrr[3][3] = {
    {12, 5, 8},
    {23, 17, 4},
    {9, 31, 6}
};
int largest=yrr[0][0];
int smallest=yrr[0][0];
for (i=0;i<3;i++){
    for (j=0;j<3;j++)
    {
     if (yrr[i][j] > largest){
         largest=yrr[i][j];
     }
         
         if (yrr[i][j] < smallest ){
          smallest=yrr[i][j];
         }
    
     }
}
 
        printf (" largest = %d \n", largest);
        printf ("smallest = %d \n", smallest);
    printf ("\n");


    return 0;
}
