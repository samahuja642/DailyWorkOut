#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    string s;
	    cin>>s;
        int count = 0,zeroes = 0;
        for(int i=0;i<n;i++){
            if(s[i]=='+'){
                int start = i;
                i++;
                while(i<=n-1 && s[i]=='0'){
                    i++;
                }
                if(s[i]=='-' && ((i-start-1)%2)==1)count++;
                i--;
            }
            else if(s[i]=='-'){
                int start = i;
                i++;
                while(i<=n-1 && s[i]=='0'){
                    i++;
                }
                if(s[i]=='+' && ((i-start-1)%2)==1)count++;
                i--;
            }
            else{
                zeroes++;
            }
        }
        if(count==0 && zeroes==n)cout<<n<<endl;
        else cout<<count<<endl;
	}
	return 0;
}
