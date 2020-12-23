#include <bits/stdc++.h>
using namespace std;
int main(){
	string p;
	cin>>p;
	int n=p.length(),count=0;
	for(int i=0;i<n;i++){
		if(p[i]>=33&&p[i]<=126){
			if(p[i]=='H'||p[i]=='9'||p[i]=='Q'){
				count++;
			}
		}
	}
	if(count>=1){cout<<"YES"<<endl;}
	else cout<<"NO"<<endl;
	return 0;


}