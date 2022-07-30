#include <iostream>
using namespace std;
int main(){
    char a;
    cin>>a;
    if(a>='A'&& a<='Z'){
        cout<<"Upper case"<<endl;
    }else if(a>='a'&& a<='z'){
        cout<<"lower  case"<<endl;
    }else if(a>='0' && a<='9'){
        cout<<"number  case"<<endl;
    }else {
        cout<<"error"<<endl;
    }
    return 0;
}
