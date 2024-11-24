#include <stdio.h>
int main(){
printf ("please enter a number: ");
int num,num2,t;
scanf("%d", &num);
    num2 = num;
for (t=1;num2>9;num2/=10)t*=10;
    do {
    num2 = num/t;
    printf("%d",num2);
    if (t>9)printf (" ");
        num %= t;
        t /= 10;
}while(t>0);
}