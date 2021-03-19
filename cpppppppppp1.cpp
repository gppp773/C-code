#include <iostream>
using namespace std;
int main(){
    int a,b,c,d,i;
    a,b,c,d,i = 0,0,0,0,0;
    cin >> a >> b >> c;
    for (i; i<a; i++){
        a = i*i;
    }
    i = 0;
    for (i; i<b; i++){
        b = i*i;
    }
    i = 0;
    for (i; i<c; i++){
        c = c*i;
    }
    d = a+b+c+d;
    cout << d << endl;
}