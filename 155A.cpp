#include <bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int min=0,max=0,count=0;
	for(int i=0;i<n;i++){
		if(arr[min]>arr[i]){
			min=i;
			count++;
		}
		if(arr[max]<arr[i]){
			max=i;
			count++;
		}
	}
	cout<<count;

}