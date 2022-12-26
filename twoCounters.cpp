#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        int time[m],events[m];
        for(int i=0;i<m;i++){
            cin>>time[i];
        }
        for(int i=0;i<m;i++){
            cin>>events[i];
        }
        int currEvent = 0;
        int score = 0,a=0,b=0;
        for(int i=0;i<n;i++){
            if(currEvent<m && events[currEvent]==1){
                a++;
            }
            else{
                b++;
            }
            if(i+1==time[currEvent]){
                if(events[currEvent]==1){
                    if(a>b)score++;
                    else{
                        a = 0;
                        b = 0;
                    }
                }
                else{
                    if(b>a)score++;
                    else{
                        a=0;
                        b=0;
                    }
                }
                currEvent++;
            }
            // cout<<"a b Score : " <<a<<" "<<b<<" "<<score<<endl;
        }
        cout<<score<<endl;
    }
    return 0;
}