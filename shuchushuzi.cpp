#include <iostream>
using namespace std;
int main(){
    string s;
    int c,i,e,d,f;
    cin >> s;
    c = s.length();
    d = 0;
    e = 0;
    d = c;
    f = c;
    for (i = 0; i < f; i++){
        e = d;
        cout << s.substr(e,e) << endl;
        d = d - 1;
    }
    cout << s.substr(0,1) << endl;
    return 0;
}
