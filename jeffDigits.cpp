#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    int zero = -1 ;
    int five = -1 ;
    int sum = 0;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
        sum+=a[i];
        if(a[i]==0){
            zero = i;
        }else{
            five = i;
        }
    }
    int numFives = int((sum/5)/9) * 9;
    int numZeroes = n - sum/5;
    if(numZeroes == 0)cout<<-1<<endl;
    else{
        if(numFives == 0 ){
            cout<<0<<endl;
        }
        else{
            while(numFives){
                cout<<5;
                numFives--;
            }
            while(numZeroes){
                cout<<0;
                numZeroes--;
            }
            cout<<endl;
        }  
    }
    return 0;
}