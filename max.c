#include<stdio.h> 
int main(){
    int a=1;
    int b=0;
    while (++a>0)
    {
        
    }
    printf("int类型最大数为%d\n",a-1);
    while (a !=0)
    {
        a=a/10;
        b++;
    }
    printf("int数据类型最大的数的位数是%d",b);
    return 0;
    
}