#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc,char* argv[],char* env[])
{

    int i=0;
    for(;env[i];i++)
    {
        printf("env[%i]->%s\n",i,env[i]);
    }
//   printf("this is test for PATH\n");
//   printf("who :%s\n",getenv("USER"));
//   printf("PWD :%s\n",getenv("PWD"));
/* if(argc != 2) */
/* { */
/*     printf("选项错误!!!\n"); */
/* } */
/* else if(strcmp(argv[1],"-a" )== 0 ||strcmp(argv[1],"a")==0) */
/* { */
/*     printf("功能1\n"); */
/* } */
/* else */
/* { */
/*     printf("未知命令。\n"); */
/* } */

     return 0; 
 } 

