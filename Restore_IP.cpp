#include <bits/stdc++.h>
using namespace std;
vector<string> v;
bool isvalid(string s){
    if(s.size()>3||s.size()==0) return false;
    if(s.size()>1 && s[0]=='0') return false;
    if(s.size()>0 && stoi(s)>255) return false;
    return true;
}
void f(string s, int ind, int dot, string d)
{
        if (dot == 3)
        {
            // cout << d << endl;
            if(isvalid(s.substr(ind)))v.push_back(d+s.substr(ind));
            return;
        }
        // cout<<dot<<endl;
        
    for (int i = ind; i < s.length(); i++)
    {
        if(isvalid(s.substr(ind,i-ind+1))){
        d.push_back(s[i]);
        d.push_back('.');
        f(s,i+1,dot+1,d);
        d.pop_back();
        }
    }
}

int main()
{
    string s = "25525511135";
    string d="";
    f(s, 0, 0, d);
    // for (int i = 0; i < v.size(); i++)
    // {
    //     string t;
    //     int ct=0;
    //     for (int j = 0; j < v[i].size(); j++)
    //     {

    //         if (v[i][j] != '.' && j!=s.size()+2)
    //         {
    //             // t.push_back(v[i][j]);
    //             ct++;
    //         }
    //         else
    //         {
    //             // cout<<t<<endl;
    //             // if (t.length() > 3)
    //             // {
    //             //     v.erase(v.begin() + i);
    //             //     break;
    //             // }
    //             // else t.clear();
    //             if(ct>3) {
    //                 v[i]="aaaa";
    //             v.erase(v.begin() + i);
    //                 break;
    //             }
    //             else{
    //                 ct=0;
    //             }
    //         }
    //     }
    //     // cout<<endl;
    // }
    // for (int i = 0; i < v.size(); i++)
    // {
    //     int ct=0;
    //     string t;
    //     for (int j = 0; j < v[i].size(); j++)
    //     {
    //         if(v[i][j]=='.' || j==v[i].size()-1){
    //             if(stoi(t)>255){
    //                 // v[i]="aaa";
    //                 // v[i].erase(v[i].begin()+j);
    //                 v[i].erase();
    //                 break;
    //             }
    //             // ct=0;
    //             t.clear();
    //         }
    //         else t.push_back(v[i][j]);
    //     }
    // }
    
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << endl;
    }

    return 0;
}