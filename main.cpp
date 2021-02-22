/*

*/
#include <bits/stdc++.h>
#include <iostream>
using namespace std;

// ---------------------------
// Sort Functions
// ---------------------------
#include "bubble-Sort.h"
#include "selection-Sort.h"
#include "insertion-Sort.h"
#include "binary_insertion-Sort.h"
#include "merge-Sort.h"
//Prototipes
void printArray(long long int arr[], int size);

int main()
{
    int option = 1, num_len;
    do
    {
        printf("Enter the method by which your array should be ordered\n");
        printf("1 -- Bubble Sort\n");
        printf("2 -- Selection Sort\n");
        printf("3 -- Insertion Sort\n");
        printf("4 -- GCC Sort\n");
        printf("5 -- BinaryInsertion Sort\n");
        printf("6 -- Merge Sort\n");
        printf("\n0 -- Finish the applicattion\n");
        cin >> option;
        if (option == 0)
        {
            exit(0);
        }
        printf("How many numbers array will have?\n");
        cin >> num_len;
        long long int arr[num_len];
        printf("Enter the numbers\n");
        for (int i = 0; i < num_len; i++)
        {
            cin >> arr[i];
        }
        // cout << endl;
        switch (option)
        {
        case 1:
            bubbleSort(arr, num_len);
            printArray(arr, num_len);
            break;
        case 2:
            selectionSort(arr, num_len);
            printArray(arr, num_len);
            break;
        case 3:
            insertionSort(arr, num_len);
            printArray(arr, num_len);
            break;
        case 4:
            sort(arr, arr + num_len);
            printArray(arr, num_len);
            break;
        case 5:
            insertionSort2(arr, num_len);
            printArray(arr, num_len);
            break;
        case 6:
            mergeSort(arr, 0, num_len - 1);
            printArray(arr, num_len);
            break;
        case 0:
            printf("See u, thanks for coming!!!\n");
            break;
        default:
            printf("Please enter a valid option\n");
            break;
        }
    } while (option != 0);

    return 0;
}

/* Function to print an array */
void printArray(long long int arr[], int size)
{
    int i;
    printf("\n");
    cout << "Array ordered: ";
    for (i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl
         << endl;
}