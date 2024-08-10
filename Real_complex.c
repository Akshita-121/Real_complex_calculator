/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
//Calculator program
#include <stdio.h>
#include <stdlib.h>
// Structure to hold a complex number
typedef struct {
    double real;
    double imag;
} Complex;

// Function to get a complex number from the user
Complex get_complex_from_user() {
    Complex num;
    printf("Enter the real part: ");
    scanf("%lf", &num.real);
    printf("Enter the imaginary part: ");
    scanf("%lf", &num.imag);
    return num;
}


// Function to add two complex numbers
Complex add_complex(Complex a, Complex b) {
    Complex result;
    result.real = a.real + b.real;
    result.imag = a.imag + b.imag;
    return result;
}

// Function to subtract two complex numbers
Complex subtract_complex(Complex a, Complex b) {
    Complex result;
    result.real = a.real - b.real;
    result.imag = a.imag - b.imag;
    return result;
}

// Function to multiply two complex numbers
Complex multiply_complex(Complex a, Complex b) {
    Complex result;
    result.real = a.real * b.real - a.imag * b.imag;
    result.imag = a.real * b.imag + a.imag * b.real;
    return result;
}

// Function to divide two complex numbers
Complex divide_complex(Complex a, Complex b) {
    Complex result;
    double denom = b.real * b.real + b.imag * b.imag;
    result.real = (a.real * b.real + a.imag * b.imag) / denom;
    result.imag = (a.imag * b.real - a.real * b.imag) / denom;
    return result;
}

int main()
{
    int numtype,menu1,menu2; //Variable for the number the user inputs
    float num1, num2, result; //Float variables for the user input and output, used floats in case the user enters e.g. 14.7
    Complex num3, num4;
    Complex sum, diff, prod, quot;
    printf("Select a number type from the list below\n\n");
    printf("1. Real\n");
    printf("2. Complex\n");
    printf("Enter number: ");
    scanf("%d",&numtype);
    printf("\n");
    
    switch(numtype) // switch statement for numtype
    {
        case 1:
        
       { 
          printf("Enter a number from the list below\n\n");

          printf("1. Addition\n"); //Calculator menu, user must enter a value from 1 - 4 for the program to work
          printf("2. Subtraction\n");
          printf("3. Multiplication\n");
          printf("4. Division\n\n");

          printf("Enter number: "); //User input for the calculator menu
          scanf("%d", &menu1);

          printf("\n");

             switch(menu1) //switch statement for menu
           {
            case 1:
                printf("You entered Addition\n\n");

                printf("Enter first number: "); //User input for first number
                scanf("%f", &num1);

                printf("Enter second number: "); //User input for second number
                scanf("%f", &num2);

                printf("\n");

                result = num1 + num2; //Addition calculation

                printf("%.2f + %.2f = %.2f\n", num1, num2, result); //Addition output
                break;
            case 2:
                printf("You entered Subtraction\n\n");

                printf("Enter first number: "); //User input for first number
                scanf("%f", &num1);

                printf("Enter second number: "); //User input for second number
                scanf("%f", &num2);

                printf("\n");

                result = num1 - num2; //Subtraction calculation

                printf("%.2f - %.2f = %.2f\n", num1, num2, result); //Subtraction output
                break;
            case 3:
                printf("You entered Multiplication\n\n");

                printf("Enter first number: "); //User input for first number
                scanf("%f", &num1);

                printf("Enter second number: "); //User input for second number
                scanf("%f", &num2);

                printf("\n");

                result = num1 * num2; //Multiplication calculation

                printf("%.2f * %.2f = %.2f\n", num1, num2, result); //Multiplication Output
                break;
            case 4:
                printf("You entered Division\n\n");

                printf("Enter first number: "); //User input for first number
                scanf("%f", &num1);

                printf("Enter second number: "); //User input for first number
                scanf("%f", &num2);

                printf("\n");

                result = num1 / num2; //Division calculation

                printf("%.2f / %.2f = %.2f\n", num1, num2, result);
                break;
            default:
            printf("Enter correct number e.g 1 - 4\n"); //Outputted if the user enters a value other than 1 - 4
            break;
            }
        }
        break;
        case 2:
        {
            printf("Enter the first complex number:\n");
            num3 = get_complex_from_user();
            printf("Enter the second complex number:\n");
            num4 = get_complex_from_user();

            printf("Enter a number from the list below:\n\n ");
            
            printf("5. Addition\n"); //Calculator menu, user must enter a value from 1 - 4 for the program to work
            printf("6. Subtraction\n");
            printf("7. Multiplication\n");
            printf("8. Division\n\n");
            
            printf("Enter number: "); //User input for the calculator menu
            scanf("%d", &menu2);

            printf("\n");
              switch(menu2) //switch statement for menu
            {
                case 5:
                sum = add_complex(num3, num4);
                printf("Sum: %.2f + %.2fi\n", sum.real, sum.imag);
                break;
                
                case 6:
                diff = subtract_complex(num3, num4);
                printf("Difference: %.2f + %.2fi\n", diff.real, diff.imag);
                break;
                
                case 7:
                prod = multiply_complex(num3, num4);
                printf("Product: %.2f + %.2fi\n", prod.real, prod.imag);
                break;
                
                case 8:
                quot = divide_complex(num3, num4);
                printf("Quotient: %.2f + %.2fi\n", quot.real, quot.imag);
                break;
                
                default:
                printf("Enter correct number e.g 5 - 8\n"); //Outputted if the user enters a value other than 5 - 8
                break;
            }  
        }
    }    
    return 0;
}
//End of code