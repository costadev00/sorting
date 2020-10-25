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

//Prototipes
void printArray(int arr[], int size);

int main()
{
    int opcao = 1, qtdNums;
    do
    {
        printf("Digite o metodo pelo qual seu vetor deve ser ordenado\n");
        printf("1 -- Bubble Sort\n");
        printf("2 -- Selection Sort\n");
        printf("\n0 -- Termina o programa\n");
        cin >> opcao;
        if (opcao == 0)
        {
            exit(0);
        }
        printf("Digite quantos numeros devem ser ordenados\n");
        cin >> qtdNums;
        int vet[qtdNums];
        printf("Digite os numeros\n");
        for (int i = 0; i < qtdNums; i++)
        {
            cin >> vet[i];
        }
        // cout << endl;
        switch (opcao)
        {
        case 1:
            bubbleSort(vet, qtdNums);
            printArray(vet, qtdNums);
            break;
        case 2:
            selectionSort(vet, qtdNums);
            printArray(vet, qtdNums);
            break;

        case 0:
            printf("Ate a proxima!!!\n");
            break;
        default:
            printf("Digite uma opcao válida\n");
            break;
        }
    } while (opcao != 0);

    return 0;
}

/* Function to print an array */
void printArray(int arr[], int size)
{
    int i;
    printf("\n");
    cout << "Vetor ordenado: ";
    for (i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl
         << endl;
}