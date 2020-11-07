#include<iostream>
using namespace std;

int long fact(int long n){
    int long factorial=1;
    for(int long i=2;i<=n;i++){
        factorial*=i;
    }
    return factorial;
}

int main() {
    int long n;
    cin>>n;
    int ans=fact(n);
    cout<<ans<<endl;
    return 0;
}