/*************************************************************************
	> File Name: Devon.c
	> Author: 
	> Mail: 
	> Created Time: 2018年11月12日 星期一 20时04分17秒
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
int main(){
    int *num = malloc(sizeof(int) * 3);
    num[0] = 5;
    num[1] = 30;
    num[2] = 67;
    free(num);


    printf("%p -> %d\n" , num , *num);
    printf("%p -> %d\n" , num+1 , *(num+1));
    printf("%p -> %d\n" , num+2 , *(num+2));


    return 0;
}
