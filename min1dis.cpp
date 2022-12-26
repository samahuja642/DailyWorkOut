#include <bits/stdc++.h>
#include<stdlib.h>

using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    string str;
        cin>>str;
        vector<int>pos;
	    for(int i=0;i<n;i++){
	        if(str[i]=='1'){
	            pos.push_back(i);
	        }
	    }
        int minDis = INT_MAX;
        for(int i=0;i<pos.size()-1;i++){
            if(((pos[i+1]&1)==1 && (pos[i]&1)==1) || ((pos[i+1]&1)==0 && (pos[i]&1)==0))minDis = min(minDis,2);
            else minDis = min(minDis,1);
        }
        cout<<minDis<<endl;
	}
	return 0;
}
