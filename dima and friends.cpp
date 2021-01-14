Dima and his friends have been playing hide and seek at Dima's place all night. As a result, Dima's place got messy. In the morning they decided that they need to clean the place.

To decide who exactly would clean the apartment, the friends want to play a counting-out game. First, all the guys stand in a circle, and then each of them shows some number of fingers on one hand (one to five), and then the boys count in a circle, starting from Dima, the number of people, respective to the total number of fingers shown. The person on who the countdown stops will clean the apartment.

For example, if Dima and one of his friends played hide and seek, and 7 fingers were shown during the counting-out, then Dima would clean the place. If there were 2 or say, 8 fingers shown, then his friend would clean the place.

Dima knows how many fingers each of his friends will show during the counting-out. Now he is interested in the number of ways to show some number of fingers on one hand (one to five), so that he did not have to clean the place. Help Dima.



#include<bits\stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int fingers[n];
    int sum=0;
    for(int i=0;i<n;i++){
        cin>>fingers[i];
        sum+=fingers[i];
    } 
    int count=0;
    for(int i=1;i<=5;i++){
        if((sum+i)%(n+1)!=1){count+=1;}   
    }
    cout<<count;
 
 
    return 0;
}
