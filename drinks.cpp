#include <bits/stdc++.h>
using namespace std;
int main(){
	int n, k, l, c, d, p, nl, np;
	cin>>n;cin>>k;cin>>l;cin>>c;cin>>d;cin>>p;cin>>nl;cin>>np;
	int td,tl,ts;
	td=(k*l)/(nl);
	tl=(c*d);
	ts=p/np;
	int minm=min({td,tl,ts})/n;
	cout<<minm<<endl;;
	return 0;

}