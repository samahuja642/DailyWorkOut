#include<iostream>
#include<stack>

using namespace std;

int main(){
    stack<char>rev;
    string str = "Ankit Rao";
    for(int i=0;i<str.length();i++){
        rev.push(str[i]);
    }
    while(!rev.empty()){
        cout<<rev.top()<<endl;
        rev.pop();
    }
    return 0;
}