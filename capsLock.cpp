#include<bits/stdc++.h>

using namespace std;

typedef long long ll;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);

int main(){
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    fast
    string word;
    cin>>word;
    bool firstLetter = isupper(word[0])?1:0;
    bool all = true;
    for(ll i=1;i<word.length();i++){
        all &= (isupper(word[i])?1:0);
    }
    if((all & firstLetter) || (all & !firstLetter)){
        for(ll i=0;i<word.length();i++){
            if(isupper(word[i]))word[i] = tolower(word[i]);
            else if(islower(word[i]))word[i] = toupper(word[i]);
        }
    }
    cout<<word<<endl;
    return 0;
}