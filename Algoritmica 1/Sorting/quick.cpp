#include <bits/stdc++.h>
using namespace std;
// intercambio
void swap(int* a, int* b)
{
    int t = *a;
    *a = *b;
    *b = t;
}
/* Esta función toma el último elemento como pivote, coloca
el elemento de pivote en su posición correcta en el array ordenado
 y coloca todos los más pequeños (más pequeños que el pivote)
a la izquierda del pivote y todos los elementos mayores a la derecha
de pivote */
int partition (int arr[], int low, int high)
{
    int pivot = arr[high]; // pivote
    int i = (low - 1); // Índice del elemento más pequeño 
                       // indica la posición correcta del pivote 
    for (int j = low; j <= high - 1; j++)
    {
        // comparacion con pivote
        if (arr[j] < pivot)
        {
            i++; // incremento de indice de elemento menor
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return (i + 1);
}
/* funcion QuickSort
arr[] --> Array a ordenar,
low --> indice inicial,
high --> indice final */
void quickSort(int arr[], int low, int high)
{
    if (low < high)
    {
        /* pi indice de particion, arr[p] esta ahora en 
        el lugar correcto */
        int pi = partition(arr, low, high);
        // ordenar elementos por separado
        // antes y despues de la aprticion
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}
