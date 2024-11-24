#include <stdio.h>
int main(){
    int a;
    char c;
    scanf("%d",&a);
    getchar();
    scanf ("%c",&c);
    switch(c){
        case 'm':printf ("%.2lf\n",(double)a);break;
        case 'km':printf ("%.2lf\n",(double)a*1000);break;
        case 'ft':printf ("%.2lf\n",(double)a*0.3048);break;
        default:printf ("Invalid unit\n");
    }
    }