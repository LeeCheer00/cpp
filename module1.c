/*************************************************************************
	> File Name: module1.c
	> Author: 
	> Mail: 
	> Created Time: 2018年10月05日 星期五 16时42分44秒
 ************************************************************************/

#include <stdio.h>


int n = 10;
void func();

int main(){
    func();
    printf("main: %d\n",n);
    return 0;
}

extern int n;
void func(){
    printf("module: %d\n",n);
}
