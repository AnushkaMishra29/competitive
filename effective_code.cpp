#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int n;
    cin>>n;
    int arr[n+1];
    unordered_map<int,int> s;
    for(int i=1;i<n+1;i++){
        cin>>arr[i];
        s[arr[i]]=i;
    }
    long long int m;
    cin>>m;
    int count1=0,count2=0;
    for(int i=0;i<m;i++){
        int x;
        cin>>x;
        count1+=s[x];
        count2=count2+n-s[x]+1;
    }
    cout<<count1<<" "<<count2;
    return 0;
}
