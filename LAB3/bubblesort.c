#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void bubbleSort(int arr[], int n){
    for (int i = 0; i < n - 1; i++){
        for (int j = 0; j < n - i - 1; j++){
            if (arr[j] > arr[j + 1]){
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void bubbleSortd(int arr[], int n){
    for (int i = 0; i < n - 1; i++){
        for (int j = 0; j < n - i - 1; j++){
            if (arr[j] < arr[j + 1]){
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
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

    bubbleSortd(arr, n);

    start = clock();
    bubbleSort(arr, n);
    end = clock();
    d1 = (double)(end - start) / CLOCKS_PER_SEC;

    printf("%f\n", d1);
}
