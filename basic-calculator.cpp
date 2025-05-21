#include<iostream>
using namespace std;
int main(){
    cout<<"****CALCULATOR****"<<endl<<endl;
    float a,b;
    char op;  
    cout<<"Type here: "; 
    cin>>a;
    cin>>op;
    cin>>b; 

    switch (op){     
    case '+':  
       cout<<a+b; 
       break;
 
    case '-':
       cout<<a-b;
       break; 

    case '*': 
       cout<<a*b;
       break;

    case '/':
       cout<<a/b;
       break; 

    default: 
       cout<<"Invalid";

    }
}
