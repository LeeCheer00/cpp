/*************************************************************************
	> File Name: main.c
	> Author: leecheer
	> Mail: tolq@foxmail.com
	> Created Time: 2018年10月04日 星期四 20时53分25秒
 ************************************************************************/

#include<stdio.h>
int atexit (void (*function)(void));
#include <stdio.h>
#include <stdlib.h>


void fn1(void), fn2(void), fn3(void), fn4(void);
int main(void){
    atexit(fn1);
    atexit(fn2);
    atexit(fn3);
    atexit(fn4);
    printf("This is executed first.\n");
}


void fn1(){
    printf("next.\n");
}


void fn2(){
    printf("excuted ");
}

void fn3(){
    printf("is ");
}

void fn4(){
    printf("This ");
}
