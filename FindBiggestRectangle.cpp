#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int n[100]={};  //定义数组变量
    int nn[100]={};
    int a=0;
    cin>>a;
    for(int i=0;i<a;i++){   //输入列表
        cin>>n[i];
    }
    for(int i=0;i<a;i++){   //判断可组成的每个长方形的面积
        if(n[i]<=n[i+1]){
            nn[i]=n[i]*2;
        }
        else if(n[i]>n[i+1]){
            nn[i]=n[i+1]*2;
        }
    }
    a=*max_element(nn,nn+100);  //找出面积最大的长方形
    cout<<a;
}