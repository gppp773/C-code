#include <iostream>
using namespace std;
int main()
{
    int a;
    cout << "0 or 1" << endl;
    cin >> a;
    switch (a)
    {
    case 0:
        int i;
        i = 0;
        for(; i<11; i++)
        {
            cout << "老铁双击666" << endl;
        }
        break;
    case 1:
        int n;
        n = 0;
        for(; n<11; n++)
        {
            cout << "酸萝卜别吃！"<< endl;
        }
        break;
    default:
        break;
    }
}