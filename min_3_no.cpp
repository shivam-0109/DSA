#include <iostream>
#include <math.h>
using namespace std;
int minnumber(int a,int b,int c){
    return std::min(a, std::min(b, c));
}

int main(){
   int a,b,c;
   cin>>a>>b>>c;
   cout<<minnumber(a,b,c);
    return 0;
}
