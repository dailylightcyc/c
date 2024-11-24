#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
    srand (time(0));
    int nc = 0;
    int n = rand ()%10;
     do{
        printf ("I have a number,coudle u can guess it?\n");
        scanf ("%d",&nc);
        if (nc>n){
            printf ("it's big than it\n");
        }else if (nc<n){
            printf ("it's small than it\n");
        }

     }while(nc != n);
    printf ("you are so fucking a boys\n"
    );
}