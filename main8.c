#include <stdio.h>
#include <math.h>
int main(){
    int a;
    printf("Enter a positive integer:\n");
    scanf("%d", &a);
    while (a < 0){
        printf("Invalid input. Please a positive integer.\n");
        scanf("%d", &a);
    }
    for (int i = 1; i <= a; i++){
        printf("%d\n", i * i);
    }
    return 0;
}