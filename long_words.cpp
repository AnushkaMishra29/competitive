#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;cin>>n;
	string str;
	for(int i=0;i<n;i++){
		cin>>str;
		int m=str.length();
		if(m>10){
			cout<<str[0]<<m-2<<str[m-1]<<endl;
		}
		else cout<<str<<endl;
	}
	return 0;
}