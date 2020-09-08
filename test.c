//猜数游戏猜一个一百以内的数
#include<stdio.h>
#include<stdlib.h>
int main(){
    srand((unsigned int)time(0));//用系统时间作为种子的值
    int k;
    int n;
    int cnt=0;
    int f=0;
    k=rand()%100+1;
    while (f ==0)
    {
        scanf("%d",&n);
        cnt++;
        printf("%d\n",cnt);
        if (n > k)
        {
            printf("Too big\n");
        }
        if (n < k)
        {
            printf("Too small\n");
        }
        if (n == k)
        {
           if (cnt == 1)
            {
                printf("Bingo!");
            }
            if (cnt>1 &&  cnt<=3)
            {
                printf("Lucky you!");
            }
            if (cnt>3 && cnt<=20)
            {
                printf("Good Guess!");
            }else
            {
                printf("game over!");
            }

            
        }

    }
   
    
    return 0;

}