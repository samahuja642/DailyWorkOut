#include<bits/stdc++.h>

using namespace std;

int main(){
    string s[4];
    for(int i=0;i<4;i++){
        cin>>s[i];
    }
    bool ans = 0;
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            // upper left 
            if(i>0 && j>0){
                int count = 1;
                if(s[i][j]==s[i-1][j])count++;
                if(s[i][j]==s[i][j-1])count++;
                if(s[i][j]==s[i-1][j-1])count++;
                if(count==3)ans=true;
            }
            // upper right
            if(i>0 && j<3){
                int count = 1;
                if(s[i][j]==s[i-1][j])count++;
                if(s[i][j]==s[i][j+1])count++;
                if(s[i][j]==s[i-1][j+1])count++;
                if(count==3)ans=true;
            }
            // lower left 
            if(i<3 && j>0){
                int count = 1;
                if(s[i][j]==s[i+1][j])count++;
                if(s[i][j]==s[i][j-1])count++;
                if(s[i][j]==s[i+1][j-1])count++;
                if(count==3)ans=true;
            }
            // lower right
            if(i<3 && j<3){
                int count = 1;
                if(s[i][j]==s[i+1][j])count++;
                if(s[i][j]==s[i][j+1])count++;
                if(s[i][j]==s[i+1][j+1])count++;
                if(count>=3)ans=true;
            }
            if(ans==true){
                break;
            }
        }
    }
    if(ans==true){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
    return 0;
}