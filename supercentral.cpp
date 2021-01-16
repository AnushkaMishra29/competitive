One day Vasya painted a Cartesian coordinate system on a piece of paper and marked some set of points (x1, y1), (x2, y2), ..., (xn, yn). Let's define neighbors for some fixed point from the given set (x, y):

point (x', y') is (x, y)'s right neighbor, if x' > x and y' = y
point (x', y') is (x, y)'s left neighbor, if x' < x and y' = y
point (x', y') is (x, y)'s lower neighbor, if x' = x and y' < y
point (x', y') is (x, y)'s upper neighbor, if x' = x and y' > y
We'll consider point (x, y) from the given set supercentral, if it has at least one upper, at least one lower, at least one left and at least one right neighbor among this set's points.

Vasya marked quite many points on the paper. Analyzing the picture manually is rather a challenge, so Vasya asked you to help him. Your task is to find the number of supercentral points in the given set.

#include<bits\stdc++.h>
using namespace std;
int main(){
	int n,z=0;
	cin>>n;
	bool p,q,r,s;
	p=q=r=s=0;
	int a[n][2];
	for(int i=0;i<n;i++){
		cin>>a[i][0]>>a[i][1];
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(i==j) continue;
			if(a[i][0]==a[j][0]&&a[i][1]>a[j][1]){
				p=1;
			}
			if(a[i][0]==a[j][0]&&a[i][1]<a[j][1]){
				q=1;
			}
			if(a[i][0]>a[j][0]&&a[i][1]==a[j][1]){
				r=1;
			}
			if(a[i][0]<a[j][0]&&a[i][1]==a[j][1]){
				s=1;
			}

		}
		if(p==1&&s==1&&r==1&&q==1){z++;}
			p=q=r=s=0;
		
	}
	cout<<z<<endl;
	return 0;
}
