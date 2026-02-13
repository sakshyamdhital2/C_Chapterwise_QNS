// String Operations (without built-in functions)

#include <stdio.h>

int main() {
    char str[50];
    int i, length = 0, flag = 1;

    printf("Enter a string: ");
    scanf("%s", str);

    while (str[length] != '\0')
        length++;

    for (i = 0; i < length / 2; i++) {
        if (str[i] != str[length - i - 1]) {
            flag = 0;
            break;
        }
    }

    if (flag)
        printf("Palindrome\n");
    else
        printf("Not Palindrome\n");

    for (i = 0; i < length; i++) {
        if (str[i] >= 'a' && str[i] <= 'z')
            str[i] = str[i] - 32;
    }

    printf("Uppercase string: %s", str);

    return 0;
}
