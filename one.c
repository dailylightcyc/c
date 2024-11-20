#include <stdio.h>
int main() {
    int a;
    scanf ("%d",&a);
    if (a<999){
        for (int i=0;a>0;printf ("%d",i)){
            i=i*10+(a%10);
            a/=10;
        }
    }
    return 0;
}
