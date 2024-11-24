#include <stdio.h>
int main(){
    int a,b,c;
    printf("Enter the number of elements in the array: ");
    scanf("%d",&a);
    do{
        int b = a%10;//取a的个位数
        int c = c*10 + b;//将b的值放到c的个位上
        a = a/10;   //等同于划掉最后一位数
    }while(a>0);
    printf("%d",c);//打印出整数逆序
}