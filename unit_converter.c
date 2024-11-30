#include <stdio.h>

void convertUnits() {
    int choice;
    float input, result;

    printf("Unit Converter Program\n");
    printf("Choose a conversion type:\n");
    printf("1. Meters to Kilometers\n");
    printf("2. Kilometers to Meters\n");
    printf("3. Grams to Kilograms\n");
    printf("4. Kilograms to Grams\n");
    printf("Enter your choice (1-4): ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Enter the value in meters: ");
            scanf("%f", &input);
            result = input / 1000.0;
            printf("%.2f meters is equal to %.2f kilometers.\n", input, result);
            break;

        case 2:
            printf("Enter the value in kilometers: ");
            scanf("%f", &input);
            result = input * 1000.0;
            printf("%.2f kilometers is equal to %.2f meters.\n", input, result);
            break;

        case 3:
            printf("Enter the value in grams: ");
            scanf("%f", &input);
            result = input / 1000.0;
            printf("%.2f grams is equal to %.2f kilograms.\n", input, result);
            break;

        case 4:
            printf("Enter the value in kilograms: ");
            scanf("%f", &input);
            result = input * 1000.0;
            printf("%.2f kilograms is equal to %.2f grams.\n", input, result);
            break;

        default:
            printf("Invalid choice. Please run the program again.\n");
    }
}

int main() {
    convertUnits();
    return 0;
}