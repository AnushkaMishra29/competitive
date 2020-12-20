#include <bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int l[n],r[n];
	int a=0,b=0,c=0,d=0,count=0;
	for(int i=0;i<n;i++){
		cin>>l[i];
		cin>>r[i];
	}
	for(int i=0;i<n;i++){
		if (l[i]==0){a++;}
		if (l[i]==1){b++;}
		if (r[i]==0){c++;}
		if (r[i]==1){d++;}
	}
	count=min(a,b)+min(c,d);
	cout<<count;

	
}