#include <stdio.h>

// 定义一个函数来返回三个数中的最大值
int max(int a, int b, int c) {
    if (a > b) {
        if (a > c) {
            return a;
        } else {
            return c;
        }
    } else {
        if (b > c) {
            return b;
        } else {
            return c;
        }
    }
}

int main() {
    int a = 0, b = 0, c = 0;

    printf("您现在正在进行的是比较三个数的大小\n");
    printf("请输入三个整数:\n");

    scanf("%d%d%d", &a, &b, &c);

    printf("您输入的数值a=%d, b=%d, c=%d\n", a, b, c);

    // 使用max函数来找到最大值
    int max_value = max(a, b, c);

    printf("最大值是: %d\n", max_value);

    return 0;
}