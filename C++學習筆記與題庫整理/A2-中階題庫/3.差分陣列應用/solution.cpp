#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
    int n, q;
    cin >> n >> q;

    // ========== 1. 讀取原始陣列 ==========
    vector<int> a(n+1);  // a[1] ~ a[n]，索引從 1 開始
    for(int i = 1; i <= n; i++) {
        cin >> a[i];
    }

    // ========== 2. 建立差分陣列 ==========
    // 差分陣列的定義：diff[i] = a[i] - a[i-1]
    // 這樣做的好處：對區間 [l,r] 加 x，只需要修改兩個位置！
    vector<int> diff(n+2, 0);  // 多開一格避免越界
    for(int i = 1; i <= n; i++) {
        diff[i] = a[i] - a[i-1];
    }

    // 印出初始差分陣列（debug 用）
    cout << "first diff: ";
    for(int i = 1; i <= n; i++) cout << diff[i] << " ";
    cout << endl << endl;

    // ========== 3. 處理 q 次區間加法操作 ==========
    for(int i = 0; i < q; i++) {
        int l, r, x;
        cin >> l >> r >> x;
        l++; r++;  // 如果題目是 0-based，轉成 1-based

        diff[l] += x;      // 右邊開始加 x
        diff[r+1] -= x;    // 左邊再往左一個，再把 x 扣回來
    }

    // 印出操作後的差分陣列（debug 用）
    // cout << "diff: ";
    for(int i = 1; i <= n; i++) cout << diff[i] << " ";
    cout << endl;

    // ========== 4. 用前綴和還原最終陣列 ==========
    // res[i] = res[i-1] + diff[i]
    // 這就是差分陣列的逆運算！
    vector<int> res(n+1);
    res[0] = 0;
    for(int i = 1; i <= n; i++) {
        res[i] = res[i-1] + diff[i];
    }

    // ========== 5. 輸出結果 ==========
    for(int i = 1; i <= n; i++) {
        cout << res[i] << " ";
    }

    return 0;
}

/*
 * ========== 差分陣列的核心概念 ==========
 * 
 * 差分是前綴和的逆運算：
 * - 前綴和：從差分陣列 → 還原原始陣列
 * - 差分：從原始陣列 → 建立差分陣列
 * 
 * ========== 為什麼區間加法只需要改兩個位置？ ==========
 * 
 * 假設要對 [l, r] 區間加 x：
 * 
 * diff[l] += x
 *   → 做前綴和時，從位置 l 開始，所有數都會 +x
 * 
 * diff[r+1] -= x
 *   → 做前綴和時，從位置 r+1 開始，所有數都會 -x
 *   → 這樣就抵消了 r+1 之後的 +x 效果
 * 
 * 結果：只有 [l, r] 這段 +x，其他不變！
 * 
 * ========== 記憶口訣 ==========
 * 
 * 「左加右減，前綴還原」
 * 
 */
