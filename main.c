#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <conio.h>

int main()
{
    float num1, num2, result;
    char op = '0';

    do {

        printf("======= CALCULATOR 2.0 =======\n\n");

        num1 = num2 = result = 0; //resetar as variáveis

        //imprime opções da calculadora
        printf(" (1) somar\n");
        printf(" (2) subtrair\n");
        printf(" (3) dividir\n");
        printf(" (4) multiplicar\n");
        printf(" (Q) sair do programa\n\n");

        printf("Inform the operation: \n>> ");
        op = getche();

        if (op != 'Q') {
            printf("\nEnter the first number: \n>> ");
            scanf("%f", &num1);
            printf("Enter the second number: \n>> ");
            scanf("%f", &num2);

            if (op == '1') {
                result = num1 + num2;
                printf("\nThe sum result is: %f\n\n", result);
            }
            if (op == '2') {
                result = num1 - num2;
                printf("\nThe subtraction is: %f\n\n", result);
            }

            if (op == '3') {
                result = num1 / num2;
                printf("\nThe division is: %f\n\n", result);
            }
            if (op == '4') {
                result = num1 * num2;
                printf("\nThe multiplication is: %f\n\n", result);
            }

            } else {
            printf("\n\nBYE :)\n");
        }
            //system("pause");

            printf("Press any key to continue!");
            getch();

            system("cls");

    } while ( op != 'Q');

    }



