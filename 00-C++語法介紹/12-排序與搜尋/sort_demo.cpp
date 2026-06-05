#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    
    // 原始資料
    cout << "原始: ";
    for (int x : v) cout << x << " ";
    cout << endl;
    
    // 由小到大排序
    sort(v.begin(), v.end());
    cout << "由小到大: ";
    for (int x : v) cout << x << " ";
    cout << endl;
    
    // 由大到小排序
    sort(v.begin(), v.end(), greater<int>());
    cout << "由大到小: ";
    for (int x : v) cout << x << " ";
    cout << endl;
    
    // 最大值與最小值
    cout << "最大值: " << v[0] << endl;
    cout << "最小值: " << v[n-1] << endl;
    
    return 0;
}
