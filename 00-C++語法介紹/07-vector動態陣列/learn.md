# vector 動態陣列

## 為什麼用 vector？

一般陣列大小固定，vector 可以**動態增減**。

```cpp
#include <vector>

vector<int> v;        // 空的 vector
vector<int> v(5);     // 5 個元素，初始值 0
vector<int> v(5, 10); // 5 個元素，初始值都是 10
```

## 常用操作

```cpp
v.push_back(x);  // 在尾端加入 x
v.pop_back();    // 移除最後一個
v.size();        // 目前有幾個元素
v.empty();       // 是否為空
v.clear();       // 清空全部
v[i];            // 存取第 i 個（從 0 開始）
```

## 搭配迴圈

```cpp
// 方法 1：用索引
for (int i = 0; i < v.size(); i++) {
    cout << v[i] << " ";
}

// 方法 2：range-based for（更簡潔）
for (int x : v) {
    cout << x << " ";
}
```

## 試試看

1. 輸入 n 個數字存到 vector，印出總和
2. 把 vector 的內容倒著印出來
3. 移除所有偶數
