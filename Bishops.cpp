#include<iostream>
#include<cmath>
using namespace std;
#define endl "\n"
int main()
{
    ios_base::sync_with_stdio(false);
    int T; cin>> T;
    for(int caseno=1; caseno<=T; caseno++){
        int r1,c1,r2,c2;
        cin>> r1 >> c1 >> r2 >> c2;
        cout<<"Case "<<caseno<<": ";
        int a = abs(c2-c1), b = abs(r2-r1);
        if(a == b) cout<<"1"<<endl;
        else{
            if(a%2==b%2) cout<< "2" << endl;
            else cout<< "impossible" << endl;
        }
    }
    return 0; // this is where file end
}