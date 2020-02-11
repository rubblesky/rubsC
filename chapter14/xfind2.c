#include<stdio.h>
#include<string.h>
#define MAXLINE 1000
//读取一行存在s中
//返回字符串长度
int getLine(char s[], int lim){
    int c,i;
    int static num = 0;
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
    long lineno = 0;
    int c, except =0,number =0, found = 0;
    //printf("*argv[2] = %s\n",argv[2]);
    printf("argc = %d\n",argc);
    while(--argc > 0 && (*++argv)[0] == '-'){
        //printf("argv[0] = %s\n",*argv);
        while (c = *++argv[0]){
            //printf("c = %c\n",**argv);
            switch (c)
            {
            case 'x':
                except = 1;
                break;
            case 'n':
                number = 1;
                break;
            default:
                printf("xfind: illegal option %c\n",c);
                argc = 0;
                found = -1;
                break;
            }
        }
    }
    printf("argc2 = %d\n",argc);
    //printf("*argv = %s\n",*(argv-1));
    if(argc != 1)
        printf("Usage: find -x -n pattern\n");
    else
        while (getLine(line,MAXLINE)>0){
            lineno++;
            //printf("*argv = %s\n",*argv);
            if((strstr(line,*argv) != NULL)!=except){
                if(number)
                    printf("%ld:",lineno);
                printf("%s",line);
                found++;
            }
        }      
    return found;
}