#include <stdio.h>

int main() {
    char ch;
    printf("Enter a character: ");
    scanf(" %c", &ch);
    printf("ASCII value of '%c': %d\n", ch, (int)ch);
    if (ch >= 'A' && ch <= 'Z')
    {
        char lower = ch + ('a' - 'A');
        printf("Uppercase letter: %c\n", ch);
        printf("Converted to lowercase: %c\n", lower);
        printf("ASCII value of lowercase: %d\n", (int)lower);
    }
    else if (ch >= 'a' && ch <= 'z')
    {
        char upper = ch - ('a' - 'A');
        printf("Lowercase letter: %c\n", ch);
        printf("Converted to uppercase: %c\n", upper);
        printf("ASCII value of uppercase: %d\n", (int)upper);
    }
    else if (ch >= '0' && ch <= '9')
    {
        printf("Digit: %c\n", ch);
        printf("ASCII value of digit: %d\n", (int)ch);
    }
    else {
        printf("Entered character is not a letter or digit.\n");
    }

    return 0;
}
