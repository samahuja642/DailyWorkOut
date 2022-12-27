#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

/*
Disjoint Set Union 
It is also known as Union Find DS.
It can perform 2 operations.
1. Union - adding new edge to the set.
2. Find - checking to which set it belongs.
It do relabling of the smaller set to reduce the complexity.
Union - O(nlogn)
Find  - O(1)
*/

vector<ll>graph[150005];
vector<ll>labels(150005);// to which component a node ends up in
vector<ll>nedges(150005);// edges in component
vector<ll>compSize(150005);// size of corresponding component

void relabel(ll u,ll cv){
    if(labels[u]==cv)return;
    labels[u] = cv;
    for(auto child:graph[u]){
        relabel(child,cv);
    }
}

void merge(ll u,ll v){
    ll cu = labels[u],cv = labels[v];
    graph[u].push_back(v);
    graph[v].push_back(u);
    nedges[cv]++;// adding edge
    if(cu==cv)return;
    //relabling 
    if(compSize[cu] > compSize[cv]){
        swap(u,v);
        swap(cu,cv);
    }
    //assuming u is always smaller
    relabel(u,cv);
    // updating parameters after relabling
    nedges[cv]+=nedges[cu];
    compSize[cv] += compSize[cu];
}

int main(){
    ll n,m;
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        compSize[i] = 1;
        labels[i] = i;
    }
    ll a,b;
    for(ll i=0;i<m;i++){
        cin>>a>>b;
        merge(a,b);
    }
    bool possible = 1;
    for(int i=1;i<=n;i++){
        if(nedges[labels[i]] != (compSize[labels[i]]*(compSize[labels[i]]-1))/2)possible = 0;
    }
    cout<<(possible==0?"NO":"YES")<<endl;
    return 0;
}