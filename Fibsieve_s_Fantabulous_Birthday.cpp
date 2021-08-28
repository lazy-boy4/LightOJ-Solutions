#include<bits/stdc++.h>
using namespace std;
typedef pair<int,int > pii;
typedef long long int lld;
#define pi acos(-1)
#define fr(i,m,n) for(i=m;i<n;i++)
#define fu(i,m,n) for(i=m;i>=n;i--)
#define vec vector<int>
#define pb push_back()
#define pp pop_back()
#define ft first
#define sd second
#define all(v) v.begin(),v.end()
#define mom(ara) memset(ara,0,sizeof(ara));
#define m1m(ara) memset(ara,-1,sizeof(ara));
#define endl "\n"
#define eps 1.19209e-07
int main()
{
    ios_base::sync_with_stdio(false);
    int T;
    cin>> T;
    for(int caseno=1; caseno<=T; caseno++){
        size_t s, root, lak, temp;
        int row, col;
        cin>> s;
        root = (size_t)ceil(sqrt(s*1.0));
        lak = (root*root)-s;
        if(lak<root){
            row = root;
            col = lak+1;
        }
        else{
            col = root;
            row = s -(root-1)*(root-1);
        }
        if(root&1) swap(row,col);
        cout<<"Case "<<caseno<<": "<< row <<" "<< col << endl;
    }
    return 0;
}