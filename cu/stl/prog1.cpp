#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector<int>arr;
    for(int i=14;i>=0;i--){
        arr.push_back(i);
    }
    for(int i=0;i<15;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}