#include<bits/stdc++.h>

using namespace std;

typedef long long ll;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);

int method1(int n){
    int count = 0;
    while(n){
        if(n&1)count++;
        n = n>>1;
    }
    return count;
}

int method2(int n){
    int count = 0;
    while(n){
        n = n & n-1;
        count++;
    }
    return count;
}

int main(){
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    fast
    int n=9;
    cout<<method1(n)<<endl;
    cout<<method2(n)<<endl;
    return 0;
}