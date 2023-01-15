#include<bits/stdc++.h>

using namespace std;

typedef long long ll;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);

int main(){
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    fast
    int arr[9] = {0,4,-2,3,3,5,6,3,1};
    int tree[16];
    for(int i=15;i>=8;i--){
        tree[i] = arr[i-7];
    }
    for(int i=7;i>0;i--){
        tree[i] = tree[2*i] + tree[2*i+1];
    }
    for(int i=1;i<=15;i++){
        cout<<tree[i]<<" ";
    }
    return 0;
}