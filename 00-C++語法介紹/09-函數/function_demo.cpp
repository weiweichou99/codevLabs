#include <iostream>
using namespace std;

// 計算兩數之和
int add(int a, int b) {
    return a + b;
}

// 計算兩數中較大的
int maxOf(int a, int b) {
    if (a > b) return a;
    else return b;
}

// 判斷是否為質數
bool isPrime(int n) {
    if (n < 2) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

// 計算階乘
int factorial(int n) {
    int result = 1;
    for (int i = 1; i <= n; i++) {
        result = result * i;
    }
    return result;
}

int main() {
    int a, b;
    cin >> a >> b;
    
    cout << a << " + " << b << " = " << add(a, b) << endl;
    cout << "較大的是: " << maxOf(a, b) << endl;
    
    cout << a << " 是質數嗎? " << (isPrime(a) ? "是" : "否") << endl;
    cout << b << " 是質數嗎? " << (isPrime(b) ? "是" : "否") << endl;
    
    cout << a << "! = " << factorial(a) << endl;
    
    return 0;
}
