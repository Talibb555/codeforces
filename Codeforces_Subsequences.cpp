#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    cin>>n;
    vector<long long> v(10,1);
    long long i=0;
    long long k=1;
    while (k<n)
    {
        long long x=v[i%10];
        k=k/x;
        v[i%10]++;
        k=k*v[i%10];
        i++;
    }

    string s="codeforces";
    for(int i=0;i<10;i++){
        for(int j=0;j<v[i];j++){
            cout<<s[i];
        }
    }
     
    return 0;
}