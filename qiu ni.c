#include <stdio.h>
int main(){
    int num, i=0,ret=0;
    printf ("please type you number:");
    scanf ("%d",&num);
    while(num>0){
        i = num%10;
        ret = ret*10+i;
        num = num/10;
    }
    printf ("the reverse number is %d",ret);
}