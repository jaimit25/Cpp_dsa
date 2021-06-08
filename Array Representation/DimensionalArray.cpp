#include <iostream>
#include <stdlib.h>

int main()
{

    int Arr[3][4] = {{1, 2, 3, 75}, {2, 3, 4, 9}, {5, 6, 78}};
    //in stack

    int *B[3];
    B[0] = (int *)malloc(4 * sizeof(int));
    B[1] = (int *)malloc(4 * sizeof(int));
    B[2] = (int *)malloc(4 * sizeof(int));
    //2D Array in Heap

    int **C;
    //Assigning space for pointer Array in heap memory
    C = (int **)malloc(3 * sizeof(int));

    //Assigning each memory block an Array
    C[0] = (int *)malloc(4 * sizeof(int));
    C[1] = (int *)malloc(4 * sizeof(int));
    C[2] = (int *)malloc(4 * sizeof(int));

    return 0;
}