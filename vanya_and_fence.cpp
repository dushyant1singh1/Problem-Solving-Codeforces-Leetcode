#include<iostream>
using namespace std;

int main(){
    #ifndef ONLINE_JUDGE 
freopen("input.txt", "r", stdin); 
freopen("output.txt", "w", stdout); 
    #endif
    int  n,h;
    cin>>n>>h;
    int total=0;
    for(int i=1;i<=n;i++){
        int p;
        cin>>p;
        if(p>h) total+=2;
        else total++;
    }
    cout<<total;
}