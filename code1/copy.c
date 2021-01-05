//将一个数组复制到其他三个数组内
#include<stdio.h>
void copy_arr(double new[],double old[],int n);
int main(){
double source[5] = {1.1,2.2,3.3,4.4,5.5,};
double target1[5];
double target2[5];
double target3[5];
double target4[5];
copy_arr(target1,source,5);
copy_ptr(target2,source,5);
return 0;
}
void copy_arr(double new[],double old[],int n){
    int i;
    for ( i = 0; i < n; i++)
    {
        new[i] = old[i];
        printf("new[%d] = %f\n",i,new[i]);
    }
    
}
void copy_ptr(double *new,double *old,int n){
    int i;
    for ( i = 0; i < n; i++)
    {
        *(new+i) = *(old+i);
        printf("target2[%d] = %f\n",i,*(new+i));
    }
    
}