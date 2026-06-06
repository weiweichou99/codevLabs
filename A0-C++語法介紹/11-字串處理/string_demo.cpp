#include <iostream>
#include <string>
using namespace std;

// 判斷是否為回文
bool isPalindrome(string s) {
    int left = 0, right = s.length() - 1;
    while (left < right) {
        if (s[left] != s[right]) return false;
        left++;
        right--;
    }
    return true;
}

int main() {
    string s;
    cin >> s;
    
    cout << "原始字串: " << s << endl;
    cout << "長度: " << s.length() << endl;
    
    // 反轉字串
    string reversed = "";
    for (int i = s.length() - 1; i >= 0; i--) {
        reversed += s[i];
    }
    cout << "反轉: " << reversed << endl;
    
    // 計算母音數量
    int vowels = 0;
    for (char c : s) {
        c = tolower(c);
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            vowels++;
        }
    }
    cout << "母音數量: " << vowels << endl;
    
    // 判斷回文
    cout << "是回文嗎? " << (isPalindrome(s) ? "是" : "否") << endl;
    
    return 0;
}
