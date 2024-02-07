#include <iostream>
using namespace std;
int main(){
    int a, b;
    cout<<"Enter a : ";
    cin>>a;
    
    cout <<"Enter b : ";
    cin>>b;


    char op;
    cout<<"Enter Operator : ";
    cin>>op;

    switch (op){
        case '+': cout<<a<<"+"<<b<<" = "<<(a+b)<<endl;
        break;

        case '-': cout<<a<<"-"<<b<<" = "<<(a-b)<<endl;
        break;

        case '*':cout<<a<<"*"<<b<<" =" <<(a*b)<<endl;
        break;

        case '/':cout<<a<<"/"<<b<<" = "<<(a/b)<<endl;
        break;
  
        case '%':cout<<a<<"%"<<b<<" = "<<( a % b )<<endl;
        break;

        default : cout<<"Enter a valid Operator!!"<<endl;

    }
}