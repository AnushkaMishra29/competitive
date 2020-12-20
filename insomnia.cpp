#include <bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
	int k,l,m,n,d,count=0;
	cin>>k>>l>>m>>n;
	cin>>d;
	int arr[d];
	for(int i=1;i<=d;i++){
		arr[i]=i;
	}
	for(int i=1;i<=d;i++){
		if (arr[i]%k==0||arr[i]%l==0||arr[i]%m==0||arr[i]%n==0){
			count++;
		}
	}
	cout<<count;
}