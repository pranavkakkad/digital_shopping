#include <bits/stdc++.h>
#include "Account.cpp"
#include "Payment.cpp"
// #include <cstring>
// #include "Order.cpp"
// #include "Shopping_cart.cpp"
// #include "Person.cpp"
using namespace std;

int main()
{
  Account A1[10];
  Person per[10];
  string s, p;
  int cnt = 0, ch;
  // char s[10] = {0};
  cout << "1. Sign up\t 2. Sign in\n";
  cin >> ch;
  switch (ch)
  {
  case 1:
    cout << "Create an account\n";
    cout << "Please enter signup credentials\n";
    cout << "Enter first Name:\n";
    per[cnt].setFirstName();
    cout << "Enter last Name:\n";
    per[cnt].setLastName();
    cout << "Enter email address\n";
    per[cnt].setEmail();
    cout << "Enter Password\n";
    per[cnt].setPass();
    // A1[cnt].createAc(per[cnt].getEmail(), per[cnt].getPass());
    cnt++;
    cout << "\tAccount Created Successfully\t";
    break;
  case 2:
    cout << "Enter login credentials\n";
    cout << "Enter email address\n";
    cin >> s;

    int i = 0;
    //cout <<endl<<"test"<<endl<< typeid(A1[0].verifyEmail().c_str()).name() << endl;
    //printf("%d",);

    for (i = 0; i < cnt; i++)
    {

      if (strcmp(s.c_str(), A1[0].verifyEmail().c_str()) == 0)
      {
        cout << " enter password:" << endl;
        cin >> p;
        if (strcmp(p.c_str(), A1[i].verifyPass().c_str()) == 0)
        {
          cout << "Welcome " << per[i].getFirstName();
        }
      }
      else
      {
        cout << "sorry invalid email!\n";
      }
    }
    break;
  }
  // cout <<

  return 0;
}