//
// Created by Jay on 2017/6/23.
//

#ifndef HELLOCLION_SORTTESTHELPER_H
#define HELLOCLION_SORTTESTHELPER_H

#include <ctime>
#include <cstdlib>
#include <cassert>

namespace SortTestHelper {
    /**
     * 生成长度为n的随机数组
     * @param n
     * @param rangeL
     * @param rangeR
     * @return
     */
    int* generateRandomArray(int n, int rangeL, int rangeR) {
        assert(rangeR >= rangeL);
        int* arr = new int[n];
        srand(time(NULL));//随机种子
        for (int i = 0; i < n; ++i) {
            arr[i] = rand() % (rangeR - rangeL + 1) + rangeL;
        }
        return arr;
    }

    /**
     * 生成一个近乎有序的数组
     * @param n
     * @param swapTimes 需要交换多少对元素
     * @return
     */
    int* generateNearlyOrderedArray(int n, int swapTimes) {
        int* arr = new int[n];
        for (int i = 0; i < n; i++) {
            arr[i] = i;
        }
        srand(time(NULL));
        for (int i = 0; i < swapTimes; i++) {
            int posX = rand() % n;
            int posY = rand() % n;
            std::swap(arr[posX], arr[posY]);
        }
        return arr;
    }


    /**
     * 打印数组
     * @tparam T
     * @param arr
     * @param n
     */
    template<typename T>
    void printArray(T arr[], int n) {
        for (int i = 0; i < n; ++i) {
            std::cout << arr[i] << " ";
        }
        std::cout << std::endl;
    }

    /**
     * 判断数组是否已经有序
     * @tparam T
     * @param arr
     * @param n
     * @return
     */
    template<typename T>
    bool isSorted(T arr[], int n) {
        for (int i = 0; i < n - 1; i++)
            if (arr[i] > arr[i + 1])
                return false;
        return true;
    }

    /**
     * 测试算法的效率
     * @tparam T
     * @param sortName
     * @param sort
     * @param arr
     * @param n
     */
    template<typename T>
    void testSort(std::string sortName, void(* sort)(T[], int), T arr[], int n) {
        clock_t startTime = clock();
        sort(arr, n);
        clock_t endTime = clock();
        assert(isSorted(arr, n));
        std::cout << sortName << " : " << double(endTime - startTime) / CLOCKS_PER_SEC << " s" << std::endl;
    }

    /**
     * 将指定数组拷贝一份
     * @param a
     * @param n
     * @return
     */
    int* copyIntArray(int a[], int n) {
        int* arr = new int[n];
        std::copy(a, a + n, arr);
        return arr;
    }

}


#endif //HELLOCLION_SORTTESTHELPER_H
