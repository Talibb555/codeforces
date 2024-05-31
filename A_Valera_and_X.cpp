#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    char a[n][n];
    bool ok=false;
    char c,d;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin>>a[i][j];
            if(i==0 && j==0) c=a[i][j];
            if(a[i][j]!=c) d=a[i][j];
        }
        
    }
    
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if(i==j || j==n-1-i){
                if(a[i][j]!=c){
                    cout<<"NO";
                    return 0;
                }
            } 
            else{
                if(a[i][j]!=d){
                    cout<<"NO";
                    return 0;
                }
            }
        }
    }
    cout<<"YES"<<endl;
    
    
    return 0;
}