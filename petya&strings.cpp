#include <bits/stdc++.h>
using namespace std;
int main(){
	string a,b;
	cin>>a;
	cin>>b;
	int n = a.length(),count=0;
	for(int i=0;i<n;i++){
		if(a[i]<92){
			a[i]+=32;
		}
		if(b[i]<92){
			b[i]+=32;
		}
	}
	if(a<b){cout<<"-1"<<endl;}
	if(a>b){cout<<"1"<<endl;}
	else cout<<"0"<<endl;
	return 0;


}