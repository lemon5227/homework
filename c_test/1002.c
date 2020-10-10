//编写一个程序，输入a、b、c三个值，输出其中最大值。
#include<stdio.h>
int main(){
    int a,b,c;
    while ((scanf("%d %d %d",&a,&b,&c))!= -1)
    {
        printf("%d\n",max(a,b,c));
    }
    
    return 0;
}
int max(int x,int y,int z){
    int n;
    if (x>y)
    {
        n=x;
    }
    else
    {
        n=y;
    }
    if(n<z)
    n=z;
    return n;
}