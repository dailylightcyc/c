#include <stdio.h>
int main(){
    int h=0,m=0;
 printf ("please type time:\n");
 scanf("%d:%d",&h,&m);
 if(h<12){
    h=1;
 }else if(h == 12){
    h=2;
 }else if(h<20){
    h=3;
 }else if (h<24){
    h=4;
 }else{
    h=5;
 }
 switch (h){
case 1:
    printf("�����\n");
    break;
case 2:
    printf("�����\n");
    break;
case 3:
    printf("�����\n");
    break;
case 4:
    printf("���Ϻ�\n");
    break;
 
 default:
    printf("�������ǻ�������");
    break;
 }
    return 0;
}