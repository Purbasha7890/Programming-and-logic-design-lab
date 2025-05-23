#include <stdio.h>

int main() 
{
    int rows, cols;

    
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    int matrix[rows][cols], transpose[cols][rows];

    
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < rows; i++) 
	{
        for (int j = 0; j < cols; j++) 
		{
            printf("Enter element matrix[%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }
    for (int i = 0; i < rows; i++) 
	{
        for (int j = 0; j < cols; j++) 
		{
            transpose[j][i] = matrix[i][j];
        }
    }

    
    printf("Original matrix is:\n");
    for (int i = 0; i < rows; i++) 
	{
        for (int j = 0; j < cols; j++) 
		{
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    printf("Transposed matrix is:\n");
    for (int i = 0; i < cols; i++) 
	{
        for (int j = 0; j < rows; j++) 
		{      
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }

    return 0;
}
