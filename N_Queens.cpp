#include <bits/stdc++.h>
using namespace std;

bool issafe(vector<string> &board, int col,int row, int n){
    int duprow=row;
    int dupcol=col;
    while (row>=0 && col>=0)
    {
        if(board[row][col]=='Q') return false;
        col--;row--;
    }
    row=duprow;
    col=dupcol;
    while (col>=0)
    {
        if(board[row][col]=='Q') return false;
        col--;
    }
    row=duprow;
    col=dupcol;
    while (row<n && col>=0)
    {
        if(board[row][col]=='Q') return false;
        col--;row++;
    }
    return true;
}

void f(vector<string> &board, int col, int n){
    if(col==n){
        for (int i = 0; i < n; i++)
        {
            cout<<board[i]<<endl;
        }
        cout<<endl;
        return;
    }
    for (int row = 0; row < n; row++)
    {
        if(issafe(board,col,row,n)){
            board[row][col]='Q';
            f(board,col+1,n);
            board[row][col]='.';
        }
    }
}

int main()
{
    vector<string> baord;
    int n=5;
    string s(n,'.');
    for (int i = 0; i < n; i++)
    {
        baord.push_back(s);
    }
    f(baord,0,n);
    return 0;
}