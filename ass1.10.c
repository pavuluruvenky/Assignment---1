#include <stdio.h>

int main() {
    int num;
    printf("Enter a positive integer greater than 1: ");
    scanf("%d", &num);

    int i, isComposite = 0;
    for (i = 2; i < num; i++) {
        if (num % i == 0) {
            isComposite = 1;
            break;
        }
    }

    if (isComposite) {
        printf("%d is a composite number.\n", num);
    } else {
        printf("%d is not a composite number.\n", num);
    }

    return 0;
}
