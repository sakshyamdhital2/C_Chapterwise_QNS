// input and output in c

#include <stdio.h>

int main() {
    char text[100];
    int i, characters = 0, spaces = 0;

    printf("Enter a line of text:\n");
    gets(text);

    printf("You entered: %s\n", text);

    for (i = 0; text[i] != '\0'; i++) {
        characters++;
        if (text[i] == ' ') {
            spaces++;
        }
    }

    printf("Total characters = %d\n", characters);
    printf("Total spaces = %d", spaces);

    return 0;
}
