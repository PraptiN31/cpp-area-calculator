#include<iostream>
using namespace std;
int main(){ 
    int x,y; 
    cout<<"Enter x coordinate = ";
    cin>>x;
    cout<<"Enter y coordinate = "; 
    cin>>y; 

    if (x>=0) { 
        if (y>0) { cout<<"Point lies in 1st quadrant"; } 
        if (y<0) {cout<<"Point lies in 4th quadrant"; } 
        if (x==0 and y==0) { cout<<"Point lies in the origin"; }
    }  

    else {
      if (y>0) { cout<<"Point lies in 2nd quadrant"; } 
      else { cout<<"Point lies in 3rd quadrant"; } 
    }

}
