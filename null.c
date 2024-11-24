#include <stdio.h>
int main(){
    int a=0,b=0,c=0;
    printf ("您现在正在进行的是比较三个数的大小\n");
    printf ("请输入三个整数:\n");
    scanf ("%d%d%d",&a,&b,&c);
    printf ("您输入的数值a=%d,b=%d,c=%d\n",a,b,c);
        if(a>b){
            if(a>c){
                printf ("最大值为%d\n",a);
            }
            else{
                printf ("最大最大值为%d\n",b);
            }
    }else{
            if(b>c){
                printf ("最大值为%d\n",b);
            }
            else{
                printf ("最大值为%d\n",c);
            }
    }
     return 0;
}