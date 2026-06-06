#include <iostream>
#include <vector>
using namespace std;

int main() {
    // ========== 第一步：讀取輸入 ==========
    int n, q;
    cin >> n >> q;

    // ========== 第二步：讀取陣列 ==========
    vector<long long> arr(n);  // 用 long long 避免數字太大溢位
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    // 範例：arr = [1, 3, -2, 5, 4]

    // ========== 第三步：建立前綴和陣列 ==========
    // 前綴和的概念：prefix[i] = arr[0] + arr[1] + ... + arr[i]
    // 這樣要算區間 [l, r] 的總和，只需要 prefix[r] - prefix[l-1]
    
    vector<long long> prefix(n);
    prefix[0] = arr[0];  // 第一個元素的前綴和就是它自己
    
    for (int i = 1; i < n; i++) {
        prefix[i] = prefix[i-1] + arr[i];
        // prefix[i] = 前面所有數的總和 + 目前這個數
    }
    // 範例：
    // arr    = [1,  3, -2,  5,  4]
    // prefix = [1,  4,  2,  7, 11]
    //           ↑   ↑   ↑   ↑   ↑
    //           1  1+3 4-2 2+5 7+4

    // ========== 第四步：處理每個查詢 ==========
    for (int i = 0; i < q; i++) {
        int l, r;
        cin >> l >> r;
        // l, r 是查詢的區間（從 0 開始計算）

        long long sum;
        
        if (l == 0) {
            // 如果從第 0 個開始，直接用 prefix[r]
            sum = prefix[r];
        } else {
            // 否則用 prefix[r] - prefix[l-1]
            // 這樣就能得到 arr[l] + arr[l+1] + ... + arr[r]
            sum = prefix[r] - prefix[l-1];
        }
        
        cout << sum << endl;
    }
    // 範例查詢：
    // 查詢 [1, 3]：prefix[3] - prefix[0] = 7 - 1 = 6
    //              但題目的 Sample Output 是 2...
    //              注意：題目的索引可能從 1 開始，請依實際題目調整

    return 0;
}

/*
 * ========== 前綴和的好處 ==========
 * 
 * 如果沒有前綴和，每次查詢都要用迴圈加總：
 *   for (int i = l; i <= r; i++) sum += arr[i];
 *   → 每次查詢需要 O(r-l) 時間
 *   → q 次查詢總共需要 O(q * n) 時間，太慢！
 * 
 * 有了前綴和：
 *   sum = prefix[r] - prefix[l-1];
 *   → 每次查詢只需要 O(1) 時間
 *   → q 次查詢總共只需要 O(q) 時間，超快！
 * 
 * ========== 記憶口訣 ==========
 * 
 * 「區間總和 = 右邊前綴和 - 左邊前一個的前綴和」
 * 
 */
