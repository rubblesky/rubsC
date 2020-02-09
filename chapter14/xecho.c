#include<stdio.h>

int main(int argc, char *argv[]){
    printf("program = %s\n",argv[0]);
    printf("argc = %d\n",argc);
    for(int i = 1; i<argc;i++){
        printf("%s%s",argv[i],(i<argc-1)? " ":"");
    }
    printf("\n");
    return 0;
}