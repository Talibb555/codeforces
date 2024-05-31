#include <bits/stdc++.h>
using namespace std;

void f(vector<int> a, int n){
    vector<int > v1;
    if(a.size()==0) return;
    
    for (int i = 0; i < a.size()-1; i++)
    {
        v1.push_back(a[i]+a[i+1]);
    }
    // a.clear();
    // a=v;
    // v.clear();
    f(v1,n-1);
    for(auto i:a) cout<<i<<" ";
    cout<<endl;
}

int main()
{
    vector<int> arr={1,2,3,4,5};
    int n=5;
    vector<int > v;
    f(arr,n);
    return 0;
}