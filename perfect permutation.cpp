#include<iostream>
#include<string> //isme strings wala concept nhi lagega, humein directly o/p print karwana padega
using namespace std;//kyuki agar hum strings ke liye o/p print karenge to uski asci values 0-9 ki hi hoti hai aur is case mein hum bade numbers print nhi kar paenge 
int main(){
	int n;
	cin>>n;
	if (n==1||n%2==1){
		cout<<"-1"<<endl;
		return 0;
	}
	else{
		cout<<"2 1";
		for (int i = 3; i < n; i+=2)
		{
			cout<<" "<<i+1<<" "<<i;
		}
		
	}
	return 0;
}
