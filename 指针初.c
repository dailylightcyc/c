#include <stdio.h>
 void swap(int *a,int *b);
 int main(){
    int a, b;
    printf("enter the value of a \n");
    scanf ("%d",&a);
    printf("enter the value of b \n");
    scanf ("%d",&b);
    swap(&a,&b);
    printf("a now is %d,b now is %d",a,b);
    return 0;
 }
  void swap(int *a,int *b){
    int c=0;
     c=*a;
    *a=*b;
    *b=c;
  }