#include<stdio.h>
#include<string.h>
#define MAXLINE 1000
//读取一行存在s中
//返回字符串长度
int getLine(char s[], int lim){
    int c,i;
    for(i = 0;i<lim-1&&(c=getchar())!=EOF&&c!='\n';++i)
        s[i] = c;
    if(c == '\n'){
        s[i] = c;
        ++i;
    }
    s[i] = '\0';
    return i;
}

int main(int argc,char *argv[]){
    char line[MAXLINE];
    int found = 0;

    if(argc != 2){
        printf("Usage: find pattern\n");
    }
    else{
        while (getLine(line,MAXLINE)>0){
            if(strstr(line,argv[1]) != NULL){
                //返回某字符第一次出现的位置
                //如果没有出现返回NULL
                printf("%s",line);
                found++;
            }
        }
    }
    return found;
}