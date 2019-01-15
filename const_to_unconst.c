/*************************************************************************
	> File Name: const_to_unconst.c
	> Author: 
	> Mail: 
	> Created Time: 2019年01月05日 星期六 11时43分36秒
 ************************************************************************/

#include<stdio.h>
void func(char *str){}


int main(){
    const char *str1 = "c.biancheng.net";
    char *str2 = str1;
    func(str1);
    return 0;
}
