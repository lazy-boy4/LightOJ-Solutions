#include<iostream>
#include<algorithm>
using namespace std;
#define endl '\n'

bool toBinary(int n)
{
    int count=0;
    while(n!=0){
        if(n%2) count++;
        n /= 2;
    }
    if(count%2) return false;
    else return true;
}

int main()
{
    ios_base::sync_with_stdio(false);
    int T; cin>> T;
    for(int caseno=1; caseno<=T; caseno++){
        int n; cin>> n;
        string p;
        if(toBinary(n)) p = "even";
        else p = "odd";
        cout<<"Case "<<caseno<<": "<<p << endl;
    }
    return 0;
}