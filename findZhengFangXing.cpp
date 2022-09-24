#include <iostream>
#include <algorithm>
using namespace std;
int main(){
	int l[100][100]={};
	int ll[3]={};
	int maxx[10000]={};
	int a=0,b=0,c=0,d=0;
	cin>>a;
	cin>>b;
	for(int i=0;i<a;i++){
		for(int ii=0;ii<b;ii++){
			cin>>l[a][b];
		}
	}
	for(int i=0;i<a;i++){
		for(int ii=0;ii<b;ii++){
			if(l[a][b]==1){
				if(i-1>=0 && ii-1>=0){
					ll[1]=l[a][b-1];
					ll[2]=l[a-1][b];
					ll[3]=l[a-1][b-1];
					l[a][b]=*min_element(ll,ll+3)+1;
				}
			}	
		}
	}
	for(int i=0;i<a;i++){
		for(int ii=0;ii<b;ii++){
			cout<<l[a][b];
		}
		cout<<endl;
	}
	for(int i=0;i<a;i++){
		for(int ii=0;ii<b;ii++){
				maxx[d]=l[a][b];
				d++;
		}
	}
	d=*max_element(maxx,maxx+10000);
	cout<<d*d;
	return 0;
}
