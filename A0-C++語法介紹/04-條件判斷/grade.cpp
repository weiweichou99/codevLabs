#include <iostream>
using namespace std;

int main() {
    int score;
    cin >> score;
    
    if (score >= 90) {
        cout << "A 太棒了！" << endl;
    } else if (score >= 80) {
        cout << "B 很好！" << endl;
    } else if (score >= 70) {
        cout << "C 還可以" << endl;
    } else if (score >= 60) {
        cout << "D 及格邊緣" << endl;
    } else {
        cout << "不及格，要加油！" << endl;
    }
    
    return 0;
}
