//
// Created by Admin on 6/16/2025.
//
#include <stdlib.h>

#include "stdio.h"
int main() {
    int* mallocArray(int n) {
        int* arr = (int*)malloc(n * sizeof(int));
        for (int i = 0; i < n; i++) {
            arr[i] = i;
        }
        return arr;
    }
}
//dong malloc(n * sizeof(int)) cap phat bo nho dong cho  mang co n pt kieu int
//->moi pt chiem 1  don vi tong la n don vi -> do phuc tap la o(n)