//约分成最简分数,运用辗转相除法可以求公约数
#include<stdio.h>
int main(){
    int dividend,divisor;
    scanf("%d/%d",&dividend,&divisor);
    int a = dividend;
    int b = divisor;
    int t;
    while (b>0)
    {
        t=a%b;
        a=b;
        b=t;
    }
    printf("%d/%d\n",dividend/a,divisor/a);
    return 0;
}
