#include<stdio.h> 
int main(){
    int a=10;
    int num[a];
    int x;
    int i;
    int cnt=0;
    for (  i = 0; i < a; i++)
    {
        num[i]=0;
    }
    
    scanf("%d",&x);
    while (x!=-1)
    {
        if (x>=0 && x<=9)
        {
            num[x] ++;
        }
        scanf("%d",&x);
    }
    for ( i = 0; i < a; i++)
    {
        printf("%d:%d\n",i,num[i]);
    }
    
    return 0;
    
}