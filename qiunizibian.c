#include <stdio.h>
int main(){
    int a,b,c;
    printf("Enter the number of elements in the array: ");
    scanf("%d",&a);
    do{
        int b = a%10;//ȡa�ĸ�λ��
        int c = c*10 + b;//��b��ֵ�ŵ�c�ĸ�λ��
        a = a/10;   //��ͬ�ڻ������һλ��
    }while(a>0);
    printf("%d",c);//��ӡ����������
}