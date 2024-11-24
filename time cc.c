#include <stdio.h>
int main()
{
    int hour1,minute1;
    int hour2,minute2;
    printf ("请输入第一时区的时间\n");
    scanf ("%d:%d",&hour1,&minute1);
    printf ("请输入第二时区的时间:\n");
    scanf ("%d:%d",&hour2,&minute2);
    int a=(hour1*60+minute1), b=(hour2*60+minute2);
    int t = b - a;
    if (t<0) {t = -t;}
    printf ("两个时区的时间差为:%d小时%d分钟\n",t/60,t%60);
    return 0;
}