#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    // 計算 1+2+3+...+n
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        sum = sum + i;
    }
    
    cout << "1+2+3+...+" << n << " = " << sum << endl;
    
    return 0;
}
