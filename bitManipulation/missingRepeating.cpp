#include<bits/stdc++.h>

using namespace std;

typedef long long ll;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);

pair<int,int> missingRepeating(int n,int arr[]){
    int fil = 0;
    for(int i=0;i<n;i++){
        fil ^= (arr[i]^(i+1));
    }
    int setBitIndex = -1;
    for(int i=0;i<32;i++){
        if(fil & (1<<i)){
            setBitIndex = i;
            break;
        }
    }
    int l = 0,r = 0;
    for(int i=0;i<n;i++){
        if((i+1)&(1<<setBitIndex))l ^= (i+1);
        else r ^= (i+1);
        if((arr[i])&(1<<setBitIndex))l ^= (arr[i]);
        else r ^= (arr[i]);
    }
    return {l,r};
}

int main(){
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    fast
    int n = 7;
    int arr[] = {1,3,3,2,5,4,7};
    cout<<missingRepeating(n,arr).first<<" "<<missingRepeating(n,arr).second<<endl;
    return 0;
}