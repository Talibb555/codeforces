#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int j=1, k=2;
    if(n&1){
        cout<<-1;
        return 0;
    }
    for (int i = 0; i < n; i++)
    {
        if(1&i){
            cout<<j<<" ";
            j+=2;
        }
        else
        {
            cout<<k<<" ";
            k+=2;
        }
        
    }
    
}