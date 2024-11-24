#include <stdio.h>

int main() {
    int a = 0;
    int b = 0;
    printf("sure to plus the number?\n");
        scanf ("");
    printf ("please input the number:");
        scanf ("%d", &a);
        int c = 0;
    for (int b=1; b <= a; b++) {
         c += b;
}
    printf("the sum of the number is %d",c);
}