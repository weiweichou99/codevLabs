# 字串處理 (string)

## 基本操作

```cpp
#include <string>

string s = "Hello";

s.length();      // 長度 → 5
s.size();        // 同上
s[0];            // 第一個字元 → 'H'
s[4];            // 第五個字元 → 'o'
s + " World";    // 串接 → "Hello World"
```

## 常用函數

```cpp
s.substr(1, 3);     // 從位置1取3個字 → "ell"
s.find("ll");       // 找 "ll" 的位置 → 2
s.find("x");        // 找不到 → string::npos
s.empty();          // 是否為空
```

## 讀取整行

```cpp
string line;
getline(cin, line);  // 讀取一整行（含空格）
```

## 字元判斷

```cpp
char c = 'A';
isalpha(c);   // 是否為字母
isdigit(c);   // 是否為數字
isupper(c);   // 是否為大寫
islower(c);   // 是否為小寫
toupper(c);   // 轉大寫
tolower(c);   // 轉小寫
```

## 試試看

1. 輸入字串，計算有幾個母音 (a, e, i, o, u)
2. 輸入字串，反轉後輸出
3. 判斷字串是否為回文
