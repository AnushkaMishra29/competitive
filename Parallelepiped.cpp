You've got a rectangular parallelepiped with integer edge lengths. You know the areas of its three faces that have a common vertex. Your task is to find the sum of lengths of all 12 edges of this parallelepiped.

#include<bits\stdc++.h>
using namespace std;
int main(){
	int x,y,z;
	cin>>x>>y>>z;
	int a=sqrt((x*y)/z);
	int b=sqrt((z*y)/x);
	int c=sqrt((x*z)/y);
	cout<<(4*(a+b+c));
 
	
 
	return 0;
}
