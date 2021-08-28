#include<iostream>
#include<cmath>
using namespace std;
#define endl '\n'
#define pi 2*acos(0.0)
int main()
{
    int T; scanf("%d",&T);
    for(int caseno=1; caseno<=T; caseno++){
        double radius; cin>> radius;
        double side = radius+radius;
        double carea = pi*radius*radius;
        double sarea = side*side;
        printf("Case %d: %0.2lf\n",caseno,sarea-carea);
    }
    return 0;
}