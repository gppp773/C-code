#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int l[100]={};
    int ls[100]={};
    int lss[100]={};
    int a=0,in=0,b=0,lls=0,llls=0,max=0,bg=0,en=0,gr=0;
    cin>>in;
    for(int i=0;i<in;i++){
        cin>>b;
        l[i]=b;
    }
    for(int i=0;i<in;i++){
        if(l[i+1]>l[i]){
            ls[lls]=i;
            lls++;
            for(int ii=i;ii<in;ii++){
                if(l[ii+1]<l[ii] or l[ii+1]==l[ii]){
                    ls[lls]=ii;
                    lls++;
                    break;
                }
            }
        }
    }
    for(int i=0;i<100;i=i+2){
        if(ls[i]!=ls[i+1]){
            lss[llls]=l[ls[i+1]]-l[ls[i]];
            llls++;
        }
    }
    max=*max_element(lss,lss+100);
    int* q=find(lss,lss+100,max);
    int r=q-lss;
    r=r*2;
    bg=l[ls[r]];
    en=l[ls[r+1]];
    gr=en-bg+1;
    cout<<bg<<" "<<en<<" "<<gr<<endl;
    return 0;
}