#include<stdio.h>
int main(){
    //测试赋值表达式
    int i = 1;
    float j = 1.5f;
    
    printf("%d\n",i = i + j);
    printf("%d\n",i);
    //结果  2  2



    //测试条件表达式
    int a = 5;
    float b = 1.f;

    printf("%f\n",1?a:b);
    //结果5.000000

}