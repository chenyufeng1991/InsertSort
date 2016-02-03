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

//插入算法1
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

//插入算法2
void insertSort02(int *a,int n){

    int i,j;
    for (i = 1; i < n; i++) {
        //当后者比前者小时，才进行插入，否则不做任何操作，直接跳出循环，因为已经是一个有序序列了；
        if (a[i - 1] > a[i]) {

            int temp = a[i];
            //寻找正确的插入位置；
            for (j = i - 1; j >= 0 && a[j] > temp; j--) {
                a[j + 1] = a[j];
            }
            a[j + 1] = temp;
        }
    }
}











