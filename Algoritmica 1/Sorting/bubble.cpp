
#include <iostream>
using namespace std;

void bubbleSort(int array[], int size) {

  // loop para acceder cada elemento del array
  for (int step = 0; step < size; ++step) {
      
    // loop para comparar elementos
    for (int i = 0; i < size - step; ++i) {

      // cambiar a > o < segun el ordenamiento requerido
      if (array[i] > array[i + 1]) {

          // intercambio de elementos
        int temp = array[i];
        array[i] = array[i + 1];
        array[i + 1] = temp;
      }
    }
  }
}
