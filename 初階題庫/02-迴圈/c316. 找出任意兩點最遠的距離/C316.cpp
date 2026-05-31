#include <bits/stdc++.h>
using namespace std;

long long dist2(pair<int,int> a, pair<int,int> b) {
    long long x = (a.first-b.first)*(a.first-b.first) + (a.second-b.second)*(a.second-b.second);
    return x;
}

int main() {
    int n;
    cin >> n;

    vector< pair<int,int> > p(n); //宣告三個空座標點，名稱為p

    for(int i = 0; i < n; i++) cin >> p[i].first >> p[i].second;
    
    long long maxD = -1;  //宣告一個變數maxD，初始值為-1，代表目前找到的最大距離的平方

    //long long minD = 99999999;
    int ans_i = 0, ans_j = 1; //宣告兩個變數ans_i和ans_j，初始值分別為0和1，代表目前找到的最大距離的兩個點的索引
    
    for(int i = 0; i < n; i++)
        for(int j = i + 1; j < n; j++) {
            long long d = dist2(p[i], p[j]);
            if(d > maxD || (d == maxD && (i < ans_i || (i == ans_i && j < ans_j)))) {
                maxD = d;
                ans_i = i;
                ans_j = j;
            }
        }
    
    cout << ans_i << " " << ans_j << endl;
    return 0;
}
