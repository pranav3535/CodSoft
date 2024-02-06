#include <iostream>
#include <math.h>
using namespace std;
int main(){
    float n1, n2 ;

    cout<<"Enter Num 1 : ";
    cout<<endl;
    cin>>n1;

    cout<<"Enter Num 2 : ";
    cout<<endl;
    cin>>n2;

    char op;
    cout<<"Enter the Operator(+,-,*,/) :  ";
    cout<<endl;
    cin>>op;

    if(op == '+'){
        cout<<n1<<"+"<<n2<<" = "<<n1+n2;
    }
    else if(op == '-'){
        cout<<n1<<"-"<<n2<<" = "<<n1-n2;
    }
    else if(op == '*'){
        cout<<n1<<"*"<<n2<<" = "<<n1*n2;
    }
    else if(op == '/'){
        cout<<n1<<"/"<<n2<<" = "<<n1/n2;
    }
    else{
        cout<<"Enter among operators mentioned!!!";
    
    }
    return 0;
  
}
