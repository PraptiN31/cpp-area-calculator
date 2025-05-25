#include<iostream>
using namespace std;
int main(){  
    int a;
    cout<<"Enter number: "; 
    cin>>a; 

    bool isPrime = true;

    for (int i=2; i<=a/2; i++) {
    
    if (a%i==0) { 
        isPrime = false; 
    break;
    }  
}

    if (a==1) {  
        cout<<"Neither prime nor composite";
    } 
    else if (isPrime) { 
        cout<<"Number is prime";
    } 
    else { 
        cout<<"Number is composite";
    }

}
