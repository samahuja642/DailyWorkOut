#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    int h[n];
    for(int i=0;i<n;i++){
        cin>>h[i];
    }
    int ps[n-k+1];
    ps[0] = h[0] + h[1] + h[2];
    for(int i=1;i<n-k+1;i++){
        ps[i] = ps[i-1] - h[i-1] + h[i+k-1];
    }
    int mini = INT_MAX;
    int minindex = -1;
    for(int i=0;i<n-k+1;i++){
        if(ps[i]<mini){
            mini = ps[i];
            minindex = i;   
        }
    }
    cout<<minindex+1<<endl;
    return 0;
}