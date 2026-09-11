#include <stdio.h>
int main()
{
    int n, k;
    scanf("%d%d", &n, &k);

    int a[n];

    for(int j = 0; j < n; j++){
        scanf("%d", &a[j]);
    }

    int count = 0;
    int ans = a[k - 1];

    for (int i = 0; i < n; i++){
        if(a[i] >= ans && a[i] != 0){
            count++;
        }
    }
    printf("%d", count);
}

// https://www.codeforces.com/problemset/problem/158/A
