#include<iostream>
using namespace std;
int main (){  
  cout<<"Aim: To calculate Simple Interest"<<endl;
  float P,R,T,SI;
  cout<<"Enter the Principal Amount: ";
  cin>>P;
  cout<<"Enter the Rate of Interest: ";
  cin>>R;
  cout<<"Enter the Time Period: ";
  cin>>T; 
  SI=(P*R*T)/100;
  cout<<"Simple Interest is: "<<SI<<endl<<endl; 
  cout<<"Now pay up!💵"<<endl; 
  return 0;
}
