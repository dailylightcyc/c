#include <stdio.h>
int main(){
    int a,b,c;
    scanf ("%d %d",&a,&b);
    c=a;
    switch (b){
        case 1:
            for(int i=1;i<=a;i++){
                    for (int j=1;j<=i;j++){
                                printf ("* ");};
                printf ("\n");
            };
            break;
        case 2:
            for(int i=1;i<=a;i++){
                    for(int i=1;i<=a;i++){
                                printf ("* ");}
                printf ("\n");
            }
            break;
        default:printf ("Invalid input");
    }
    return 0;
}