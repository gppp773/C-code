#include <iostream>
using namespace std;
int main(){
    int a,b,c,d,i,j,k,e,f,g,h;
    a,b,c,d = 0,0,0,0;
    i,j,k = 1,1,1;
    e,f,g,h = 1,1,1,1;
    cin >> a >> b >> c;
    for (i; i<a+1; i++){
        e = e*i;
        cout << i << endl;
    }
    for (j; j<b+1; j++){
        f= f*j;
        cout << j << endl;
    }
    for (k; k<c+1; k++){
        g = g*k;
        cout << k << endl;
    }
    a,b,c = e,f,g;
    d = a+b+c;
    cout << d << endl;
}