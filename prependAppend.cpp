#include<bits/stdc++.h>

using namespace std;

typedef long long ll;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);

int main(){
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    fast
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string str;
        cin>>str;
        int left = 0;
        int right = n-1;
        int ans = n;
        while(left<right){
            if(str[left]!=str[right]){
                ans-=2;
                left++;
                right--;
            }
            else{
                break;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}