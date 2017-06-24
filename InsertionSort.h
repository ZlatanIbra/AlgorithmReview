//
// Created by Jay on 2017/6/24.
//

#ifndef HELLOCLION_INSERTIONSORT_H
#define HELLOCLION_INSERTIONSORT_H

#include <iostream>
#include <algorithm>

/**
 * 一个近乎有序的数组，插入排序的性能要远远高于选择排序
 */

/**
 * 插入排序
 * @tparam T
 * @param arr
 * @param n
 */
template<typename T>
void insertionSort(T arr[], int n) {
    for (int i = 1; i < n; ++i) {
        for (int j = i; j > 0 && arr[j] < arr[j - 1]; --j) {
            std::swap(arr[j], arr[j - 1]);
        }
    }
}

/**
 * 改进过的插入排序
 * @tparam T
 * @param arr
 * @param n
 */
template<typename T>
void insertionSortEff(T arr[], int n) {
    for (int i = 0; i < n; ++i) {
        int j = 0;
        int temp = arr[i];
        for (j = i; j > 0 && temp < arr[j - 1]; --j) {
            arr[j] = arr[j - 1];
        }
        arr[j] = temp;
    }
}


#endif //HELLOCLION_INSERTIONSORT_H
