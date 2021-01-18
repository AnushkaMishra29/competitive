One Sunday Petr went to a bookshop and bought a new book on sports programming. The book had exactly n pages.

Petr decided to start reading it starting from the next day, that is, from Monday. Petr's got a very tight schedule and for each day of the week he knows how many pages he will be able to read on that day. Some days are so busy that Petr will have no time to read whatsoever. However, we know that he will be able to read at least one page a week.

Assuming that Petr will not skip days and will read as much as he can every day, determine on which day of the week he will read the last page of the book.

#include<bits\stdc++.h>
using namespace std;
int main(){
        int n;
        cin>>n;
        int arr[7];
        for(int i=0;i<7;i++){cin>>arr[i];}
        while(n>0){
                for(int i=0;i<7;i++){
                    n=n-arr[i];
                    if(n<=0){
                            cout<<i+1;
                            break;
                        }
                    
                }
        }
        return 0;
}
