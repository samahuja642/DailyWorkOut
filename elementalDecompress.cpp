#include<bits/stdc++.h>

using namespace std;

typedef long long ll;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);

int main(){
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    fast
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        ll a[n];
        unordered_map<ll,ll>count;
        for(ll i=0;i<n;i++){
            cin>>a[i];
            count[a[i]]++;
        }
        vector<ll>p(n),q(n);
        vector<ll>zero_freq;
        bool ans = false;
        for(ll i=1;i<=n;i++){
            if(i==1&&count[i]>=2){
                cout<<"NO"<<endl;
                ans = true;
                break;
            }
            if(count[i]>2){
                cout<<"NO"<<endl;
                ans = true;
                break;
            }
            if(count[i]==0){
                zero_freq.push_back(i);
                zero_freq.push_back(i);
            }
        }
        if(ans==false){
            sort(zero_freq.begin(),zero_freq.end());
            unordered_map<ll,ll>two_freq;
            for(ll i=0;i<n;i++){
                if(count[a[i]]==1){
                    p[i] = a[i];
                    q[i] = a[i];
                }
                else{
                    ll temp = -1;
                    ll j = zero_freq.size()-1;
                    while(j>=0 && temp==-1){
                        if(a[i]>zero_freq[j]){
                            temp = zero_freq[j];
                            zero_freq.erase(zero_freq.begin()+j);
                        }
                        j--;
                    }
                    if(temp==-1){
                        cout<<"NO"<<endl;
                        ans = true;
                        break;
                    }
                    if(two_freq[a[i]]==0){
                        p[i] = a[i];
                        q[i] = temp;
                        two_freq[a[i]]++;
                    }
                    else{
                        p[i] = temp;
                        q[i] = a[i];
                    }
                }
            }
            if(ans==false){
                cout<<"YES"<<endl;
                for(ll i=0;i<n;i++){
                    cout<<p[i]<<" ";
                }
                cout<<endl;
                for(ll i=0;i<n;i++){
                    cout<<q[i]<<" ";
                }
                cout<<endl;
            }
        }
    }
    return 0;
}