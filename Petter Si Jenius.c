#include <stdio.h>

void printArray(int *arr, int size) {
    for(int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    // Definisikan array dan pointer yang digunakan
    int arr[] = {1, 6, 13, 16, 25, 26};
    int size = sizeof(arr) / sizeof(arr[0]);
    
    // Cetak isi array sebelum perubahan
    printf("Daftar Halaman Sebelum Perubahan:\n");
    printArray(arr, size);
    
    // Ubah value pada array 
    int *ptr = arr;
    
    *(ptr + 1) += 2;
    
    *(ptr + 2) += 3;
    
    *(ptr + 4) += 1;
    
    // Cetak isi array setelah perubahan
    printf("Daftar Halaman Setelah Perubahan:\n");
    printArray(arr, size);
    
    return 0;
}
