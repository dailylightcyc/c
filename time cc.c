#include <stdio.h>
int main()
{
    int hour1,minute1;
    int hour2,minute2;
    printf ("�������һʱ����ʱ��\n");
    scanf ("%d:%d",&hour1,&minute1);
    printf ("������ڶ�ʱ����ʱ��:\n");
    scanf ("%d:%d",&hour2,&minute2);
    int a=(hour1*60+minute1), b=(hour2*60+minute2);
    int t = b - a;
    if (t<0) {t = -t;}
    printf ("����ʱ����ʱ���Ϊ:%dСʱ%d����\n",t/60,t%60);
    return 0;
}