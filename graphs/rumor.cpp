#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

vector<ll>graph[100001];
vector<bool>visited(100001);
vector<ll>c(100001);

void addEdge(ll x,ll y){
    graph[x].push_back(y);
    graph[y].push_back(x);
}

ll dfs(ll vertex){
    ll minCost = c[vertex];
    for(auto child:graph[vertex]){
        visited[vertex] = true;
        if(!visited[child]){
            minCost = min(minCost,dfs(child));
        }
    }
    return minCost;
}

int main(){
    ll n,m;
    cin>>n>>m;
    for(ll i=1;i<=n;i++){
        cin>>c[i];
    }
    ll x,y;
    for(ll i=0;i<m;i++){
        cin>>x>>y;
        addEdge(x,y);
    }
    ll ans = 0;
    for(ll i=1;i<=n;i++){
        if(!visited[i])ans+=dfs(i);
    }
    cout<<ans<<endl;
    return 0;
}