#include<stdio.h>
#include<stddef.h>
int main(){
    char c[] = "1234";
    char *p1 = &c[1];
    char *p2 = &c[2];
    if(p1 < p2){
        printf("p2 - p1 = %d\n",p2 - p1);
    }  
}