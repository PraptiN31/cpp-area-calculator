#include<iostream>
using namespace std;
int main(){  
    cout<<"  ***TABLE GENERATOR***  "<<endl<<endl;
    int n,m;
    cout<<"Type the number = "; 
    cin>>n;  
    cout<<"Table till which multiple = "; 
    cin>>m; 

    for (int i=1; i<=m; i++) {
    cout <<n<<" x "<<i<<" = "<<n*i<<endl;
}

}
