#include <bits/stdc++.h>
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


    vector<int> v = {5, 2, 8, 1, 9};

    // 用內建函數
    int maxVal = *max_element(v.begin(), v.end());  // 9
    int minVal = *min_element(v.begin(), v.end());  // 1
    cout << "用內建函數 max_element 和 min_element:" << endl;
    cout << "最大值: " << maxVal << endl;
    cout << "最小值: " << minVal << endl;
    
    return 0;
}
