# 排序與搜尋

## 內建排序 sort()

```cpp
#include <algorithm>

int a[] = {5, 2, 8, 1, 9};
sort(a, a + 5);  // 排序陣列

vector<int> v = {5, 2, 8, 1, 9};
sort(v.begin(), v.end());  // 排序 vector
```

## 由大到小排序

```cpp
sort(v.begin(), v.end(), greater<int>());
```

## 二分搜尋

資料**已排序**時，可用二分搜尋快速找值。

```cpp
// 手寫二分搜尋
int binarySearch(vector<int>& v, int target) {
    int left = 0, right = v.size() - 1;
    while (left <= right) {
        int mid = (left + right) / 2;
        if (v[mid] == target) return mid;
        else if (v[mid] < target) left = mid + 1;
        else right = mid - 1;
    }
    return -1;  // 找不到
}

// 內建函數
binary_search(v.begin(), v.end(), target);  // 回傳 true/false
lower_bound(v.begin(), v.end(), target);    // 回傳迭代器
```

## 試試看

1. 輸入 n 個數字，排序後輸出
2. 找出第 k 大的數
3. 判斷某數是否存在於陣列中
