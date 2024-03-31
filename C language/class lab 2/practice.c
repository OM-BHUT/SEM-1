#include <stdio.h>
#include <string.h>

int main() {
    // 1. Program to find the largest of three numbers using if-else statements.
    int num1, num2, num3;
    int largest = num1;
    if (num2 > largest) largest = num2;
    if (num3 > largest) largest = num3;
    printf("Largest: %d\n", largest);

    // 2. Program to check whether a character is an alphabet or not using the conditional operator.
    char ch;
    ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) ? printf("Alphabet\n") : printf("Not an Alphabet\n");

    // 3. Program to convert a string/char input to a floating-point number in C.
    char str[20];
    float result = atof(str);
    printf("Converted Float: %f\n", result);

    // 4. Program to delete all duplicate elements from an array.
    int arr[] = {1, 2, 2, 3, 4, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; ) {
            if (arr[i] == arr[j]) {
                for (int k = j; k < n; k++) {
                    arr[k] = arr[k + 1];
                }
                n--;
            } else {
                j++;
            }
        }
    }
    // Output modified array
    printf("Array without duplicates: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // 5. Program to reverse elements of an array without using a second array.
    int reverseArr[] = {1, 2, 3, 4, 5};
    int len = sizeof(reverseArr) / sizeof(reverseArr[0]);
    for (int i = 0; i < len / 2; i++) {
        int temp = reverseArr[i];
        reverseArr[i] = reverseArr[len - i - 1];
        reverseArr[len - i - 1] = temp;
    }
    // Output reversed array
    printf("Reversed Array: ");
    for (int i = 0; i < len; i++) {
        printf("%d ", reverseArr[i]);
    }
    printf("\n");

    // 6. Program to swap the first element with the last, the second with the second last, and so on in an array.
    int swapArr[] = {1, 2, 3, 4, 5};
    int swapLen = sizeof(swapArr) / sizeof(swapArr[0]);
    for (int i = 0; i < swapLen / 2; i++) {
        int temp = swapArr[i];
        swapArr[i] = swapArr[swapLen - i - 1];
        swapArr[swapLen - i - 1] = temp;
    }
    // Output array after swapping
    printf("Array after swapping: ");
    for (int i = 0; i < swapLen; i++) {
        printf("%d ", swapArr[i]);
    }
    printf("\n");

    // 7. Program to find the two largest elements in a one-dimensional array.
    int largest1, largest2;
    int array[] = {1, 4, 6, 2, 8, 3};
    int arrSize = sizeof(array) / sizeof(array[0]);
    largest1 = largest2 = array[0];
    for (int i = 1; i < arrSize; i++) {
        if (array[i] > largest1) {
            largest2 = largest1;
            largest1 = array[i];
        } else if (array[i] > largest2 && array[i] != largest1) {
            largest2 = array[i];
        }
    }
    printf("Two Largest Elements: %d, %d\n", largest1, largest2);

    // 8. Program to insert a new value in a sorted array.
    int sortedArr[] = {1, 3, 5, 7, 9};
    int newValue = 4;
    int newSize = sizeof(sortedArr) / sizeof(sortedArr[0]);
    int insertPos = 0;
    while (insertPos < newSize && sortedArr[insertPos] < newValue) {
        insertPos++;
    }
    for (int i = newSize - 1; i >= insertPos; i--) {
        sortedArr[i + 1] = sortedArr[i];
    }
    sortedArr[insertPos] = newValue;
    // Output array after insertion
    printf("Array after insertion: ");
    for (int i = 0; i <= newSize; i++) {
        printf("%d ", sortedArr[i]);
    }
    printf("\n");

    // 14. Program to print the transpose of a matrix.
    int matrix[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int rows = 3, cols = 3;
    printf("Transpose of Matrix:\n");
    for (int i = 0; i < cols; i++) {
        for (int j = 0; j < rows; j++) {
            printf("%d ", matrix[j][i]);
        }
        printf("\n");
    }

    // 15. Program to perform multiplication of two matrices.
    int mat1[2][2] = {{1, 2}, {3, 4}};
    int mat2[2][2] = {{5, 6}, {7, 8}};
    int resultMat[2][2];
    printf("Resultant Matrix after Multiplication:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            resultMat[i][j] = 0;
            for (int k = 0; k < 2; k++) {
                resultMat[i][j] += mat1[i][k] * mat2[k][j];
            }
            printf("%d ", resultMat[i][j]);
        }
        printf("\n");
    }

    // 16. Program to read a matrix, print diagonal elements, and calculate their sum.
    int squareMat[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int diagonalSum = 0;
    printf("Diagonal Elements and their Sum:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", squareMat[i][j]);
            if (i == j) {
                diagonalSum += squareMat[i][j];
            }
        }
        printf("\n");
    }
    printf("Diagonal Sum: %d\n", diagonalSum);

    // 17. Program to check whether a given matrix is a sparse matrix or not.
    int sparseMat[3][3] = {{1, 0, 0}, {0, 0, 0}, {0, 0, 2}};
    int zeroCount = 0, nonZeroCount = 0;
    printf("Matrix Elements and Checking for Sparse Matrix:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", sparseMat[i][j]);
            if (sparseMat[i][j] == 0) {
                zeroCount++;
            } else {
                nonZeroCount++;
            }
        }
        printf("\n");
    }
    (zeroCount > nonZeroCount) ? printf("Sparse Matrix\n") : printf("Not a Sparse Matrix\n");

    // 18. Program to print the upper triangular matrix.
    int upperTriMat[3][3] = {{1, 2, 3}, {0, 4, 5}, {0, 0, 6}};
    printf("Upper Triangular Matrix:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", upperTriMat[i][j]);
        }
        printf("\n");
    }

    // 19. Program to copy one array to another using pointers.
    int copySourceArr[] = {1, 2, 3, 4, 5};
    int copyDestArr[5];
    int copySize = sizeof(copySourceArr) / sizeof(copySourceArr[0]);
    for (int i = 0; i < copySize; i++) {
        *(copyDestArr + i) = *(copySourceArr + i);
    }
    // Output copied array
    printf("Copied Array: ");
    for (int i = 0; i < copySize; i++) {
        printf("%d ", copyDestArr[i]);
    }
    printf("\n");

    // 20. Program to swap two arrays using pointers.
    int swapArr1[] = {1, 2, 3, 4, 5};
    int swapArr2[] = {6, 7, 8, 9, 10};
    int swapSize = sizeof(swapArr1) / sizeof(swapArr1[0]);
    for (int i = 0; i < swapSize; i++) {
        int temp = *(swapArr1 + i);
        *(swapArr1 + i) = *(swapArr2 + i);
        *(swapArr2 + i) = temp;
    }
    // Output arrays after swapping
    printf("Array 1 after swapping: ");
    for (int i = 0; i < swapSize; i++) {
        printf("%d ", swapArr1[i]);
    }
    printf("\nArray 2 after swapping: ");
    for (int i = 0; i < swapSize; i++) {
        printf("%d ", swapArr2[i]);
    }
    printf("\n");

    // 21. Program to add two matrices using pointers.
    int addMat1[2][2] = {{1, 2}, {3, 4}};
    int addMat2[2][2] = {{5, 6}, {7, 8}};
    int sumMat[2][2];
    printf("Resultant Matrix after Addition:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            *(*(sumMat + i) + j) = *(*(addMat1 + i) + j) + *(*(addMat2 + i) + j);
            printf("%d ", *(*(sumMat + i) + j));
        }
        printf("\n");
    }

    // 22. Program to find the length of a string using pointers.
    char strPtr[] = "Hello";
    char *ptr = strPtr;
    int length = 0;
    while (*ptr != '\0') {
        length++;
        ptr++;
    }
    printf("Length of the String: %d\n", length);

    // 23. Program to sort an array using pointers.
    int sortArr[] = {5, 3, 8, 1, 7};
    int sortSize = sizeof(sortArr) / sizeof(sortArr[0]);
    for (int i = 0; i < sortSize - 1; i++) {
        for (int j = 0; j < sortSize - i - 1; j++) {
            if (*(sortArr + j) > *(sortArr + j + 1)) {
                int temp = *(sortArr + j);
                *(sortArr + j) = *(sortArr + j + 1);
                *(sortArr + j + 1) = temp;
            }
        }
    }
    // Output sorted array
    printf("Sorted Array: ");
    for (int i = 0; i < sortSize; i++) {
        printf("%d ", sortArr[i]);
    }
    printf("\n");

    return 0;
}
