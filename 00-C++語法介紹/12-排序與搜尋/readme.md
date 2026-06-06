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

## 找最大值、最小值

```cpp
#include <algorithm>

vector<int> v = {5, 2, 8, 1, 9};

// 方法 1：用內建函數
// max_element 回傳的是「指向最大值的指標（迭代器）」，不是值本身
// 所以要加 * 來「取出指標指向的值」（解參考）
int maxVal = *max_element(v.begin(), v.end());  // 9
int minVal = *min_element(v.begin(), v.end());  // 1

// 如果不加 *，得到的是位置（迭代器），不是數值
// auto it = max_element(v.begin(), v.end());  // it 是指標
// int maxVal = *it;  // 用 * 取出值

// 方法 2：排序後取頭尾
sort(v.begin(), v.end());
int minVal = v[0];           // 最小
int maxVal = v[v.size()-1];  // 最大

// 方法 3：手動迴圈找
int maxVal = v[0];
for (int x : v) {
    if (x > maxVal) maxVal = x;
}
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
