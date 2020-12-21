#include <bits/stdc++.h>
using namespace std;
int main(){
	string s="";
	cin>>s;
	int n=s.length();
	char arr[100];
	int j=0;
	for(int i=0;i<n;i++){
		if(s[i]!='+'){
			arr[j]=s[i];
			j++;
		}
	}
	sort(arr,arr+j);
	for(int i=0;i<j;i++){
		if (i == j - 1) cout << arr[i] << endl; //last wale element ke baad + sign hatane ke liye
		else cout << arr[i] << "+";
	}
	return 0;
}