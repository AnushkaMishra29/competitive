The Little Elephant loves Ukraine very much. Most of all he loves town Rozdol (ukr. "Rozdil").

However, Rozdil is dangerous to settle, so the Little Elephant wants to go to some other town.
The Little Elephant doesn't like to spend much time on travelling, so for his journey he will choose a town that needs minimum time to travel to.
If there are multiple such cities, then the Little Elephant won't go anywhere.

For each town except for Rozdil you know the time needed to travel to this town. Find the town the Little Elephant will go to or print "Still Rozdil", if he stays in Rozdil.

#include<bits\stdc++.h>
using namespace std;
int main(){
	int n,count=0,p;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int minm=arr[0];
	for(int i=0;i<n;i++){
		minm=min(minm,arr[i]);
	}
	for(int i=0;i<n;i++){
		if(arr[i]==minm){count++;p=i;}
	}
	if(count>1){cout<<"Still Rozdil";}
	else cout<<p+1;
	return 0;
}
