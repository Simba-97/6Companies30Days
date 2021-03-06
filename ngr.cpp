#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr[] = {1, 3, 0, 0, 1, 2, 4};
    vector<int> v;
    stack<int> s;

    int n = sizeof(arr)/sizeof(arr[0]);

    for(int i = n-1; i >= 0; i--) {
        if(s.size() == 0) {
            v.push_back(-1);
        } else if(s.size() > 0 && s.top() > arr[i]) {
            v.push_back(s.top());
        } else if(s.size() > 0 && s.top() <= arr[i]) {
            while(s.size() > 0 && s.top() <= arr[i]) {
                s.pop();
            }
            if(s.size() == 0) {
                v.push_back(-1);
            } else {
                v.push_back(s.top());
            }
        }
        s.push(arr[i]); 
    }

    reverse(v.begin(), v.end());
    for(auto &a: v){
        cout << a << " ";
    }

    return 0;
}