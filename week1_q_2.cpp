#include <iostream>
using namespace std;

int main(){
    for(int i=1000;i<2001;i++){
        if(i%8==0 && i%5==0)
        cout<<i<<endl;
    }
    
    return 0;
}
