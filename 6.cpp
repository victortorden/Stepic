#include <iostream>
#include <math.h>


using namespace std;

int main()
{
    double a, b, c;
    double D,x1,x2,x;
    if (a=0) return 1;
    
    cin>>a>>b>>c;
    
    D=pow(b,2)-4*a*c;
    
    if (D==0) {
        x=-(b/(2*a));
        cout<<x<<" "<<x<<endl;}
    if (D>0) {
        x1=(-b+(sqrt(D)))/(2*a);
        x2=(-b-(sqrt(D)))/(2*a);
        cout<<x1<<" "<<x2<<endl;}
    if (D<0) {cout<<"No real roots";}

    return 0;
}