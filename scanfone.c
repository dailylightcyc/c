#include <stdio.h>
 int main()
{
    int am= 0,cm=0; //amΪ��Ʒ�ܽ�cmΪ�˿��������
    printf("��������Ʒ�ܽ�");
    scanf("%d", &am);
    printf("������˿�������");
    scanf("%d", &cm);
    if (cm<am){
        printf("������Ǯ����������%dԪ", am-cm);
    }
    else{ 
        printf("����%dԪ��", cm-am);
    }
}