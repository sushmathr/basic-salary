#include <stdio.h>

int main() {
    int input_data, shifted_data;

    printf("Enter input data: ");
    scanf("%d", &input_data);

    shifted_data = input_data << 2;

    printf("Original data: %d\n", input_data);
    printf("Shifted data by two bits to the left: %d\n", shifted_data);

    return 0;
}