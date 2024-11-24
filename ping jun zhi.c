#include <stdio.h>
int main(){
    int sum = 0,cont=0,num=0;
    while(num != -1){
        sum += num;
        cont++;
        printf("enter a number: ");
        scanf("%d",&num);
        if (num != -1){    
        sum += num;
        printf("enter a number2: ");
        scanf ("%d",&num);
        }
    }
    printf("the sum is: %.3f\n", 1.0*sum/cont);
    return 0;
}

//需要两次判断，否则第一次输入-1时，程序会出错
