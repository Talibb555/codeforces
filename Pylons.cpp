#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    int money=a[0];
    int energy=0;
    for(int i=0;i<n-1;i++){
        energy+=a[i]-a[i+1];
        if(energy<0){
            money+=-energy;
            energy=0;
        }
        // else energy+=a[i]-a[i+1];
    }
    cout<<money<<endl;
    return 0;
}