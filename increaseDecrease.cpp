#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n];
    int sum = 0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        sum+=a[i];
    }
    if(abs(sum)%n){
        cout<<n-1<<endl;
    }
    else{
        cout<<n<<endl;
    }
    return 0;
}