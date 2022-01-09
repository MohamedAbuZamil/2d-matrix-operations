#include<stdio.h>
#include<stdlib.h>
#include"Header.h"
// main function
int main()
{
    // matrix
    int a[50][50], b[50][50], c[50][50];
    // input both matrix
    printf("First Matrix :\n");
    input1(a);
    printf("\n\nSecond Matrix :\n");
    input2(b);
    // print both matrix 
    printf("\nFirst Matrix :\n");
    display1(a);
    printf("\nSecond Matrix :\n");
    display2(b);

    // variable to take choice
    int choice;

    // menu-driven
    do
    {
        // menu to choose the operation
        printf("\n\nChoose the matrix operation,\n");
        printf("----------------------------\n");
        printf("1. Addition\n");
        printf("2. Multiplication\n");
        printf("3. Transpose\n");
        printf("4. Check Symmetric\n");
        printf("5. Check magic square\n");
        printf("6. enter new matrices\n");
        printf("7. exit\n");
        printf("----------------------------\n\n");
        printf("Enter your choice: ");
        scanf_s("%d", &choice);

        switch (choice) {
        case 1:
            if (r1 == r2 && c1 == c2) {
                add(a, b, c);
                printf("\nSum of matrix: \n");
                display1(c);
            }
            else
                printf("r1!=r2orc1!=c1");
            break;
        case 2:
            if (r1 == c2)
            {
                multiply(a, b, c);
                printf("\nMultiplication of matrix: \n");
                display1(c);
            }
            else
                printf("r1!=c2");
            break;


        case 3: 
            if (r1 == c1) {
                printf("\nTranspose of the first matrix: \n");
                transpose1(a, c);
                display1(c);
            }
            else
                printf("can not transpose first matrix (r1!=c1)");
            if (r2 == c2) {
                printf("\nTranspose of the second matrix: \n");
                transpose2(b, c);
                display2(c);
            }
            else
                printf("can not transpose second matrix (r2!=c2)");
            break;
        case 4:
            printf("\nCheck of the first matrix: \n");
            symmetric1(a, c);
            display1(a);
            printf("\nCheck of the second matrix: \n");
            symmetric2(b, c);
            display2(b);
            break;
        case 5:
            printf("\nCheck of the first matrix: \n");
            magic1(a);
            display1(a);
            printf("\nCheck of the second matrix: \n");
            magic2(b);
            display2(b);
            break;
        case 6:
            printf("First Matrix :\n");
            input1(a);
            printf("\n\nSecond Matrix :\n");
            input2(b);
            // print both matrix 
            printf("\nFirst Matrix :\n");
            display1(a);
            printf("\nSecond Matrix :\n");
            display2(b);

            break;
        case 7:
            printf("Thank You.\n");
            exit(0);
        default:
            printf("Invalid input.\n");
            printf("Please enter the correct input.\n");

        }
    } while (1);

    return 0;
}