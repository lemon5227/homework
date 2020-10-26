//strcpy()函数可以将两段字符串拼接，拼接后回家上\0导致是呀puts()输出后会输出到\0终止。
#include<stdio.h>
#include<string.h>
#define WORDS "beast"
#define SIZE 40
int main(){
    const char *orig=WORDS;
    char copy[SIZE] = "Be the best that you can be.";
    char *ps;
    puts(orig);
    puts(copy);
    ps = strcpy(copy+7,orig);
    puts(copy);
    puts(ps);
    return 0;
}