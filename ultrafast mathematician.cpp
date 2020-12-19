#include<iostream>  
#include <string>  // for string 
using namespace std;
int main()
{
	string n,m,a="";
	cin>>n;
	cin>>m;
	for(int i=0;i<n.length();i++){
		if(n[i]!=m[i]){
			a+="1";
		}
		else
			a+="0";
	}
	cout<<a<<endl;
	return 0;
}
