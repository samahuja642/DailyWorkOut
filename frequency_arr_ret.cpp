#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        unordered_map<int,int>fcount;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            fcount[arr[i]]++;
        }
        int count = 0;
        for(auto it=fcount.begin();it!=fcount.end();it++){
            count += it->second/it->first;
        }
        bool gotAnswer = false;
        for(auto it=fcount.begin();it!=fcount.end();it++){
            if(it->first>it->second){cout<<-1<<endl;gotAnswer=true;break;}
            if(it->second%it->first!=0){cout<<-1<<endl;gotAnswer=true;break;}
        }
        if(gotAnswer==false){
            int ans[n];
            unordered_map<int,int>mapping(count+1);
            int num_ass = 1;
            for(int i=0;i<n;i++){
                if(fcount[arr[i]]%arr[i]==0){
                    ans[i] = num_ass;
                    mapping[arr[i]]=num_ass;
                    num_ass++;
                    fcount[arr[i]]--;
                }
                else{
                    ans[i] = mapping[arr[i]];
                    fcount[arr[i]]--;
                }
            }
            for(int i=0;i<n;i++){
                cout<<ans[i]<<" ";
            }
            cout<<endl;
        }
    }
        
	return 0;
}
