#include <bits/stdc++.h>
using namespace std;

bool taxi(int n, int a[])
{
    for (int i = 0; i < n - 1; i++)
    {
        if (a[i] == a[i + 1]) continue;
        else return false;
    }
    return true;
}
bool pizza(int n, int a[])
{
    for (int i = 1; i < n; i++)
    {
        if (a[i] < a[i - 1]) continue;
        else return false;
    }
    return true;
}

int main()
{
    int n;
    cin >> n;
    int z=1;
    vector<pair<int,pair<string,int>>> taxis;
    vector<pair<int,pair<string,int>>> pizzas;
    vector<pair<int,pair<string,int>>> girls;
    while (n--)
    {
        int j = 0, k = 0, l = 0;
        int x; cin >> x;
        string s; cin >> s;
        for (int i = 0; i < x; i++)
        {
            int t=0;
            string g;
            cin >> g;
            int a[6];
            for (int j = 0; j < g.length(); j++)
            {
                if(g[j]!='-'){
                    a[t]=g[j]-'0';
                    t++;
                }
            }
            if (taxi(6, a)) j++;
            else if (pizza(6, a)) k++;
            else l++;
        }
        taxis.push_back({ j,{s,z}});
        pizzas.push_back({ k,{s,z}});
        girls.push_back({ l,{s,z}});
        z++;
    }
    sort(taxis.begin(),taxis.end());
    sort(pizzas.begin(),pizzas.end());
    sort(girls.begin(),girls.end());
    vector<pair<int,string>> taxis_no, pizzas_no, girls_no;
    taxis_no.push_back({taxis[taxis.size()-1].second.second,taxis[taxis.size()-1].second.first});
    pizzas_no.push_back({pizzas[pizzas.size()-1].second.second,pizzas[pizzas.size()-1].second.first});
    girls_no.push_back({girls[girls.size()-1].second.second,girls[girls.size()-1].second.first});
    for (int i = taxis.size()-1; i >0 ; i--)
    {
        // cout << taxis[i].first << " " << taxis[i].second.first << " " << taxis[i].second.second<< endl;
        if(taxis[i].first==taxis[i-1].first) taxis_no.push_back({taxis[i-1].second.second,taxis[i-1].second.first});
        else break;
    }
    // cout<<endl;
    for (int i = pizzas.size()-1; i >0 ; i--)
    {
        // cout << pizzas[i].first << " " << pizzas[i].second.first << " " << pizzas[i].second.second << endl;
        if(pizzas[i].first==pizzas[i-1].first) pizzas_no.push_back({pizzas[i-1].second.second,pizzas[i-1].second.first});
        else break;
    }
    // cout<<endl;
    for (int i = girls.size()-1; i >0 ; i--)
    {
        // cout << girls[i].first << " " << girls[i].second.first << " " << girls[i].second.second <<endl;
        if(girls[i].first==girls[i-1].first) girls_no.push_back({girls[i-1].second.second,girls[i-1].second.first});
        else break;
    }
    sort(taxis_no.begin(),taxis_no.end());
    sort(pizzas_no.begin(),pizzas_no.end());
    sort(girls_no.begin(),girls_no.end());
    cout<<"If you want to call a taxi, you should call: ";
    for (int i = 0; i < taxis_no.size(); i++)
    {
        cout<<taxis_no[i].second;
        if(i==taxis_no.size()-1)cout<<".";
        else cout<<", ";
    }
    cout<<endl;
    cout<<"If you want to order a pizza, you should call: ";
    for (int i = 0; i < pizzas_no.size(); i++)
    {
        cout<<pizzas_no[i].second;
        if(i==pizzas_no.size()-1)cout<<".";
        else cout<<", ";
    }
    cout<<endl;
    cout<<"If you want to go to a cafe with a wonderful girl, you should call: ";
    for (int i = 0; i < girls_no.size(); i++)
    {
        cout<<girls_no[i].second;
        if(i==girls_no.size()-1)cout<<".";
        else cout<<", ";
    }
    

    return 0;
}