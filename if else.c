#include <stdio.h>

// ����һ�������������������е����ֵ
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

    printf("���������ڽ��е��ǱȽ��������Ĵ�С\n");
    printf("��������������:\n");

    scanf("%d%d%d", &a, &b, &c);

    printf("���������ֵa=%d, b=%d, c=%d\n", a, b, c);

    // ʹ��max�������ҵ����ֵ
    int max_value = max(a, b, c);

    printf("���ֵ��: %d\n", max_value);

    return 0;
}