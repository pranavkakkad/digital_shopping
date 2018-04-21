#include <bits/stdc++.h>
#include "Shopping_cart.cpp"
#include "order.cpp"
#include "Person.cpp"
using namespace std;

class Account
{
  static int ID;
  string billing_address;
  bool is_closed;
  int open_Date;
  int closed_Date;
  Shopping_cart *cart;
  Order *ord1;

public:
  Account()
  {
    inc();
    open_Date = 1;
    is_closed = false;
    // ord1->getStatus(1);
  }
  ~Account()
  {

  }
  void inc()
  {
    ID++;
  }
  static int getID()
  {
    return ID;
  }
  void get_add()
  {
    cout << "Enter Address" << endl;
    cin >> billing_address;
  }
  void Show_id()
  {
    cout << "Your ID is:" << getID() << endl;
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
  void createAc(string email,string pass){
    Customer C;
    C.setEmail(email);
    C.setPassword(pass);
  }
  string verifyEmail(){
    Customer B;
     return B.getEmail();
  }
  string verifyPass(){
    Customer B1;
     return B1.getPassword();
  }
};
int Account::ID;
