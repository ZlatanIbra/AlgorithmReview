#include <iostream>
#include <algorithm>
#include "SortTestHelper.h"
#include "SelectionSort.h"
#include "InsertionSort.h"

using namespace std;


int main() {
    int n = 10000;
    int a[10] = {2, 6, 8, 4, 1, 6, 8, 93, 4, 5};
    int* arr = SortTestHelper::generateRandomArray(n, 0, n);
    int* arr2 = SortTestHelper::copyIntArray(arr, n);
    SortTestHelper::testSort("SelectionSort", selectionSort, arr, n);
    SortTestHelper::testSort("InsertionSort", insertionSortEff, arr2, n);
//    SortTestHelper::printArray(arr, n);
    delete[] arr;
    return 0;
}