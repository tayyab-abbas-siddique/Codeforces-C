#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);

    int x = 0;

    for (int i = 0; i < n; i++){
        
        char a[4];
        scanf("%s", a);

        char ans = a[1];

        if (ans == '+'){
            x++;
        }else{
            x--;
        }
        
    }
        printf("%d", x);
        return 0;
}

// https://www.codeforces.com/problemset/problem/282/A
