#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    
    vector<int> arr1;//不及格
    vector<int> arr2;//及格
    
    for(int i=0; i<n; i++){
        int a;
        cin >> a;
        if(a>=60) arr2.push_back(a);
        else arr1.push_back(a);
    }
    
   // 第一行：輸出所有分數
    vector<int> all_scores;
    for(int v : arr1) all_scores.push_back(v);
    for(int v : arr2) all_scores.push_back(v);
    sort(all_scores.begin(), all_scores.end());
    for(auto t:all_scores) cout << t << " ";
    cout << "\n";
    
    // 第二行：最高不及格分數或best case
    sort(arr1.begin(), arr1.end());
    if(arr1.empty()) cout << "best case\n";
    else cout << arr1[arr1.size()-1] << "\n";
    
    // 第三行：最低及格分數或worst case  
    sort(arr2.begin(), arr2.end());
    if(arr2.empty()) cout << "worst case\n";
    else cout << arr2[arr2.size()-1] << "\n";

    return 0;
}
