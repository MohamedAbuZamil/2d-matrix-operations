#pragma once
#include<stdio.h>
//rows and columns
int r1, c1, r2, c2;

//input function
void input1(int matrix[50][50])
{
    printf("Please enter the number of rows : ");
    scanf_s("%d", &r1);
    printf("Please enter the number of columns : ");
    scanf_s("%d", &c1);

    for (int i = 0; i < r1; i++)
        for (int j = 0; j < c1; j++)
            scanf_s("%d", &matrix[i][j]);
}

void input2(int matrix[50][50])
{
    printf("Please enter the number of rows : ");
    scanf_s("%d", &r2);
    printf("Please enter the number of columns : ");
    scanf_s("%d", &c2);

    for (int i = 0; i < r2; i++)
        for (int j = 0; j < c2; j++)
            scanf_s("%d", &matrix[i][j]);

}
// function to display matrix
void display1(int matrix[50][50])
{
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
            printf("%d\t", matrix[i][j]);
        printf("\n"); // new line
    }
}
void display2(int matrix[50][50])
{
    for (int i = 0; i < r2; i++)
    {
        for (int j = 0; j < c2; j++)
            printf("%d\t", matrix[i][j]);
        printf("\n"); // new line
    }
}



// function to add two matrix
void add(int m[50][50], int n[50][50], int sum[50][50])
{

    for (int i = 0; i < r1; i++)
        for (int j = 0; j < c1; j++)
            sum[i][j] = m[i][j] + n[i][j];



}

//funcation multiply
void multiply(int m[50][50], int n[50][50], int result[50][50])
{

    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            result[i][j] = 0;

            for (int k = 0; k < r1; k++)
                result[i][j] += m[i][k] * n[k][j];
        }
    }
}


// function to find transpose of a matrix
void transpose1(int matrix[50][50], int trans1[50][50])
{
    for (int i = 0; i < r1; i++)
        for (int j = 0; j < c1; j++)
            trans1[i][j] = matrix[j][i];
}
void transpose2(int matrix[50][50], int trans2[50][50])
{
    for (int i = 0; i < r1; i++)
        for (int j = 0; j < c1; j++)
            trans2[i][j] = matrix[j][i];
}





//function cheak symmetric
void symmetric1(int matrix[50][50], int trans[50][50]) {
    int i, j;

    for (i = 0; i < r1; i++)
        for (j = 0; j < c1; j++)
            trans[j][i] = matrix[i][j];

    if (r1 == c1) /* check if order is same */
    {
        for (i = 0; i < r1; i++)
        {
            for (j = 0; j < r1; j++)
            {
                if (matrix[i][j] != trans[i][j])
                    break;
            }
            if (j != r1)
                break;
        }
        if (i == r1)
            printf("The matrix is symmetric.\n");
        else
            printf("The matrix isn't symmetric.\n");
    }
    else
        printf("The matrix isn't symmetric.\n");

}
void symmetric2(int matrix[50][50], int trans[50][50]) {
    int i, j;

    for (i = 0; i < r2; i++)
        for (j = 0; j < c2; j++)
            trans[j][i] = matrix[i][j];

    if (r2 == c2) /* check if order is same */
    {
        for (i = 0; i < r2; i++)
        {
            for (j = 0; j < r2; j++)
            {
                if (matrix[i][j] != trans[i][j])
                    break;
            }
            if (j != r2)
                break;
        }
        if (i == r2)
            printf("The matrix is symmetric.\n");
        else
            printf("The matrix isn't symmetric.\n");
    }
    else
        printf("The matrix isn't symmetric.\n");

}

//function cheak magic square
void magic1(int matrix[50][50])
{

    int i, j = 0;
    int sum, sum1, sum2;
    int flag = 0;


    //------for diagondal elements---------
    sum = 0;
    for (i = 0; i < r1; i++)
        for (j = 0; j < c1; j++)
        {
            if (i == j)
                sum = sum + matrix[i][j];
        }
    //-------------for rows--------------

    for (i = 0; i < r1; i++)
    {
        sum1 = 0;
        {
            for (j = 0; j < c1; j++)
                sum1 = sum1 + matrix[i][j];
        }
        if (sum == sum1)
            flag = 1;
        else
        {
            flag = 0;
            break;
        }
    }
    //-------------for colomns----------------
    for (i = 0; i < r1; i++)
    {
        sum2 = 0;
        for (j = 0; j < c1; j++)
        {
            sum2 = sum2 + matrix[j][i];
        }
        if (sum == sum2)
            flag = 1;
        else
        {
            flag = 0;
            break;
        }
    }
    //----------------------------------------
    if (flag == 1)
        printf("matrix is Magic square\n");
    else
        printf("matrix is Not magic square\n");
    //-----------------------------------------

}
void magic2(int matrix[50][50])
{

    int i, j = 0;
    int sum, sum1, sum2;
    int flag = 0;


    //------for diagondal elements---------
    sum = 0;
    for (i = 0; i < r2; i++)
        for (j = 0; j < c2; j++)
        {
            if (i == j)
                sum = sum + matrix[i][j];
        }
    //-------------for rows--------------

    for (i = 0; i < r2; i++)
    {
        sum1 = 0;
        {
            for (j = 0; j < c2; j++)
                sum1 = sum1 + matrix[i][j];
        }
        if (sum == sum1)
            flag = 1;
        else
        {
            flag = 0;
            break;
        }
    }
    //-------------for colomns----------------
    for (i = 0; i < r2; i++)
    {
        sum2 = 0;
        for (j = 0; j < c2; j++)
        {
            sum2 = sum2 + matrix[j][i];
        }
        if (sum == sum2)
            flag = 1;
        else
        {
            flag = 0;
            break;
        }
    }
    //----------------------------------------
    if (flag == 1)
        printf("matrix is Magic square\n");
    else
        printf("matrix is not magic square\n");
    //-----------------------------------------

}
#pragma once