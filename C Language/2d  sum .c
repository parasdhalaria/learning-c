#include <stdio.h>

int main()
{
    int arr [3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int yrr [3][3]={{7,8,9},{1,2,3},{1,4,1}};
    int sum[3][3];
    int i ; int j ;
    for ( int i=0;i<3;i++){
        for (int j=0;j<3;j++){
            sum[i][j]=arr[i][j]+yrr[i][j];
        }
    }for ( int i=0;i<3;i++){
        for (int j=0;j<3;j++){
        printf("%d", sum[i][j]);
        }
        printf ("\n");
    }
    
    

    return 0;
}