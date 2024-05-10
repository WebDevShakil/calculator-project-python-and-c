#include <stdio.h>
#include <math.h>

float add(float x, float y) {
    return x + y;
}

float subtract(float x, float y) {
    return x - y;
}

float multiply(float x, float y) {
    return x * y;
}

float divide(float x, float y) {
    if (y == 0) {
        printf("Error! Division by zero.\n");
        return 0;
    } else {
        return x / y;
    }
}

float power(float x, float y) {
    return pow(x, y);
}
float square_root(float x) {
    return sqrt(x);
}

float logarithm(float x, float base) {
    return log10(x) / log10(base);
}

float sine(float x) {
    return sin(x);
}

float cosine(float x) {
    return cos(x);
}

float tangent(float x) {
    return tan(x);
}

int main() {
    printf("Welcome to the Scientific Calculator!\n");
    printf("Select operation:\n");
    printf("1. Add\n");
    printf("2. Subtract\n");
    printf("3. Multiply\n");
    printf("4. Divide\n");
    printf("5. Power\n");
    printf("6. Square Root\n");
    printf("7. Logarithm\n");
    printf("8. Sine\n");
    printf("9. Cosine\n");
    printf("10. Tangent\n");

    int choice;
    printf("Enter choice (1-10): ");
    scanf("%d", &choice);

    float num1, num2, num, base;
    switch (choice) {
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
            printf("Enter first number: ");
            scanf("%f", &num1);
            printf("Enter second number: ");
            scanf("%f", &num2);
            if (choice == 1) {
                printf("Result: %.2f\n", add(num1, num2));
            } else if (choice == 2) {
                printf("Result: %.2f\n", subtract(num1, num2));
            } else if (choice == 3) {
                printf("Result: %.2f\n", multiply(num1, num2));
            } else if (choice == 4) {
                printf("Result: %.2f\n", divide(num1, num2));
            } else if (choice == 5) {
                printf("Result: %.2f\n", power(num1, num2));
            }
            break;
        case 6:
        case 7:
        case 8:
        case 9:
        case 10:
            printf("Enter a number: ");
            scanf("%f", &num);
            if (choice == 6) {
                printf("Result: %.2f\n", square_root(num));
            } else if (choice == 7) {
                printf("Enter base (default is 10): ");
                scanf("%f", &base);
                printf("Result: %.2f\n", logarithm(num, base));
            } else if (choice == 8) {
                printf("Result: %.2f\n", sine(num));
            } else if (choice == 9) {
                printf("Result: %.2f\n", cosine(num));
            } else if (choice == 10) {
                printf("Result: %.2f\n", tangent(num));
            }
            break;
        default:
            printf("Invalid input. Please enter a number between 1 and 10.\n");
    }

    return 0;
}