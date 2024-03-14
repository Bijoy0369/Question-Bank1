#include <stdio.h>

int main() {
    int decimal, binary[32], i = 0;

    // Take user input for the decimal number
    printf("Enter a decimal number: ");
    scanf("%d", &decimal);

    // Conversion process
    while (decimal > 0) {
        binary[i++] = decimal % 2;
        decimal /= 2;
    }

    // Display the binary number
    printf("Binary equivalent: ");
    for (int j = i - 1; j >= 0; j--)
        printf("%d", binary[j]);
    
    printf("\n");

    return 0;
}
