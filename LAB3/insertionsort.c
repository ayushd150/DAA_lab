#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void insertionSort(int arr[], int n){
    for (int i = 1; i < n; i++){
        int a = arr[i];
        int j = i - 1;

        while(j >= 0 && arr[j] > a){
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = a;
    }
}

void insertionSortd(int arr[], int n){
    for (int i = 1; i < n; i++){
        int a = arr[i];
        int j = i - 1;

        while(j >= 0 && arr[j] < a){
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = a;
    }
}

int main(){
    int n = 50000;
    int arr[n];
    double d1;
    clock_t start, end;

    for (int i = 0; i < n; i++){
        arr[i] = rand();
    }

    insertionSortd(arr, n);

    start = clock();
    insertionSort(arr, n);
    end = clock();
    d1 = (double)(end - start) / CLOCKS_PER_SEC;

    printf("%f\n", d1);
}
