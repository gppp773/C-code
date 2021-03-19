#include <iostream>
using namespace std;
//把三位数翻转
int main(){
    int a,b,c,d,e,f;
    cin >> a;
    b = a - a / 100 * 100;
    c = b - b / 10 * 10;
    d = b / 10 * 10;
    e = a / 100;
    f = c * 100 + d + e;
    cout << f << endl;
}