#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a,b;
    cin>>a>>b;
    int awin=0, bwin=0, draw=0;
    for (int i = 1; i <= 6; i++)
    {
        if(abs(a-i)<abs(b-i)) awin++;
        else if(abs(a-i)>abs(b-i)) bwin++;
        else if(abs(a-i)==abs(b-i)) draw++;
    }
    cout<<awin<<" "<<draw<<" "<<bwin<<endl;
    
    return 0;
}