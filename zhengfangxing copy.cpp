#include <iostream>
using namespace std;
int main(){
    string cnmlgb;
    string cnmmb;
    string ltsj;
    cnmlgb = "************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************";
    cnmmb = "                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                        ";
    int sb,i,sc,sw,sd;
    cin >> sb;
    sc = 0;
    for (i = 0; i < sb; i++){
        cout << cnmlgb.substr(0,sb) << endl;
    }
    for (i = 0; i < sb + 1; i++){
        cout << cnmlgb.substr(0,sc) << endl;
        sc = sc + 1;
    }
    sc = 0;
    for (i = 0; i < sb; i++){
        cout << cnmlgb.substr(0,sc) << endl;
        sc = sc + 1;
    }
    for (i = 0; i < sb; i++){
        cout << cnmlgb.substr(0,sc) << endl;
        sc = sc - 1;
    }
    sc = 0;
    sc = 0;
    sw = sb;
    sd = -1;
    for (i = 0; i < sb + 1; i++){
        if (sd > 0){
            ltsj = cnmlgb.substr(0,sd);
        }
        cout << cnmmb.substr(0,sw) << cnmlgb.substr(0,sc) << ltsj << endl;
        sc = sc + 1;
        sw = sw - 1;
        sd = sd + 1;
    }
    return 0;
}