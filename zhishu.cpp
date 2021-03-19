#include <iostream>
#include <ctime>
using namespace std;
int main(){
    {
        clock_t start, stop;
        start = clock();
        for(int w=1; w<999999; w++ ){
            ;
        }
    
    int a,b,c,i,n,pd,input;
    a = 2, b = 0, c = 2, i = 1, pd = 1, n = 0;
    cin >> input;
    for (i; i < input; i++){
        for (c; c<i; c++){
            a = i % c;
            if (a == 0){
                pd = 0;
                //cout << pd << endl;
                break;
            }

        }
        if (pd == 1){
            cout << i << endl;
            n++;
        }
        pd = 1;
        c = 2;

    }
    stop = clock();
    cout << ' ' << endl;
    cout << n << endl;
    cout << stop - start << "ms" << endl;
    return 0;
    }
}