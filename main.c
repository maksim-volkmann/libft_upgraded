#include <stdio.h>

int main() {
    char *str = "Hello, World!";
    int num = 12345;
    char ch = 'A';

    // Test 1: Printing a string
    printf("Expected: %s\n", str);
    ft_printf("Output: %s\n", str);

    // Test 2: Printing an integer
    printf("Expected: %d\n", num);
    ft_printf("Output: %d\n", num);

    // Test 3: Printing a character
    printf("Expected: %c\n", ch);
    ft_printf("Output: %c\n", ch);

    return 0;
}
