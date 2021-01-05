#include<stdio.h>
int main(){
    int x;
    int sum=0;
    int num[100];
    int cnt;
    double t;
    scanf("%d",&x);
    while (x!=-1)
    {
        num[cnt]=x;
        sum+=x;
        cnt++;
        scanf("%d",&x);

    }
    printf("%d\n",cnt);
    printf("%d\n",sum);
    if (cnt>0)
    {
        t=sum/cnt;
        printf("%f\n",t);
        int i;
        for (  i = 0; i < cnt; i++)
        {
            if (num[i]>t)
            {
                printf("%d\n",num[i]);
            }
            
            
        }
        
    }
    
}