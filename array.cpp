#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int maxNo=INT_MIN;
    int minNo=INT_MAX;
    for(int i=0;i<n;i++){
       maxNo=max(maxNo,arr[i]);
       minNo=min(minNo,arr[i]);
        // if (arr[i]>maxNo)
        // {
        //     maxNo=arr[i];
        // }
        // if(arr[i]<minNo){
        //     minNo=arr[i];
        // }
        
    }
    cout<<maxNo<<" "<<minNo<<endl;
    // int n;
    // cin>>n;
    // int array[n];
    // for (int i=0;i<n;i++)
    // {
    //     cin>>array[i];
    // }
    
    // // int array[4]={10,20,30,40};
    // // cout<<array[3]<<endl;
    // for(int i=0;i<n;i++){
    //     cout<<array[i]<<" ";
    // }
    return 0;
}