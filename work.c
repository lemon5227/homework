//输入部分和的值，精确到小数点后两位
#include<stdio.h>
int main(){
    int n;
    double dividend;//分子
    double divisor;//分母
    double sum=0.0;
    int i;
    double t;
    n=200;
    dividend=2;
    divisor=1;
    for ( i = 1; i <= n; i++)
    {
        sum+= dividend/divisor;
        t=dividend;
        dividend=dividend+divisor;
        divisor=t;
    }
    printf("%.2f\n",sum);
    return 0;
    
}