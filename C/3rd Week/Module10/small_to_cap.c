#include <stdio.h>

int main() {
    char input_char, output_char;

    scanf("%c", &input_char);

    if (input_char >= 'a' && input_char <= 'z') {
        output_char = input_char - 32;
        printf("%c\n", output_char);
    }
    else {
        printf("Invalid input\n");
    }

    return 0;
}
