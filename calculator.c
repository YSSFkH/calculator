#include <stdio.h>
#include <math.h> 


void print_menu();

int main() {
    char operator;
    double num1, num2, result;
    int keep_running = 1; 

    printf("===  THE SMART C CALCULATOR ===\n");

    while(keep_running) {
        print_menu();
        printf("Select an operation: ");
        scanf(" %c", &operator); 

        
        if (operator == 'x' || operator == 'X') {
            printf("Exiting... Goodbye!\n");
            break;
        }

       
        if (operator == 's') {
            printf("Enter a number: ");
            scanf("%lf", &num1);
            if (num1 < 0) {
                printf(" Error: Cannot find square root of a negative number!\n");
            } else {
                printf(">> Result: √%.2lf = %.2lf\n", num1, sqrt(num1));
            }
            continue; 
        }

       
        printf("Enter first number: ");
        scanf("%lf", &num1);
        printf("Enter second number: ");
        scanf("%lf", &num2);

        switch (operator) {
            case '+':
                result = num1 + num2;
                printf(">> Result: %.2lf + %.2lf = %.2lf\n", num1, num2, result);
                break;
            case '-':
                result = num1 - num2;
                printf(">> Result: %.2lf - %.2lf = %.2lf\n", num1, num2, result);
                break;
            case '*':
                result = num1 * num2;
                printf(">> Result: %.2lf * %.2lf = %.2lf\n", num1, num2, result);
                break;
            case '/':
                
                if (num2 == 0) {
                    printf(" Error: Division by Zero is not allowed.\n");
                } else {
                    result = num1 / num2;
                    printf(">> Result: %.2lf / %.2lf = %.2lf\n", num1, num2, result);
                }
                break;
            case '^':
                result = pow(num1, num2);
                printf(">> Result: %.2lf ^ %.2lf = %.2lf\n", num1, num2, result);
                break;
            default:
                printf(" Invalid Operator! Please try again.\n");
        }
    }

    return 0;
}

void print_menu() {
    printf("\n----------------------------\n");
    printf("(+) Add   (-) Subtract\n");
    printf("(*) Mult  (/) Divide\n");
    printf("(^) Power (s) Square Root\n");
    printf("(x) Exit Program\n");
    printf("----------------------------\n");
}