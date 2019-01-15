/*************************************************************************
	> File Name: test.c
	> Author: 
	> Mail: 
	> Created Time: 2018年11月12日 星期一 20时16分25秒
 ************************************************************************/

#include<stdio.h>

#include<stdlib.h>


int main(){
    int *num = malloc(sizeof(int) * 3);
    *(num+0) = 5;
    *(num+1) = 30;
    *(num+2) = 67;
    free(num);
    
    printf("%d\n", num[0]);
    printf("%d\n", num[1]);
    printf("%d\n", num[2]);
    return 0;
}
