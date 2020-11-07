#include <iostream>
using namespace std;

int main(){
    char button;
    cout<<"enter a character: ";
    cin>>button;

    switch (button)
    {
    case 'a':
        cout<<"hello"<<endl;
        break;
    case 'b':
        cout<<"nameste"<<endl;
        break;
    case 'c':
        cout<<"salute"<<endl;
        break;
    case 'd':
        cout<<"hola"<<endl;
        break;
    case 'e':
        cout<<"ciao"<<endl;
        break;
    
    default:
    cout<<"i am still lurning more"<<endl;
        break;
    }


     return 0;   

}