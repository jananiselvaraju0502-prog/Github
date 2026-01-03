#include <stdio.h>

int main() {
    int num;

    scanf("%d", &num);

    if (num % 11 == 0) {
        printf("uppercase");
    } else {
        printf("lowercase");
    }

    return 0;
}
