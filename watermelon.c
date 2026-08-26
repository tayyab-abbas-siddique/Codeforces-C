// Give a number in input check if it is even and half of of your input is also even. 
// If theese all conditions are true print YES else print NO

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
