#include <bits/stdc++.h>
using namespace std;

// void f(vector<string> &words, vector<int> &score, int hsh[], int ind, vector<string> bag)
// {
//     if(ind==words.size()){
//         for(auto i:bag) cout<<i<<" ";
//         cout<<endl;
//         return;
//     }
//     for (int i = ind; i < words.size(); i++)
//     {
//         int flag = 0;
//         for (int j = 0; j < words[i].size(); j++)
//         {
//             // cout<<words[i][j]<<" ";
//             if (hsh[words[i][j] - 'a'] > 0)
//                 hsh[words[i][j] - 'a']--;
//             else
//             {
//                 flag = 1;
//                 break;
//             }
//         }
//         if (flag==0)
//         {
//             bag.push_back(words[i]);
//             f(words,score,hsh,i+1,bag);
//             bag.pop_back();
//         }
//     }
// }
int mx=INT_MIN;
// vector<string> ans;
bool check(vector<string> &bag, vector<int> &score, vector<int> hsh){
    int sum=0;
    for (int i = 0; i < bag.size(); i++)
    {
        for (int j = 0; j < bag[i].size(); j++)
        {
            sum+=score[bag[i][j]-'a'];
            if (hsh[bag[i][j] - 'a'] > 0)
                hsh[bag[i][j] - 'a']--;
            else return false;
        }
    }
    // cout<<sum<<endl;
    if(mx<sum){
        mx=sum;
        // ans=bag;
    }
    return true;
}

void f1(vector<string> &words,vector<string> bag,int ind, vector<int> &score, vector<int> hsh){
    if(ind==words.size()){
        if(check(bag,score,hsh)) 
            // for(auto i:bag) cout<<i<<" ";
        cout<<endl;
        return;
    }
    // for (int i = ind; i < words.size(); i++)
    // {
    //     bag.push_back(words[i]);
    //     f1(words,bag,i+1,score,hsh);
    //     bag.pop_back();
    //     f1(words,bag,ind+1,score,hsh);
    // }
    bag.push_back(words[ind]);
    f1(words,bag,ind+1,score,hsh);
    bag.pop_back();
    f1(words,bag,ind+1,score,hsh);
    
}

int main()
{
    // vector<char> letters = {'a', 'a', 'c', 'd', 'd', 'd', 'g', 'o', 'o'};
    vector<char> letters = {'z', 'a', 'b', 'c', 'x', 'x', 'x'};
    vector<int> hsh(26,0);
    for (int i = 0; i < letters.size(); i++)
    {
        hsh[letters[i] - 'a']++;
    }
    // for (int i = 0; i < 26; i++)
    // {
    //     cout<<hsh[i]<<" ";
    // }
    
    // vector<int> score = {1, 0, 9, 5, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    vector<int> score = {4,4,4,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,5,0,10};
    // vector<string> words = {"dog", "cat", "dad", "good"};
    vector<string> words = {"xxxz","ax","bx","cx"};
    vector<string> bag;
    // f(words,score,hsh,0,bag);
    f1(words,bag,0,score,hsh);
    // for(auto i:ans) cout<<i<<" ";
    cout<<mx<<endl;

    return 0;
}