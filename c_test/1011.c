#include<stdio.h>
int main(){
    int a,letter=0,num=0,spa=0,other=0;
    while ((a=getchar())!='\n')
    {
        if(a>='A'&&a<='Z'||a>='a'&&a<='z')
        letter++;
        else if (a>=0&&a<=9)
        num++;
        else if(a=' ')
        spa++;
        else
        other++;
    }
    printf("%d %d %d %d",letter,num,spa,other);
    return 0;
}