#include<iostream>
using namespace std;
int main(){ 
    int x,y; 
    cout<<"Enter x coordinate = ";
    cin>>x;
    cout<<"Enter y coordinate = "; 
    cin>>y; 

    if (x==0) { 
        if (y==0) { cout<< "Point lies in the origin"; } 
        else { cout<<"Point lies in the y-axis"; }
    }   

    else if (x>0) { 
        if (y==0) {cout<< "Point lies in the x-axis";} 
        else if (y>0) {cout<<"Point lies in the 1st quadrant";} 
        else {cout<<"Point lies in the 4th quadrant"; }  
        
    }   

    else {
      if (y==0) { cout<<"Point lies in the x-axis"; } 
      else if (y>0) {cout<<"Point lies in the 2nd quadrant";}
      else { cout<<"Point lies in the 3rd quadrant"; } 
    }

}
