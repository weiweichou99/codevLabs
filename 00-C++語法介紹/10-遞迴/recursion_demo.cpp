#include <iostream>
using namespace std;

// 遞迴計算階乘
int factorial(int n) {
    if (n <= 1) return 1;
    return n * factorial(n - 1);
}

// 遞迴計算費氏數列
int fib(int n) {
    if (n <= 2) return 1;
    return fib(n - 1) + fib(n - 2);
}

// 遞迴計算 1+2+...+n
int sumTo(int n) {
    if (n <= 0) return 0;
    return n + sumTo(n - 1);
}

// 遞迴計算 a 的 b 次方
int power(int a, int b) {
    if (b == 0) return 1;
    return a * power(a, b - 1);
}

int main() {
    int n;
    cin >> n;
    
    cout << n << "! = " << factorial(n) << endl;
    cout << "費氏數列第 " << n << " 項 = " << fib(n) << endl;
    cout << "1+2+...+" << n << " = " << sumTo(n) << endl;
    cout << "2 的 " << n << " 次方 = " << power(2, n) << endl;
    
    return 0;
}
