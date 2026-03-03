#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    
    vector<int> aa(n);
    vector<int> bb(n);
    
    for(int i =0; i < n; i++) cin >> aa[i];
    for(int i =0; i < n; i++) cin >> bb[i];
    //可直接使用 vector 的 == 運算子來比較，因為 vector 有重載這個運算子
    for(int i = 0; i < n; i++){
        if(aa[i] == bb[i]) cout << ">:(" << endl;
        else cout << ":)" << endl;
    }

    return 0;
}
