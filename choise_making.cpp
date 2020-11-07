#include<iostream>
using namespace std;

int main() {
    #ifndef ONLINE_JUDGE // not part of code , used to beautify input and output
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif

    int savings;
    cin>>savings;

    if(savings>5000){
        // cout<<"neha\n";
        if(savings>10000)
        {
            cout<<"roadtrip with neha\n";

        } else
        {
            cout<<"shopping with neha\n";
        }
        
    } else if(savings>2000){
        cout<<"rashmi\n";

    } else
    {
        cout<<"friends\n";
    }
    
    return 0;
}