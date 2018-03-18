
#include <bits/stdc++.h>
using namespace std;

class Account
{
  string ID;
  string billing_address;
  boolean is_closed;
  int open_Date;
  int closed_Date;

public:
  void getid()
  {
    cout << "Enter your ID:" << endl;
    cin >> ID;
  }

  void get_add()
  {
    cout << "Enter Address" << endl;
    cin >> billing_assress;
  }
  void Show_id()
  {
    cout << "Your ID is:" << ID << endl;
  }
  void Show_add()
  {
    cout << "Your Address is:" << billing_addresss << endl;
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
    cin >> closed_date;
  }
  void Show_cldate()
  {
    cout << "Account Closed Date is:" << closed_date << endl;
  }

  void is_closed()
  {
  }
};
