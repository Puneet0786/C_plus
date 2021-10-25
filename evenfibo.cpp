#include<iostream>
using namespace std;
int main(){
    int x;//x is the variable
    cin>>x;
    int zero_even_fibonacci=0;
    int first_even_fibonacci=2;
    cout<<zero_even_fibonacci<<" "<<first_even_fibonacci<<" ";
    int a=0;
    int b=2;
    int c=2;
    while (c<=x)
    {   
        c=4*b+a;
        a=b;
        b=c;
        if (c>x)
        {
            break;
        }
        cout<<c<<" ";
        
    }
    

    return 0;
}