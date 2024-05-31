#include <bits/stdc++.h>
using namespace std;

const int N=1e7+10;
vector<int> prime(N,1);
vector<int> v;
void is_prime(){
    prime[0]=prime[1]=0;
    for(long long i=2;i<N;i++){
        if(prime[i]==false) continue;
        v.push_back(i);
        for(int j=i+i;j<N;j+=i) prime[j]=false;
    }
}

int main()
{
    is_prime();
    int q;
    cin>>q;
    while (q--)
    {
        int k;
        cin>>k;
        cout<<v[k-1]<<endl;
        // for(auto i:v) cout<<i<<endl;
    }
    
    return 0;
}