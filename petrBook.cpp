#include<bits/stdc++.h>

using namespace std;

typedef long long ll;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);

int main(){
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    fast
    int n;
    cin>>n;
    vector<int>week(7);
    int sum = 0;
    for(int i=0;i<=6;i++){
        cin>>week[i];
        sum+=week[i];
    }
    sum = n%sum;
    if(sum==0)cout<<7<<endl;
    else{
        for(int i=0;i<=6;i++){
            if(sum>week[i]){
                sum-=week[i];
            }
            else{
                cout<<i+1<<endl;
                break;
            }
        }
    }
    return 0;
}