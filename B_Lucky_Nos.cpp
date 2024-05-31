#include <bits/stdc++.h>
using namespace std;

// bool lucky(int n){
//     int four=0;
//     int seven=0;
//     while (n>0)
//     {
//         int x=n%10;
//         n/=10;
//         if(x==4) four++;
//         else if(x==7) seven++;
//         else return false;
//     }
//     return four==seven;
// }

int main()
{
    string n;
    cin >> n;
    // for (int i = n;; i++)
    // {
    //     if(lucky(i))
    //     {
    //         cout<<i;
    //         break;
    //     }
    // }
    int length=-1;
    if (n.length() % 2 != 0)
    {
        length = n.length() + 1;
    }
    else
    {
        length = n.length();
    }
    string s = "";
    for (int i = 0; i < length / 2; i++)
    {
        s += '7';
    }
    for (int i = 0; i < length / 2; i++)
    {
        s += '4';
    }
    // cout<<s;
    if (n > s && n.length()>=s.length())
    {
        s.clear();
        s = "";
        length += 2;
        for (int i = 0; i < length / 2; i++)
        {
            s += '7';
        }
        for (int i = 0; i < length / 2; i++)
        {
            s += '4';
        }
    }
    reverse(s.begin(),s.end());
    do
    {
        if(s>=n||s.length()>n.length()){
            cout<<s<<endl;
            return 0;
        }
    } while (next_permutation(s.begin(), s.end()));

    return 0;
}