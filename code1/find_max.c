//寻找数组中最大的
#include<stdio.h>
int max(int num[]);
int main(){
    int n;
    int num[10]={5,17,8,5,4,2,142,4,5,74,};
    n = max(num);
    printf("最大值是%d",n);
    return 0;
}
int max(int num[]){
    int max = num[0];
    for (int  i = 0; i < 10; i++)
    {
        if (max<num[i+1])
        
            max=num[i+1];
        
    }
    return max;
}