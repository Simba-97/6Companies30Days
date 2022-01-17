//deleting middle element of stack using recursion
#include <bits/stdc++.h>
using namespace std;

void solve(stack<int> &s, int k){
    if(k == 1){
        s.pop();
        return;
    }
    int temp = s.top();
    s.pop();
    solve(s, k-1);
    s.push(temp);
    return;
}

stack<int> deleteMiddle(stack<int> &s, int size){
    if(s.size() == 0) return s;
    int k = (s.size()/2) + 1;
    solve(s, k);
    return s;
}

int main(){
    stack<int> s;
    s.push(5);
    s.push(10);
    s.push(6);
    s.push(0);
    s.push(9);
    s.push(2);
    s.push(3);
    s.push(1);
    s.push(7);

    deleteMiddle(s, s.size());
    while(!s.empty()){
        cout << " " << s.top();
        s.pop();
    }
    return 0;
}