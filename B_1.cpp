#include <bits/stdc++.h>
using namespace std;

int fact(int n){
    if(n==0) return 1;
    return n*fact(n-1);
}

int ncr(int n, int r){
    return fact(n)/(fact(r)*fact(n-r));
}

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        // int a[n];
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            // cin>>a[i];
            int a;
            cin>>a;
            v.push_back(a);
        }
        int k=10-n;

        cout<<ncr(k,2)*6<<endl;

    }
    return 0;
}