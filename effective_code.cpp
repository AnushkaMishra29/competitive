Once at a team training Vasya, Petya and Sasha got a problem on implementing linear search in an array.

According to the boys, linear search works as follows. The array elements in a pre-selected order are in turn compared with the number that you need to find. Once you find the array element that is equal to the required one, the search ends. The efficiency of the algorithm is the number of performed comparisons. The fewer comparisons the linear search has made, the more effective it is.

Vasya believes that a linear search would work better if it sequentially iterates through the elements, starting with the 1-st one (in this problem we consider the elements of the array indexed from 1 to n) and ending with the n-th one. And Petya says that Vasya is wrong: the search will need less comparisons if it sequentially iterates the elements starting from the n-th and ending with the 1-st one. Sasha argues that the two approaches are equivalent.

To finally begin the task, the teammates decided to settle the debate and compare the two approaches on an example. For this, they took an array that is a permutation of integers from 1 to n, and generated m queries of the form: find element with value bi in the array. They want to calculate for both approaches how many comparisons in total the linear search will need to respond to all queries. If the first search needs fewer comparisons, then the winner of the dispute is Vasya. If the second one does, then the winner is Petya. If both approaches make the same number of comparisons, then Sasha's got the upper hand.

But the problem is, linear search is too slow. That's why the boys aren't going to find out who is right before the end of the training, unless you come in here. Help them to determine who will win the dispute.

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
