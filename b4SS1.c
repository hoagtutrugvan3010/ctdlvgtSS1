//
// Created by Admin on 6/16/2025.
//
#include <stdio.h>

int total(int n) {
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += i;
    }
    return sum;
    //vong lap chay tu 1 den n -> chay n lan
    //moi vong lap sum +=1 -> 0(n)
}

int total2(int n) {
    return n * (n + 1) / 2;
    //chi thuc hien 3 phep toan nhan chia cong, ko co vong lap -> k phu thuoc vao n
    //thgian thuc hien la hang so ko doi du n lon den dau->0(1)
}

int main() {
    int n = 100;
    printf("tong bang vong lap: %d\n", total(n));
    printf("tong bang cong thuc: %d\n", total2(n));
    return 0;
}
