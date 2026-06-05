#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    vector<int> v;
    
    // 讀取 n 個數字
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        v.push_back(x);  // 加到尾端
    }
    
    // 印出全部
    cout << "原始: ";
    for (int x : v) {
        cout << x << " ";
    }
    cout << endl;
    
    // 倒著印
    cout << "倒序: ";
    for (int i = v.size() - 1; i >= 0; i--) {
        cout << v[i] << " ";
    }
    cout << endl;
    
    // 計算總和
    int sum = 0;
    for (int x : v) {
        sum += x;
    }
    cout << "總和: " << sum << endl;
    
    return 0;
}
