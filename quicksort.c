

#include <stdio.h>


void swap(int *a, int *b);
void printArray(int array[], int size);

void quickSort(int array[], int low, int high); 
 
int main() {
int size;
    printf("Enter the size of array: ");
    scanf("%d", &size);
  int data[size] ;
    printf("Enter the elements of array: ");
    for(int i = 0; i < size; i++) {
        scanf("%d", &data[i]);
    }
  
  
  
  printf("Unsorted Array\n");
  printArray(data, size);
  
  // perform quicksort on data
  quickSort(data, 0, size - 1);
  
  printf("Sorted array in ascending order: \n");
  printArray(data, size);
}

void swap(int *a, int *b) {
  int t = *a;
  *a = *b;
  *b = t;
}

// function to find the partition position
int partition(int array[], int low, int high) {
  
 
  int pivot = array[high];
  
  
  int i = (low - 1);

  
  for (int j = low; j < high; j++) {
    if (array[j] <= pivot) {
        
     
      i++;
      
      // swap element at i with element at j
      swap(&array[i], &array[j]);
    }
  }

  // swap the pivot element with the greater element at i
  swap(&array[i + 1], &array[high]);
  
  // return the partition point
  return (i + 1);
}
void quickSort(int array[], int low, int high) {
  if (low < high) {
    
    
    int pi = partition(array, low, high);
    
    // recursive call on the left of pivot
    quickSort(array, low, pi - 1);
    
    // recursive call on the right of pivot
    quickSort(array, pi + 1, high);
  }
}

// function to print array elements
void printArray(int array[], int size) {
  for (int i = 0; i < size; ++i) {
    printf("%d  ", array[i]);
  }
  printf("\n");
}
