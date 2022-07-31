#include <iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        if(a==b){
            cout<<"ANY"<<endl;
        }else if(a>b){
            cout<<"SECOND"<<endl;
        }else if(a<b){
            cout<<"FIRST"<<endl;
        }else{
            cout<<"SOMETHING WENT WRONG"<<endl;
        }
    }
    return 0;
}
