#include <bits/stdc++.h>
using namespace std;
int main(){
	unordered_map<char,int>m1,m2;
	char arr[200],brr[200];
	string a,b;
	cin>>a;
	cin>>b;
	string c;
	cin>>c;
	int p=c.length();
	int m=a.length();
	int n=b.length();
	for(int i=0;i<m;i++){
		arr[i]=a[i];
	}
	int j=0;
	for(int i=m;i<(m+n);i++){
		arr[i]=b[j];
		j++;
	}
	for(int i=0;i<(m+n);i++){
		m1[arr[i]]++;
	}
	for(int i=0;i<p;i++){
		brr[i]=c[i];
	}
	for(int i=0;i<p;i++){
		m2[brr[i]]++;
	}
	if(m1==m2){cout<<"YES"<<endl;}
	else cout<<"NO"<<endl;
	return 0;


}