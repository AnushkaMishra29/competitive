#include <bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int min=0,max=0;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<n;i++){
		if( a[min]>=a[i]){
			min=i;
		}
		if(a[max]<a[i]){
			max=i;
		}
	}
	if(max<min){
		cout<<max+n-min-1;
		return 0;
	}
	else {
		cout<<max+n-min-2;
		return 0;
	}

}
