#include<bits/stdc++.h>

using namespace std;

typedef long long ll;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);

// string numToString(ll n){
//     string ans;
//     while(n){
//         ans += ('0'+char(n%10));
//         n /= 10;
//     }
//     return ans;
// }

// bool isPalindrome(ll n){
//     string nString = numToString(n);
//     string rev = nString;
//     reverse(rev.begin(),rev.end());
//     for(ll i=0;i<=nString.length()/2;i++){
//         if(nString[i]!=rev[i])return false;
//     }
//     return true;
// }

int main(){
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    fast
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        string number;
        cin>>number;
        if(number[0]=='9'){
            string ans;
            int carry = 0;
            for(ll i=number.length()-1;i>=0;i--){
                if((carry+(number[i]-'0'))%10==1){
                    ans.push_back('0');
                    carry = 0;
                }
                else{
                    ans.push_back('0' + (11-((carry+(number[i]-'0'))))%10);
                    carry = 1;
                }
            }
            reverse(ans.begin(),ans.end());
            cout<<ans<<endl;
        }
        else{
            ll sum = 9;
            string ans;
            for(int i=0;i<number.length();i++){
                ans.push_back('0'+(sum-(number[i]-'0')));
            }
            cout<<ans<<endl;
        }


        // Integer OverFlow We Will Surely need to do something with strings.
        // ll ans;
        // for(ll i=pow(10,n-1);i<pow(10,n);i++){
        //     if(isPalindrome(number+i)){
        //         ans = i;
        //         break;
        //     }
        // }
        // cout<<ans<<endl;

    }
    return 0;
}