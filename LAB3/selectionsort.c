#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void selectionSort(int arr[], int n){
    for (int i = 0; i < n - 1; i++){
        int min = i;
        for (int j = i + 1; j < n; j++){
            if (arr[j] < arr[min]) min = j;
        }
        int temp = arr[min];
        arr[min] = arr[i];
        arr[i] = temp;
    }
}

void selectionSortd(int arr[], int n){
    for (int i = 0; i < n - 1; i++){
        int min = i;
        for (int j = i + 1; j < n; j++){
            if (arr[j] > arr[min]) min = j;
        }
        int temp = arr[min];
        arr[min] = arr[i];
        arr[i] = temp;
    }
}

int main(){
    int n = 10000;
    int arr[n];
    double d1;
    clock_t start, end;

    for (int i = 0; i < n; i++){
        arr[i] = rand();
    }

    selectionSortd(arr, n);

    start = clock();
    selectionSort(arr, n);
    end = clock();
    d1 = (double)(end - start) / CLOCKS_PER_SEC;

    printf("%f\n", d1);
}
