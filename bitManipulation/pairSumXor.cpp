#include<bits/stdc++.h>

using namespace std;

typedef long long ll;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);

int method(int arr[],int n){
    int ans = 0;
    for(int i=0;i<31;i++){
        int cntS = 0,cntUS = 0;
        for(int j=0;j<n;j++){
            if(arr[j] & (1<<i))cntS++;
            else cntUS++;
        }
        ans += (cntS*cntUS*(1<<i));
    }
    return ans;
}

int main(){
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    fast
    int arr[4] = {5, 9, 7, 6};
    int ans = 0;
    for(int i=0;i<4;i++){
        for(int j=i+1;j<4;j++){
            ans += arr[i] ^ arr[j];
        }
    }
    cout<<ans<<endl;
    cout<<method(arr,4)<<endl;
    return 0;
}