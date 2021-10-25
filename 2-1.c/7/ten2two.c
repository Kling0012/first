#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define KETA 7 

/* 10進数nを7桁の2進数に変換して出力 */
void print_binary(int n)
{
    /* 配列で2進数を表現．1101 は {0, 0, 0, 1, 1, 0, 1} */
    int i, digits[KETA] = {0};

    /* ここで基数変換する */

    for (i = 0; i < KETA; i++) {
        printf("%d", digits[i]);
    }
    printf("\n");
}

int main(void) {
    int n;
    printf("10進数を入力してください:");
    scanf("%d", &n);
    print_binary(n);
}
