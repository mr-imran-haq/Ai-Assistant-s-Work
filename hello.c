#include <stdio.h>
#include <math.h>

/**
 * Performs basic arithmetic and scientific calculations.
 */

double add(double first_operand, double second_operand) {
    return first_operand + second_operand;
}

double subtract(double first_operand, double second_operand) {
    return first_operand - second_operand;
}

double multiply(double first_operand, double second_operand) {
    return first_operand * second_operand;
}

double divide(double first_operand, double second_operand) {
    return (second_operand != 0) ? (first_operand / second_operand) : NAN;
}

double calculate_power(double base, double exponent) {
    return pow(base, exponent);
}

double calculate_square_root(double value) {
    return (value >= 0) ? sqrt(value) : NAN;
}

double calculate_logarithm(double value) {
    return (value > 0) ? log10(value) : NAN;
}

double calculate_sine(double angle_degrees) {
    return sin(angle_degrees * M_PI / 180.0);
}

double calculate_cosine(double angle_degrees) {
    return cos(angle_degrees * M_PI / 180.0);
}

double calculate_tangent(double angle_degrees) {
    return tan(angle_degrees * M_PI / 180.0);
}

int main() {
    int menu_choice;
    double first_input, second_input, result;

    while (1) {
        printf("\n--- Scientific Calculator ---\n");
        printf("1.Add 2.Sub 3.Mul 4.Div 5.Pow 6.Sqrt 7.Log 8.Sin 9.Cos 10.Tan 0.Exit\n");
        printf("Choice: ");
        if (scanf("%d", &menu_choice) != 1) break;

        if (menu_choice == 0) {
            break;
        }

        if (menu_choice >= 1 && menu_choice <= 4) {
            printf("Enter two numbers: ");
            scanf("%lf %lf", &first_input, &second_input);
            if (menu_choice == 1) result = add(first_input, second_input);
            else if (menu_choice == 2) result = subtract(first_input, second_input);
            else if (menu_choice == 3) result = multiply(first_input, second_input);
            else result = divide(first_input, second_input);
        } else if (menu_choice == 5) {
            printf("Enter base and exponent: ");
            scanf("%lf %lf", &first_input, &second_input);
            result = calculate_power(first_input, second_input);
        } else if (menu_choice >= 6 && menu_choice <= 7) {
            printf("Enter number: ");
            scanf("%lf", &first_input);
            result = (menu_choice == 6) ? calculate_square_root(first_input) : calculate_logarithm(first_input);
        } else if (menu_choice >= 8 && menu_choice <= 10) {
            printf("Enter angle in degrees: ");
            scanf("%lf", &first_input);
            if (menu_choice == 8) result = calculate_sine(first_input);
            else if (menu_choice == 9) result = calculate_cosine(first_input);
            else result = calculate_tangent(first_input);
        } else {
            printf("Invalid choice!\n");
            continue;
        }

        if (isnan(result)) {
            printf("Error: Invalid operation\n");
        } else {
            printf("Result: %.4lf\n", result);
        }
    }

    return 0;
}