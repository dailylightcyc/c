#include <stdio.h>
 int main()
{
    int am= 0,cm=0; //am为商品总金额，cm为顾客所给金额
    printf("请输入商品总金额：");
    scanf("%d", &am);
    printf("请输入顾客所给金额：");
    scanf("%d", &cm);
    if (cm<am){
        printf("您给的钱不够，还差%d元", am-cm);
    }
    else{ 
        printf("找您%d元。", cm-am);
    }
}