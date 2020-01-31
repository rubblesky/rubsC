#include<stdio.h>
int i = 0;
int f(){
    return i++;
}
float g(){
    return (float) i;
}
int main(){
    //为了结果清晰
    //下面三个表达式每次只能执行一个。
    //printf("%f\n",i?f():g());
    //printf("%f\n",1?f():g());
    printf("%f\n",0?f():g());

}