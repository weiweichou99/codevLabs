#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    
    int a[100][100];
    
    // 讀取矩陣
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }
    
    // 印出原始矩陣
    cout << "=== 原始矩陣 ===" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << a[i][j] << "\t";
        }
        cout << endl;
    }
    
    // 計算總和
    int sum = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            sum += a[i][j];
        }
    }
    cout << "總和: " << sum << endl;
    
    // 找最大值
    int maxVal = a[0][0], maxI = 0, maxJ = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (a[i][j] > maxVal) {
                maxVal = a[i][j];
                maxI = i;
                maxJ = j;
            }
        }
    }
    cout << "最大值: " << maxVal << " 在位置 (" << maxI << "," << maxJ << ")" << endl;
    
    return 0;
}
