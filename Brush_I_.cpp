#include<iostream>
using namespace std;
#define endl '\n'
int main()
{
    ios_base::sync_with_stdio(false);
    int T; cin>> T;
    for(int caseno=1; caseno<=T; caseno++){
        int n; cin>> n;
        int dust[n],sum=0;
        for(int i=0;i<n;i++) cin>> dust[i];
        for(int i=0; i<n; i++){
            if(dust[i]<0) sum+=0;
            else sum+=dust[i];
        }
        cout<<"Case "<<caseno<<": "<<sum<<endl;
    }
    return 0;
}