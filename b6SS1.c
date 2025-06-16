//
// Created by Admin on 6/16/2025.
//

#include "stdio.h"

/**
 *
 * @param array
 * @param arraylength
 * @param elementcheck
 * @return
 */
int countexist(int array[],int arraylength,int elementcheck) {
    int count=0;
    for(int i=0;i<arraylength;i++) {
        if(array[i]==elementcheck) {
            count++;
        }
    }
    return count;
}

int main() {
    int elements;
    int elementcheck;


    printf("nhap so luong phan tu cua mang: ");
    scanf("%d",&elements);

    int array[elements];

    for (int i = 0; i< elements;i++) {
        printf("nhap pt thu %d :",i);
        scanf("%d",&array[i]);
    }
    for (int i=0;i<elements;i++) {
        printf("%d ",array[i]);
    }
    printf("nhap phan tu can kiem tra");
    scanf("%d",&elementcheck);
    int result = countexist(array,elements,elementcheck);
    printf("so lan xuat hien pt %d la %d",elementcheck,result);
    return 0;
}
