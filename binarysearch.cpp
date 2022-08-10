#include <iostream>
using namespace std;
int binary(int arr[],int n,int key){
    int s=0;
    int e=n;
    while(s<=e){
        int mid=(s+e)/2;
        if(arr[mid]==key){
            return (mid+1);
        }else if(arr[mid]>key){
            e=(mid-1);
        }else{
            s=(mid+1);
        }
    }
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
     int ls;
    cin>>ls;
cout<<binary(arr,n,ls)<<endl;
    return 0;
}
