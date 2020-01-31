#include<stdio.h>
int main(){
    //测试&&和||的运算顺序
    int i = 0;
    if(i++||i++||i++||i++){
        printf("i0 = %d\n",i);
    }

    if(i--&&i--&&i--&&i--){
        printf("print\n");
    }

    printf("i = %d\n",i);
}