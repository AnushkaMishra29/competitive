Being a nonconformist, Volodya is displeased with the current state of things, particularly with the order of natural numbers (natural number is positive integer number). 
He is determined to rearrange them. But there are too many natural numbers, so Volodya decided to start with the first n.
He writes down the following sequence of numbers: firstly all odd integers from 1 to n (in ascending order), then all even integers from 1 to n (also in ascending order).
Help our hero to find out which number will stand at the position number k.

#include<bits\stdc++.h>
using namespace std;
int main(){
	long long int n,k;
	cin>>n>>k;
	if(n%2==0){
		if(k<=n/2) cout<< k*2-1;
		else cout<<(k-(n+1)/2)*2;
	}
	else{
		if(k<=n/2+1) cout<< k*2-1;
		else cout<<(k-(n+1)/2)*2;
	}
	return 0;
}
