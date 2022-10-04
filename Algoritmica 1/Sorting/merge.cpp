#include <iostream>
using namespace std;
void merge(int arr[], int p, int q, int r) {
  // Crear L ← A[p..q] y M ← A[q+1..r]
  int n1 = q - p + 1;
  int n2 = r - q;
  int L[n1], M[n2];
  for (int i = 0; i < n1; i++)
    L[i] = arr[p + i];
  for (int j = 0; j < n2; j++)
    M[j] = arr[q + 1 + j];
  // mantener indice actual de los sub arrays y el array principal
  int i, j, k;
  i = 0;
  j = 0;
  k = p;
  // Hasta que se llegue al final de L o de M, se escoge los mas grandes
  // elementos de L y M y colocarlos correctamente en A[p..r]
  while (i < n1 && j < n2) {
    if (L[i] <= M[j]) {
      arr[k] = L[i];
      i++;
    } else {
      arr[k] = M[j];
      j++;
    }
    k++;
  }

  // Cuando se acaban los elementos de L o de M
  // tomar los elementos restantes y insertarlos en A[p..r]
  while (i < n1) {
    arr[k] = L[i];
    i++;
    k++;
  }

  while (j < n2) {
    arr[k] = M[j];
    j++;
    k++;
  }
}
// Dividir el array en dos arrays, ordenarlos y mezclarlos
void mergeSort(int arr[], int l, int r) {
  if (l < r) {
    // m es el punto donde el array se divide en 2 sub arrays
    int m = l + (r - l) / 2;

    mergeSort(arr, l, m);
    mergeSort(arr, m + 1, r);

    // mezclar
    merge(arr, l, m, r);
  }
}
