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
    printf("上午好\n");
    break;
case 2:
    printf("中午好\n");
    break;
case 3:
    printf("下午好\n");
    break;
case 4:
    printf("晚上好\n");
    break;
 
 default:
    printf("你妈你是火星人吗？");
    break;
 }
    return 0;
}