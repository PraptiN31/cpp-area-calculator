#include<iostream>
#include<cmath>
using namespace std;
int fact(int x){
    int f=1;
    for (int i=1; i<=x; i++){ 
        f*=i;
    } 
    return f;
}
    int main(){ 
    cout<<"***Permutation and Combination Calculator***"<<endl<<endl;
    cout<<"1. Permutation"<<endl<<"2. Combination"<<endl<<endl;

    int a,n,r;
    cout<<"Enter function (1 or 2): ";
    cin>>a;   
    cout<<"Enter n: ";
    cin>>n; 
    cout<<"Enter r: ";
    cin>>r; 
    cout<<endl; 

    if ((a!=1 and a!=2) || n==r || n<0 || r<0 || r>n) {
        cout<<"!!INVALID INPUT!!"<<endl;
        cout<<"1. Please check if you have chosen the correct function"<<endl;
        cout<<"2. BOTH n and r must be positive integers"<<endl;
        cout<<"3. n must be greater than r"<<endl; 

        return 0;

    }

    int factn= fact(n);
    int factr= fact(r);
    int factnr= fact(n-r);

    if (a==1){   
        cout<<"Result (Permutation): "<<factn/factnr;
    } 

    else if (a==2) { 
        cout<<"Result (Combination): "<<factn/(factr*factnr);
    } 
}
