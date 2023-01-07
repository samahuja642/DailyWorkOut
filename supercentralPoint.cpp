#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    vector<pair<int,int>>points(n);
    for(int i=0;i<n;i++){
        cin>>points[i].first;
        cin>>points[i].second;
    }
    int count = 0;
    for(int i=0;i<n;i++){
        bool left = 0,right = 0,upper = 0,lower = 0;
        for(int j=0;j<n;j++){
            if(points[i].first==points[j].first){
                if(points[i].second<points[j].second){
                    upper = 1;
                }
                else if(points[i].second>points[j].second){
                    lower = 1;
                }
            }
            else if(points[i].second==points[j].second){
                if(points[i].first<points[j].first){
                    right = 1;
                }
                else if(points[i].first>points[j].first){
                    left = 1;
                }
            }
        }
        if(upper&&lower&&left&&right)count++;
    }
    cout<<count<<endl;
    return 0;
}