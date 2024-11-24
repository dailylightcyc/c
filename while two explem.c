#include <stdio.h>

int main() {
    int num;
    int numn=0;
    printf("please type the number:\n");
    scanf("%d", &num);
    while(num>0){
        num=num/10;
        numn++;
    }
    printf("The number of digits is %d\n", numn);
}
//This program will ask the user to enter a number and then it will calculate the number of digits in the number.


#include <stdio.h>

int main() {
    int num;
    int numn=0;
    printf("please type the number:\n");
    scanf("%d", &num);
    do{
        num=num/10;
        numn++;
    }while (num>0);
    printf("The number of digits is %d\n", numn);
}
//This program will ask the user to enter a number and then it will calculate the number of digits in the number.