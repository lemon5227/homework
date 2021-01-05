#include<stdio.h>
void copy_arr(double new[][3],double old[][3],int n,int m);
int main(){
    double num2d[2][3]={{1.1,2.2,3.3,},{4.4,5.5,6.6}};
    double num2d2[2][3];
    copy_arr( num2d2, num2d,2,3);
}
void copy_arr(double new[][3],double old[][3],int n,int m){
    int i,j;
    for ( i = 0; i < n; i++)
    {
        for ( j = 0; j < m; j++)
        {
            new[i][j] = old[i][j];
            printf("new[%d][%d] = %f\n",i,j,new[i][j]);
        }
        printf("\n");
    }
    
}