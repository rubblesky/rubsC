#include<stdio.h>
int a(){
    int k[50] ;
    printf("k4 = %d\n",k[4]);
}
int main(){
    int i = 1;
    //如果在这里再次定义一个i则会报错
    {
        printf("i = %d\n",i);
        int i = 2;
        //但是在这里定义就不会报错
        printf("i = %d\n",i);
    }
    printf("i = %d\n",i);
    int m[30];
    printf("i = %d\n",i);

}