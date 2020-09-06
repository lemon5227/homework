#include<stdio.h>
int main(){
    int n=10;
    int i,j;
    for ( i = 1; i < n; i++)
    {
        for ( j = 1; j < i; j++)
        {
            printf("%d*%d=%d",j,i,j*i);
            if (i*j<10)
            {
                printf("   ");
            }else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
    
    return 0;
}