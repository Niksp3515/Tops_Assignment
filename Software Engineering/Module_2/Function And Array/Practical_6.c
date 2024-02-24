#include <stdio.h>

#define ROW_SIZE 2
#define COL_SIZE 2

void addMatrices(int first[][COL_SIZE], int second[][COL_SIZE], int result[][COL_SIZE]) {
    for (int i = 0; i < ROW_SIZE; i++) {
        for (int j = 0; j < COL_SIZE; j++) {
            result[i][j] = first[i][j] + second[i][j];
        }
    }
}

void subtractMatrices(int first[][COL_SIZE], int second[][COL_SIZE], int result[][COL_SIZE]) {
    for (int i = 0; i < ROW_SIZE; i++) {
        for (int j = 0; j < COL_SIZE; j++) {
            result[i][j] = first[i][j] - second[i][j];
        }
    }
}

void multiplyMatrices(int first[][COL_SIZE], int second[][COL_SIZE], int result[][COL_SIZE]) {
    for (int i = 0; i < ROW_SIZE; i++) {
        for (int j = 0; j < COL_SIZE; j++) {
            result[i][j] = 0;
            for (int k = 0; k < COL_SIZE; k++) {
                result[i][j] += first[i][k] * second[k][j];
            }
        }
    }
}

void printMatrix(int matrix[][COL_SIZE]) {
    for (int i = 0; i < ROW_SIZE; i++) {
        for (int j = 0; j < COL_SIZE; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int first[ROW_SIZE][COL_SIZE], second[ROW_SIZE][COL_SIZE], result[ROW_SIZE][COL_SIZE];

    printf("Enter the elements of the first matrix:\n");
    for (int i = 0; i < ROW_SIZE; i++) {
        for (int j = 0; j < COL_SIZE; j++) {
            scanf("%d", &first[i][j]);
        }
    }

    printf("Enter the elements of the second matrix:\n");
    for (int i = 0; i < ROW_SIZE; i++) {
        for (int j = 0; j < COL_SIZE; j++) {
            scanf("%d", &second[i][j]);
        }
    }

    int choice;
    while (1) {
        printf("\n1. Add matrices\n2. Subtract matrices\n3. Multiply matrices\n4. Exit\n");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addMatrices(first, second, result);
                printf("The sum of the matrices is:\n");
                printMatrix(result);
                break;
            case 2:
                subtractMatrices(first, second, result);
                printf("The difference of the matrices is:\n");
                printMatrix(result);
                break;
            case 3:
                multiplyMatrices(first, second, result);
                printf("The product of the matrices is:\n");
                printMatrix(result);
                break;
            default:
                printf("Invalid choice, please choose again.\n");
        }
    }

    return 0;
}