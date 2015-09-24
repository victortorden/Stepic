#include <iostream>
using namespace std;

int main()
{
    int a[10];
    int b[10];
    int sum, T;
    cin>>T;
    
    for (int i=0; i<T; i++){
        cin>>a[i]>>b[i];} 
    for (int i=0; i<T; i++){
        cout<<(a[i]+b[i])<<endl;
    }
    return 0;
    
    // put your code here
}