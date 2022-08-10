#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
     int ls;
    cin>>ls;
    int c;
    for(int i=0;i<n;i++){
        if(arr[i]==ls)
         c=i;
}
cout<<(c+1)<<endl;
 return 0;
}
