#include <iostream>
using namespace std;

int main()
{
    int choice;
    int a,b;
    cout<<"\tMENU"<<endl;
    cout<<"\t1)ADD"<<endl;
    cout<<"\t2)SUBTRACT"<<endl;
    cout<<"\t3)MULTIPLY"<<endl;
    cout<<"\t4)DIVIDE"<<endl;
    cout<<"\t5)MODULUS"<<endl;
    cout<<"ENTER THE CHOICE :";
    cin>>choice;
    cout<<"ENTER 2 NUMBER :";
    cin>>a>>b;
    switch (choice)
    {
    case 1:
        cout<<(a+b)<<endl;
        break;
    case 2:
        cout<<(a-b)<<endl;
        break;

    case 3:
        cout<<(a*b)<<endl;
        break;
    case 4:
        cout<<(a/b)<<endl;
        break;
    case 5:
        cout<<(a%b)<<endl;
        break;
    
    default:
    cout<<"WRONG CHOICE"<<endl;
        break;
    }

    
    return 0;
}
