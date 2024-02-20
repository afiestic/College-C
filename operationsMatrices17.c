   #include <stdio.h>

int main()
{
    // Variables for user input
    int rows1, cols1, rows2, cols2;

    // Prompt the user to enter dimensions of the first matrix
    printf("Enter the number of rows for the first matrix: ");
    scanf("%d", &rows1);
    printf("Enter the number of columns for the first matrix: ");
    scanf("%d", &cols1);

    // Prompt the user to enter dimensions of the second matrix
    printf("Enter the number of rows for the second matrix: ");
    scanf("%d", &rows2);
    printf("Enter the number of columns for the second matrix: ");
    scanf("%d", &cols2);

    // Check if matrix dimensions are valid for addition, subtraction, and multiplication
    if (rows1 <= 0 || cols1 <= 0 || rows2 <= 0 || cols2 <= 0 || cols1 != rows2)
    {
        printf("Invalid matrix dimensions for addition, subtraction, or multiplication.\n");
        return 1; // Return 1 to indicate an error
    }

    // Declare matrices of the specified dimensions
    int matrix1[10][10], matrix2[10][10], resultMatrix[10][10];

    // Prompt the user to enter elements of the first matrix
    printf("Enter elements for the first matrix (%d x %d):\n", rows1, cols1);
    for (int i = 0; i < rows1; i++)
    {
        for (int j = 0; j < cols1; j++)
        {
            printf("Enter element at position (%d, %d): ", i + 1, j + 1);
            scanf("%d", &matrix1[i][j]);
        }
    }

    // Prompt the user to enter elements of the second matrix
    printf("Enter elements for the second matrix (%d x %d):\n", rows2, cols2);
    for (int i = 0; i < rows2; i++)
    {
        for (int j = 0; j < cols2; j++)
        {
            printf("Enter element at position (%d, %d): ", i + 1, j + 1);
            scanf("%d", &matrix2[i][j]);
        }
    }

    // Perform addition
    printf("\nAddition of Matrices:\n");
    for (int i = 0; i < rows1; i++)
    {
        for (int j = 0; j < cols1; j++)
        {
            resultMatrix[i][j] = matrix1[i][j] + matrix2[i][j];
            printf("%d\t", resultMatrix[i][j]);
        }
        printf("\n");
    }

    // Perform subtraction
    printf("\nSubtraction of Matrices:\n");
    for (int i = 0; i < rows1; i++)
    {
        for (int j = 0; j < cols1; j++)
        {
            resultMatrix[i][j] = matrix1[i][j] - matrix2[i][j];
            printf("%d\t", resultMatrix[i][j]);
        }
        printf("\n");
    }

    // Perform multiplication
    printf("\nMultiplication of Matrices:\n");
    for (int i = 0; i < rows1; i++)
    {
        for (int j = 0; j < cols2; j++)
        {
            resultMatrix[i][j] = 0;
            for (int k = 0; k < cols1; k++)
            {
                resultMatrix[i][j] += matrix1[i][k] * matrix2[k][j];
            }
            printf("%d\t", resultMatrix[i][j]);
        }
        printf("\n");
    }

    // Return 0 to indicate successful execution
    return 0;
}
