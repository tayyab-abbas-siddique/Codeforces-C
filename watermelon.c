#include <stdio.h>
 
int main(){
    int w;
    scanf("%i", &w);
    if (w % 2 == 0 && w > 3){
        printf("Yes");
    }else{
        printf("No");
    }
    return 0;
}

// https://www.codeforces.com/problemset/problem/4/A
