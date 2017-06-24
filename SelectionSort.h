#ifndef HELLOCLION_SELECTIONSORT_H
#define HELLOCLION_SELECTIONSORT_H

//
// Created by Jay on 2017/6/24.
//

#include <iostream>
#include <algorithm>

/**
 * 选择排序
 * @tparam T 数组元素的类型
 * @param arr 数组
 * @param n 数组元素的个数
 */
template<typename T>
void selectionSort(T arr[], int n) {
    for (int i = 0; i < n; ++i) {
        int minIndex = i;
        for (int j = i; j < n; ++j) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        std::swap(arr[minIndex], arr[i]);
    }
}

#endif //HELLOCLION_SELECTIONSORT_H
