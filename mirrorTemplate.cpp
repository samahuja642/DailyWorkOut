#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(){
	string a,b;
	cin>>a>>b;
	if(a[0]==b[0]){
	    cout<<"YES\n"<<a[0]<<"*"<<endl;return;
	}
	if(a[a.length()-1]==b[b.length()-1]){
	    cout<<"YES\n*"<<b[b.length()-1]<<endl;return;
	}
	for(ll i=0;i<a.length()-1;i++){
		for(ll j=0;j<b.length()-1;j++){
            if(a[i]==b[j] && a[i+1]==b[j+1]){
                cout<<"YES\n*"<<a[i]<<a[i+1]<<"*"<<endl;
                return;
            }
        }
	}
	cout<<"NO"<<endl;
}
int main(){
	ll t;
	cin>>t;
	while(t--){
		solve();	
	}
	return 0;
}