#include<iostream>
#include<cmath>
using namespace std;
#define endl '\n'
int main()
{
    ios_base::sync_with_stdio(false);
    int T;
    cin>> T;
    for(int caseno=1; caseno<=T; caseno++){
        int m,n;
        cin>> m >> n;
        int ans = m*n;
        ans = (int)ceil(ans/2.0);
        if(m==1) ans = n;
        else if(n==1) ans = m;
        else if(m==2 || n==2){
            int d, temp;
            d = (m*n)/8;
            temp = (m*n)%8;
            ans = (4*d);
            if(temp<=4) ans+=temp;
            else ans += 4;
        }
        cout<<"Case "<<caseno<<": "<<ans<<endl;
    }
    return 0;
}