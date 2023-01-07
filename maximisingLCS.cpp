#include<bits/stdc++.h>

using namespace std;

int LCS(string str,string rev_str){
    
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string str; 
        cin>>str;
        string rev_str = "";
        for(int i=n-1;i>=0;i--){
            rev_str.push_back(str[i]);
        }
        cout<<LCS(str,rev_str)/2<<endl;
    }
    return 0;
}