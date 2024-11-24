#include <stdio.h>
int n=0,cut =1;
double sum =0;
int shuz[50];
int main(){
    printf ("now u have 50 number can type\n");
    printf ("please type the number u want to add as one by one\n");
    while(n != -1){
        scanf ("%d",&n);
        if (n != -1){
            shuz[cut] = n;
            sum += n;
            cut++;
        }else{
            printf ("The current sum value is%.2f \n",sum);
            printf ("The average of current is%.2f \n",sum/(cut-1));
        }if(n == -1){
            for (int i =0; i<=cut; i++){
                if (shuz[i]> sum/(cut-1)){
                    printf ("big than average is%d ,value is %d \n",i,shuz[i]);
            }
        }
    }
}
}