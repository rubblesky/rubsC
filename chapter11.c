#include<stdio.h>
//使用指针作为函数参数
//交换两个数位置
void swap(int *a,int *b){
    int s = *a;
    *a = *b;
    *b = s;
}

int main(){
    int a = 1;
    int b = 2;
    swap(&a,&b);
    printf("a = %d\nb = %d\n",a,b);
    int s[10];
    int (*p)[5] = &s;
    getchar();
}