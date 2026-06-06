#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> h(n); //宣告有n個大樓
    vector<int> cc;   //紀錄每次都不同次數k的陣列， Count => cc

    for(int i = 0; i < n; i++) cin >> h[i];   // 讀取大樓高度
    
    int a,b;
    int k = 1; //統計連續的次數，至少大於一棟
    
    for (int i=0; i < n-1; i++){
        a = h[i];
        b = h[i+1];
        // printf("%d : %d, %d\n", i , a, b);
        
        if(a > b) //大樓必須越來越低
        {
            k = k + 1;
        } else {
            cc.push_back(k);
            k = 1; //每次重新設定至少一棟!
        }
    }
    cc.push_back(k);    // 處理最後一段（迴圈結束後還要加入最後一段）
    
    //列出cc陣列內有什麼?
    // for(int i=0; i<cc.size(); i++) cout << cc[i] << " ";
    
    // 找出最長的那一段
    int maxLength = *max_element(cc.begin(), cc.end());
    cout << maxLength;
    
    return 0;
}
