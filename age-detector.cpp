#include<iostream>
using namespace std;

int main () {  
  int a;
  cout << "Enter your age: ";
  cin >> a;

  if (a < 10) {
    cout << "You're a baby, what are you doing here? 🍼" << endl;
  }
  else if (a < 19) {
    cout << "You're a teenager, enjoy while it lasts! 😎" << endl;
  }
  else if (a < 30) {
    cout << "You're a young adult, work hard! 💪" << endl;
  }
  else if (a < 100) {
    cout << "You're old now. Take care :) 🧓" << endl;
  }
  else {
    cout << "Are you even human?? 😳" << endl;
  }

  return 0;
}
