// C++ program to demonstrate performance of sorting algorithms
#include <bits/stdc++.h>
using namespace std;

// Importing functions from another local
#include "bubble-Sort.h"
#include "selection-Sort.h"
#include "insertion-Sort.h"
#include "binary_insertion-Sort.h"

// Number of elements to be sorted
//you can define how much elements your computer handle
#define N 100000

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
     for (int i = 0; i < N; i++)
     {
          arr[i] = rand() % 100000;
     }
     // calculate time taken by C++ stable_sort function
     begin = clock();
     stable_sort(arr, arr + N);
     end = clock();
     time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
     cout << "Time taken by C++ stable_sort() - "
          << time_spent << endl;

     // calculate time taken by C++ sort function
     for (int i = 0; i < N; i++)
     {

          arr[i] = rand() % 100000;
     }
     time_spent = 0.0;
     begin = clock();
     sort(arr, arr + N);
     end = clock();
     time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
     cout << "Time taken by C++ sort() - "
          << time_spent << endl;

     //calculate time taken by insertionBinarySort function
     for (int i = 0; i < N; i++)
     {
          arr[i] = rand() % 100000;
     }
     time_spent = 0.0;
     begin = clock();
     insertionSort2(arr, N);
     end = clock();
     time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
     cout << "Time taken by Binary InsertionSort() - "
          << time_spent << endl;

     //calculate time taken by insertionSort function
     for (int i = 0; i < N; i++)
     {
          arr[i] = rand() % 100000;
     }
     time_spent = 0.0;
     begin = clock();
     insertionSort(arr, N);
     end = clock();
     time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
     cout << "Time taken by insertionSort() - "
          << time_spent << endl;

     // calculate time taken by selectionSort function
     for (int i = 0; i < N; i++)
     {
          arr[i] = rand() % 100000;
     }
     time_spent = 0.0;
     begin = clock();
     selectionSort(arr, N);
     end = clock();
     time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
     cout << "Time taken by selectionSort() - "
          << time_spent << endl;

     //calculate time taken by bubbleSort function
     for (int i = 0; i < N; i++)
     {
          arr[i] = rand() % 100000;
     }
     time_spent = 0.0;
     begin = clock();
     bubbleSort(arr, N);
     end = clock();
     time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
     cout << "Time taken by bubbleSort() - "
          << time_spent << endl;

     return 0;
}
