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
#define x first
#define y second
#define all(v) v.begin(),v.end()
#define mom(ara) memset(ara,0,sizeof(ara));
#define m1m(ara) memset(ara,-1,sizeof(ara));
#define endl "\n"
#define eps 1.19209e-07
int main()
{
    ios_base::sync_with_stdio(false);
    int T; cin>> T;
    for(int caseno=1; caseno<=T; caseno++){
        pii lf, ur;
        cin>> lf.x >> lf.y >> ur.x >> ur.y;
        int M; cin>> M;
        pii cows[M];
        for(int i=0; i<M; i++) cin>> cows[i].x >> cows[i].y;
        cout<< "Case "<<caseno<<":"<<endl;
        for(int i=0; i<M; i++){
            string s;
            if((cows[i].x>lf.x && cows[i].x<ur.x)&&(cows[i].y>lf.y && cows[i].y<ur.y)) s = "Yes";
            else s = "No";
            cout<< s  << endl;
        }
    }
    return 0;
}