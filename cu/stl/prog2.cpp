#include<iostream>
#include<deque>

using namespace std;

int main(){
    deque<int>cont;
    cont.push_back(1);
    cont.push_back(2);
    cont.push_back(3);
    cont.push_front(4);
    cont.push_front(5);
    while(!cont.empty()){
        cout<<cont.front()<<" ";
        cont.pop_front();
        if(!cont.empty()){
            cout<<cont.back()<<" ";
            cont.pop_back();
        }
    }
    return 0;
}