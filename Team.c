#include <stdio.h>

int main(void)
{
    int t;
    int count = 0;

    scanf("%d", &t);

    for (int i = 0; i < t; i++) {
        int a, b, c;

        scanf("%d %d %d", &a, &b, &c);

        if (a + b + c > 1) {
            count++;
        }
    }

    printf("%d\n", count);
    return 0;
}

// https://www.codeforces.com/problemset/ptoblem/231/A
