#include<bits/stdc++.h>

using namespace std;

typedef long long ll;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);

vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& queries) {
    vector<int>ans(queries.size());
    vector<int>prfxor(arr.size());
    prfxor[0] = arr[0];
    for(int i=1;i<arr.size();i++){
        prfxor[i] = prfxor[i-1]^arr[i];
    }
    for(int i=0;i<queries.size();i++){
        if(queries[i][0]>0)ans[i] = prfxor[queries[i][1]] ^ prfxor[queries[i][0]-1];
        else ans[i] = prfxor[queries[i][1]];
    }
    return ans;
}

int main(){
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    fast
    vector<int>arr = {1,3,4,8};
    vector<vector<int>>queries(4,vector<int>(2));
    queries[0].push_back(0);
    queries[0].push_back(1);
    queries[1].push_back(1);
    queries[1].push_back(2);
    queries[2].push_back(0);
    queries[2].push_back(3);
    queries[3].push_back(3);
    queries[3].push_back(3);
    xorQueries(arr,queries);
    return 0;
}