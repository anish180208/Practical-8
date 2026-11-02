#include <stdio.h>

int main() {
    char str[100];
    char *ptr = str;
    int length = 0;

    printf("Enter any string: ");
    // Read string including spaces until newline
    scanf("%[^\n]", str);

    // Traverse the string using a pointer
    while (*ptr != '\0') {
        length++;
        ptr++;
    }

    printf("The length of a string is: %d\n", length);

    return 0;
}
