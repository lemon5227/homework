//给出一百分制成绩，要求输出成绩等级‘A’、‘B’、‘C’、‘D’、‘E’。 90分以及90分以上为A，80-89分为B，70-79分为C，60-69分为D，60分以下为E。
#include<stdio.h>
int main(){
    int x;
    scanf("%d",&x);
    
        if(x<=90)
        printf("A\n");
        else (x>=80 && x<90)
        {
            printf("B\n");
        }
        else (x>=70 && x<80);
        {
            printf("C\n");
        }
        else (x>=60 && x<70)
        {
            printf("D\n");
        }
        else (x<60)
        {
            printf("E\n");
        }
        
    
    
    
    return 0;
}