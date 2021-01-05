#include<stdio.h>
#define SIZE 10
int sump(int *start,int *end);
int main(){
    int mar[SIZE]={20,10,5,39,4,16,19,26,31,20,};
    long answer;
    answer=sump(mar,mar+SIZE);
    printf("the total numble of mar is %ld\n ",answer);

    return 0;
}
int sump(int *start,int *end){
int total = 0;
while (start<end)
{
    total+=*start;
    start++;

}
    return total;

}