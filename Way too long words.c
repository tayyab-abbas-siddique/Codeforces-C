#include <stdio.h>
#include <string.h>

int main(){
    int n;
    scanf("%i", &n);
    for (int i = 0; i < n; i++){
        
        char word[101];
        scanf("%100s", word);
        int len = strlen(word);
        
        if(len > 10)
        {
            char a = word[0];
            char b = word[len - 1];
            int c = len - 2;
            printf("%c%d%c\n", a, c, b);
        }
        
        else
        {
            printf("%s\n", word);
        }
    }
        return 0;
}

// https://www.codeforces.com/problemset/problem/71/A
