#include <stdio.h>
#include <stdbool.h>
 void add(int a,int b){
    int i;
    i = a;
    int addall= 0;
    for (a=i; i <= b; i++){
        addall += i;
    }
        printf("%d\n", addall);
 }
int main(){
    bool check = true;
    while (check == true){
        int a,b;
        printf("please enter two numbers as 'begin end ':\n ");
        scanf("%d %d", &a, &b);
        add(a,b);
    }
    return 0;
}