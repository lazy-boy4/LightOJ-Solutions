#include<iostream>
using namespace std;
#define endl '\n'

int f(int n)
{
    if(n==0) return 0;
    int a;
    if(n%3==0) a = n/3;
    else a = (n/3)+1;
    return n-a;
}

int main()
{
    ios_base::sync_with_stdio(false);
    int T; cin>> T;
    for(int caseno=1; caseno<=T; caseno++){
        int A, B; cin>> A >> B;
        cout<<"Case "<<caseno<<": "<< f(B)-f(A-1) <<endl;
    }
    return 0;
}