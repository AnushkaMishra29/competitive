#include <bits/stdc++.h>
using namespace std;
int main(){
	char arr[101];
	int count=0;
	for(int i=0;i<101;i++){
		cin>>arr[i];
	}
	int l=strlen(arr);
	sort(arr,arr+l);
	for(int i=0;i<l-1;i++){
		if(arr[i]!=arr[i+1]){count++;}
	}
	if(count%2==0){cout<<"CHAT WITH HER"<<endl;}
	else{cout<<"IGNORE HIM"<<endl;}
	
	return 0;
}