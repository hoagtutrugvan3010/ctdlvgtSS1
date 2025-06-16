//
// Created by Admin on 6/16/2025.
//
#include "stdio.h"
int main() {
    void printDouble(int n) {
        int i = 1;
        while (i<n) {
            printf("%d\n", i);
            i *=2;
        }
    }
}
//vi bien i bat dau tu 1 va nhan 2 voi moi lan lap va vong lap chay den khi i < n
//-> so lan lap la so lan nhan doi tu i den n
//->1 * 2^k < n -> 2^k < n -> k < log2(n)
