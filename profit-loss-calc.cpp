#include<iostream>
using namespace std;
int main(){ 

  float cp,sp;
  cout<<"Enter Cost price: "; 
  cin>>cp;
  cout<<"Enter Selling price: ";
  cin>>sp;  

  if (cp>sp)
  cout<<"You've suffered a loss"<<endl<<"your loss is "<<cp-sp; 

  if (sp>cp)
  cout<<"You've made a profit"<<endl<<"your profit is "<<sp-cp; 

  if (sp==cp) 
  cout<<"Neither loss nor gain"<<endl; 
  return 0;

}
