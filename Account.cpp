#include <bits/stdc++.h>
#include "Shopping_cart.cpp"

using namespace std;

class Account
{
  string ID;
  string billing_address;
  bool is_closed;
  int open_Date;
  int closed_Date;

public:
  Account()
  {
    shopping_cart *cart;
  }
  void getid()
  {
    cout << "Enter your ID:" << endl;
    cin >> ID;
  }

  void get_add()
  {
    cout << "Enter Address" << endl;
    cin >> billing_address;
  }
  void Show_id()
  {
    cout << "Your ID is:" << ID << endl;
  }
  void Show_add()
  {
    cout << "Your Address is:" << billing_address << endl;
  }
  void Get_Odate()
  {
    cout << "Enter Open date:" << endl;
    cin >> open_Date;
  }
  void Show_Odate()
  {
    cout << "Account Open_Date is :" << open_Date << endl;
  }
  void Get_cldate()
  {
    cout << "Enter Account closing Date:" << endl;
    cin >> closed_Date;
  }
  void Show_cldate()
  {
    cout << "Account Closed Date is:" << closed_Date << endl;
  }
};
