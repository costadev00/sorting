// C++ program to demonstrate performance of sorting algorithms
// Reference: GeekForGeeks
#include <bits/stdc++.h>
using namespace std;

// Importing codes from another local
#include "bubble-Sort.h"
#include "selection-Sort.h"

// Number of elements to be sorted
#define N 150000

// Driver program to test above functions
int main()
{
    int arr[N], sArr[N], bArr[N];

    // seed for random input
    srand(time(NULL));

    // to measure time taken by qsort and sort
    clock_t begin, end;
    double time_spent;

    // generate random input
    for (int i = 0; i < N; i++)
        arr[i] = sArr[i] = bArr[i] = rand() % 100000;

    begin = clock();
    sort(arr, arr + N);
    end = clock();

    // calculate time taken by C qsort function
    time_spent = (double)(end - begin) / CLOCKS_PER_SEC;

    cout << "Time taken by C++ sort() - "
         << time_spent << endl;

    time_spent = 0.0;

    begin = clock();
    selectionSort(sArr, N);
    end = clock();

    // calculate time taken by C++ sort
    time_spent = (double)(end - begin) / CLOCKS_PER_SEC;

    cout << "Time taken by selectionSort() - "
         << time_spent << endl;

    time_spent = 0.0;
    begin = clock();
    bubbleSort(bArr, N);
    end = clock();
    time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
    cout << "Time taken by bubbleSort() - "
         << time_spent << endl;
    return 0;
}
