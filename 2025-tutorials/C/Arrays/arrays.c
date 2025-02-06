#include <stdio.h>

/*
    The following are the functions to display arrays of different dimensions.
*/

void display1DArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void display2DArray(int arr[][3], int rows) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}

void display3DArray(int arr[][2][3], int depth) {
    for (int i = 0; i < depth; i++) {
        for (int j = 0; j < 2; j++) {
            for (int k = 0; k < 3; k++) {
                printf("%d ", arr[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }
}

void display4DArray(int arr[][2][2][2], int dim1) {
    for (int i = 0; i < dim1; i++) {
        for (int j = 0; j < 2; j++) {
            for (int k = 0; k < 2; k++) {
                for (int l = 0; l < 2; l++) {
                    printf("%d ", arr[i][j][k][l]);
                }
                printf("\n");
            }
            printf("\n");
        }
        printf("\n");
    }
}

/*
    This function will display the integer array
*/
void displayArrInteger(int arr[], int len){
    printf("Integer array:\n");
    for(int i = 0; i < len; i++){
        printf("[%d]: %d\n", i, arr[i]);
    }
}

/*
    This function will display the float array
*/
void displayArrFloat(float arr[], int len){
    printf("Float array:\n");
    for(int i = 0; i < len; i++){
        printf("[%d]: %f\n", i, arr[i]);
    }
}

/*
    This function will display the double array
*/
void displayArrDouble(double arr[], int len){
    printf("Double array:\n");
    for(int i = 0; i < len; i++){
        printf("[%d]: %f\n", i, arr[i]);
    }
}

/*
    This function will display the char array
*/
void displayArrChar(char arr[], int len){
    printf("Char array:\n");
    for(int i = 0; i < len; i++){
        printf("[%d]: %c\n", i, arr[i]);
    }
}

int main() {
    /*
        Syntax of an array in C

        data_type array_name[array_size];
        data_type array_name[array_size] = {value1, value2, value3, ...};
        data_type array_name[] = {value1, value2, value3, ...};
    */

    /*
        Initializing an integer array with 5 elements
    */
    int array1[5] = {1, 2, 3, 4, 5};
    
    /*
        Initializing a float array with 10 elements, first 3 are initialized, rest are 0.0
    */
    float array2[10] = {1.1, 1.2, 1.3};
    
    /*
        Initializing a double array with 5 elements, size is inferred from the number of initializers
    */
    double array3[] = {1.1, 2.2, 3.3, 4.4, 5.5};
    
    /*
        Declaring an integer array with 10 elements, uninitialized elements will have default values 
    */
    int array4[10];

    /*
        Default values of data types in C

        int: 0;
        float: 0.0;
        double: 0.0;
        char: '\0';
        long: 0;
        short: 0;
    */

    /*
        1. One-dimensional array
        Syntax: data_type array_name[array_size];
    */
    int arr1[5] = {1, 2, 3, 4, 5};
    display1DArray(arr1, 5);

    /*
        2. Two-dimensional array
        Syntax: data_type array_name[row_size][column_size];
    */
    int arr2[2][3] = {
        {1, 2, 3},
        {4, 5, 6}
    };
    display2DArray(arr2, 2);

    /*
        3. Three-dimensional array
        Syntax: data_type array_name[depth][row_size][column_size];
    */
    int arr3[2][2][3] = {
        {
            {1, 2, 3},
            {4, 5, 6}
        },
        {
            {7, 8, 9},
            {10, 11, 12}
        }
    };
    display3DArray(arr3, 2);

    /*
        4. Multi-dimensional array
        Syntax: data_type array_name[dimension1][dimension2]...[dimensionN];
    */
    int arr4[2][2][2][2] = {
        {
            {
                {1, 2},
                {3, 4}
            },
            {
                {5, 6},
                {7, 8}
            }
        },
        {
            {
                {9, 10},
                {11, 12}
            },
            {
                {13, 14},
                {15, 16}
            }
        }
    };
    display4DArray(arr4, 2);

    /*
        Character arrays
    */
    char name[] = "John Doe";
    char name2[] = {'J', 'o', 'h', 'n', ' ', 'D', 'o', 'e', '\0'};
    char name3[8] = "John Doe";

    return 0;
}
