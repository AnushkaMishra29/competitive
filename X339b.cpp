Xenia lives in a city that has n houses built along the main ringroad. The ringroad houses are numbered 1 through n in the clockwise order.
The ringroad traffic is one way and also is clockwise.

Xenia has recently moved into the ringroad house number 1.
As a result, she's got m things to do. In order to complete the i-th task, she needs to be in the house number ai and complete all tasks with numbers less than i.
Initially, Xenia is in the house number 1, find the minimum time she needs to complete all her tasks if moving from a house to a neighboring one along the ringroad 
takes one unit of time.


#include<bits\stdc++.h>
using namespace std;
int main(){
	int n,m;
	cin>>n;
	cin>>m;
	int arr[m];
	long long int sum=0; int start=1;
	for(int i=0;i<m;i++){
		cin>>arr[i];
		if(arr[i]>=start){
			sum+=arr[i]-start;
		}
		else{
			sum+=n-start+arr[i];
		}
		start=arr[i];
	}
	cout<<sum;

	return 0;
}
