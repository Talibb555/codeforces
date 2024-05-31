#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n];
    int chest=0, biceps=0, back=0;
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
        if(i%3==0) chest+=a[i];
        if(i%3==1) biceps+=a[i];
        if(i%3==2) back+=a[i];
    }
    if(chest>biceps && chest>back) cout<<"chest"<<endl;
    else if(biceps>chest && biceps>back) cout<<"biceps"<<endl;
    else cout<<"back"<<endl;
    
    return 0;
}