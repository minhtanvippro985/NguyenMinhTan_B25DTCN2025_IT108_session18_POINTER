#include <stdio.h>
#include <string.h>

int main() {
    char inputString[100];
    char reverseString[100];

    char *pInput;
    char *pReverse;

    printf("Nhap chuoi: ");
    fgets(inputString, sizeof(inputString), stdin);
    inputString[strcspn(inputString, "\n")] = '\0';

    int len = strlen(inputString);

    pInput = inputString;
    pReverse = reverseString;

    for (int i = 0; i < len; i++) {
        *(pReverse + i) = *(pInput + (len - 1 - i));
    }

    *(pReverse + len) = '\0';

    printf("\nban nhap: %s\n", inputString);
    printf("dao nguoc: %s\n", reverseString);

    return 0;
}
