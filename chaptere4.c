#include<stdio.h>

void strInversal(char *s){
    int i = 0;
    while (s[i]!='\0') {
        i++;
    }
    int size = --i;
    while (i > size/2) {
        char a = s[i];
        s[i] = s[size - i];
        s[size - i] = a;
        i--;
    }
}

int int2bit( unsigned char i,char *str){
    if(i<0)
        return -1;
    int index = 0;
    while(i!=0){
        str[index] = i%2 + '0';
        i/=2;
        index++;
    }
    str[index] = '\0';
    strInversal(str);
    return 0;
}


int main(){
//测试位移运算符
   signed char i = -100;
   char istr[20];
   int2bit(i,istr);
   printf("移动前(%d)：%s\n",i,istr);
   
   signed char iL = i<<4;
   int2bit(iL,istr);
   printf("左移两位(%d)：%s\n",iL,istr);

   signed char iR = i>>2;
   int2bit(iR,istr);
   printf("右移两位(%d)：%s\n",iR,istr);

//位运算的应用，屏蔽某些二进制位
    signed char i1 = -100;
   int2bit(i1,istr);
   printf("处理前(%d)：%s\n",i1,istr);

    signed char i2 = i1 & 017;
    int2bit(i2,istr);

    printf("屏蔽后7位(%d)：%s\n",i2,istr);

    signed char i3 = i1 & ~017;
    int2bit(i3,istr);
    printf("屏蔽后7位(%d)：%s\n",i3,istr);

}