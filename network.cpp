#include <iostream>
using namespace std;
int main(){
    string s="";
    s.resize(6);
    int a=0,b=0,c=0,d=0,e=0,n=0,serversbhn=0,clientsbhn=0;
    cin>>n;
    freopen("network.in","r",stdin);
    //freopen("network.out","w",stdout);
    int serversbh[5]={};
    int clientsbh[5]={};
    for(int i=0;i<n;i++){
        scanf("%s %d.%d.%d.%d:%d",&s[0], &a, &b, &c, &d, &e);
        printf("%s %d.%d.%d.%d:%d\n",&s[0], a, b, c, d, e);
        if(s[0]=='S'){
            int pd=1;
            if(a>=0 and a<=255 and b>=0 and b<=255 and c>=0 and c<=255 and d>=0 and d<=255 and e>=0 and e<=65535){
                for(int ii=0;ii<5;ii++){
                    if(e==serversbh[ii]){
                        cout<<"FAIL"<<endl;
                        pd=0;
                        break;
                    }
                }
                if(pd==1){
                    cout<<"OK"<<endl;
                    serversbh[serversbhn]=e;
                    serversbhn++;                     
                }
            }
            else{
                cout<<"ERR"<<endl;
            }
        }
        if(s[0]=='C'){
            int pd_=0;
            if(a>=0 and a<=255 and b>=0 and b<=255 and c>=0 and c<=255 and d>=0 and d<=255 and e>=0 and e<=65535){
                for(int ii=0;ii<5;ii++){
                    if(e==serversbh[ii]){
                        cout<<ii+1<<endl;
                        pd_=1;
                        break;
                    }
                }
            }
            else{
                cout<<"ERR"<<endl;
            }            
            if(pd_==0){
                cout<<"FAIL"<<endl;
            }
//            clientsbh[clientsbhn]=e;
//          clientsbhn++;
        }
    }
    return 0;
}