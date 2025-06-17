#include <stdio.h>

int main() {
    int i;

    printf("Os 10 primeiros números pares são:\n");
    
    for (i = 1; i <= 10; i++) {
        printf("%d\n", i * 2);
    }

    return 0;
}

