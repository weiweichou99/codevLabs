#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    int a[100];
    
    // 讀取 n 個數字
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    // 計算總和
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum = sum + a[i];
    }
    
    // 找最大值
    int maxVal = a[0];
    for (int i = 1; i < n; i++) {
        if (a[i] > maxVal) {
            maxVal = a[i];
        }
    }
    
    cout << "總和: " << sum << endl;
    cout << "最大值: " << maxVal << endl;
    
    return 0;
}
