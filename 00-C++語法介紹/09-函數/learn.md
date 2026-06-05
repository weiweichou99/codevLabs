# 函數 (Function)

## 為什麼要用函數？

把**重複的程式碼**包成一個函數，需要時呼叫它。

## 基本語法

```cpp
回傳型態 函數名稱(參數) {
    // 做事情
    return 結果;
}
```

## 範例

```cpp
// 計算兩數之和
int add(int a, int b) {
    return a + b;
}

// 判斷是否為偶數
bool isEven(int n) {
    return n % 2 == 0;
}

// 不回傳東西用 void
void sayHello(string name) {
    cout << "Hello, " << name << endl;
}
```

## 呼叫函數

```cpp
int result = add(3, 5);      // result = 8
bool check = isEven(10);     // check = true
sayHello("小明");            // 印出 Hello, 小明
```

## 重點

- 函數要寫在 `main()` **之前**，或先宣告
- `return` 會結束函數並回傳值
- `void` 表示不回傳任何東西

## 試試看

1. 寫一個函數計算 n! (階乘)
2. 寫一個函數判斷是否為質數
3. 寫一個函數找出兩數的最大公因數
