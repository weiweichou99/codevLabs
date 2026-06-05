#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    // 印出正三角形
    cout << "=== 正三角形 ===" << endl;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }
    
    // 印出倒三角形
    cout << "=== 倒三角形 ===" << endl;
    for (int i = n; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }
    
    // 印出九九乘法表（到 n）
    cout << "=== 乘法表 ===" << endl;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cout << i * j << "\t";
        }
        cout << endl;
    }
    
    return 0;
}
