//
//  main.c
//  InsertSort
//
//  Created by chenyufeng on 16/2/3.
//  Copyright © 2016年 chenyufengweb. All rights reserved.
//

#include <stdio.h>

void insertSort(int *a,int n);
void insertSort02(int *a,int n);

int main(int argc, const char * argv[]) {

    int a[] = {4,7,0,1,8,3};
    insertSort02(a,6);
    for (int i = 0; i < 6; i++) {
        printf("%d ",a[i]);
    }

    return 0;
}

void insertSort(int *a,int n){

    int i,j,k;
    for (i = 1; i < n; i++) {
        //为a[i]在前面的a[0...i-1]有序区间中找一个合适的位置
        for (j = i - 1; j >= 0; j--) {
            if (a[j] < a[i]) {
                break;
            }
        }

        //找到该位置
        if (j != i - 1) {
            int temp = a[i];
            //将比a[i]大的数据向后移
            for (k = i - 1; k > j; k--) {
                a[k + 1] = a[k];
            }
            //放在正确的位置上
            a[k + 1] = temp;
        }
    }
}

void insertSort02(int *a,int n){

    int i,j;
    for (i = 1; i < n; i++) {
        if (a[i - 1] > a[i]) {

            int temp = a[i];
            for (j = i - 1; j >= 0 && a[j] > temp; j--) {
                a[j + 1] = a[j];
            }
            a[j + 1] = temp;
        }
    }
}











