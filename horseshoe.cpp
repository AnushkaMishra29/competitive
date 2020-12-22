#include <bits/stdc++.h>
using namespace std;
int main(){
	int arr[4],count=0;
	for(int i=0;i<4;i++){cin>>arr[i];}
	for(int i=0;i<4;i++){
		if(arr[i]==arr[i+1]&&arr[i]==arr[i+2]&&arr[i]==arr[i+3]){cout<<'3';return 0;}
		for(int j=i+1;j<4;j++){
			if(arr[i]==arr[j]){count++;}
		}
		if(count>1){i++;}
	}
	cout<<count;
	return 0;
}