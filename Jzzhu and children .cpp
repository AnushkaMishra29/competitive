There are n children in Jzzhu's school. Jzzhu is going to give some candies to them. Let's number all the children from 1 to n. The i-th child wants to get at least ai candies.

Jzzhu asks children to line up. Initially, the i-th child stands at the i-th place of the line. Then Jzzhu start distribution of the candies. He follows the algorithm:

Give m candies to the first child of the line.
If this child still haven't got enough candies, then the child goes to the end of the line, else the child go home.
Repeat the first two steps while the line is not empty.
Consider all the children in the order they go home. Jzzhu wants to know, which child will be the last in this order?


#include<bits\stdc++.h>
using namespace std;
int main(){
    int n,m,j=0,k=0,l,a;
    cin>>n>>m;
    vector <pair<int, int>> v;
    for(int i=0;i<n;i++){
        cin>>a;
        v.push_back(make_pair(a,i));
    }
    while(n+j>k){
    if(v[k].first>m){
        v.push_back(make_pair(v[k].first-m,v[k].second));
        j++;
    }
    else{
        l=v[k].second+1;
        
    }
    k++;
    }

    cout<<l;
    return 0;
}
