#include <stdio.h>
int main(){
    int a=0,b=0,c=0;
    printf ("���������ڽ��е��ǱȽ��������Ĵ�С\n");
    printf ("��������������:\n");
    scanf ("%d%d%d",&a,&b,&c);
    printf ("���������ֵa=%d,b=%d,c=%d\n",a,b,c);
        if(a>b){
            if(a>c){
                printf ("���ֵΪ%d\n",a);
            }
            else{
                printf ("������ֵΪ%d\n",b);
            }
    }else{
            if(b>c){
                printf ("���ֵΪ%d\n",b);
            }
            else{
                printf ("���ֵΪ%d\n",c);
            }
    }
     return 0;
}