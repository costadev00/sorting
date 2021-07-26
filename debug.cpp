// C++ program to demonstrate performance of sorting algorithms
#include <bits/stdc++.h>
using namespace std;

// Importing functions from another local
#include "bubble-Sort.h"
#include "selection-Sort.h"
#include "insertion-Sort.h"
#include "binary_insertion-Sort.h"
#include "merge-Sort.h"

// Number of elements to be sorted
//you can define how much elements your computer handle
#define N 1000000

// Driver program to test above functions
int main()
{
    // long long int biArr[N], stArr[N], arr[N], iArr[N], sArr[N], bArr[N];
    long long int arr[N];

    // seed for random input
    srand(time(NULL));

    // to measure time taken by qsort and sort
    clock_t begin, end;
    double time_spent;

    // generate random input
    // we repeat this loop on every different method, i dont find a better solutions :3
    // calculate time taken by selectionSort function
    for (int i = 0; i < N; i++)
    {
        arr[i] = rand() % 400000;
    }
    time_spent = 0.0;
    begin = clock();
    selectionSort(arr, N);
    end = clock();
    time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
    cout << "Time taken by selectionSort() - "
         << time_spent << endl;

    return 0;
}
