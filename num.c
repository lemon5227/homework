#include<stdio.h>
int main(){
    int m,n;
    int i;
    int cnt;
    int sum;
    if (m==1)
    {
        m=2;
    }
    
    {
        /* code */
    }
    
    for ( i = n; i <=m; i++)
    {
        int isprime=1;
        int k;
        for ( k = 2; k < i-1; k++)
        {
            if (i%k == 0)
            {
                isprime=0;
                break;
            }
            
        }
        
        if (isprime)
        {
            cnt++;
            sum+=i;
        }
        
    }
    printf("%d %d",cnt,sum);
    return 0;

}
//test
//推送.0000
