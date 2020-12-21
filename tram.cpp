#include <bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int l[n],r[n],count=0,maxm=0,m[n];
	for(int i=0;i<n;i++){
		cin>>l[i];
		cin>>r[i];
	}
	for(int i=0;i<n;i++){
		count-=l[i];
		count+=r[i];
		m[i]=count;
	}
	maxm=*max_element(m,m+n);
	cout<<maxm;

}