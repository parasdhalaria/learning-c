#include <stdio.h>

int main()
{
    int i;int j;
    int sum=0;
  int yrr[3][3] = {
    {12, 5, 8},
    {23, 17, 4},
    {9, 31, 6}
};
for (i=0;i<3;i++){
    for (j=0;j<3;j++){
     sum= sum + yrr[i][j];
    }
}
printf ("sum of all = %d",sum);


    return 0;
}
