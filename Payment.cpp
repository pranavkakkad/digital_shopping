#include <bits/stdc++.h>
using namespace std;

class payment()
{
  string ID;
  int paid_date, total;
  string Details;

public:
  void get_id()
  {
    cout << "Enter your ID:" << endl;
    cin > ID;
  }
  void paid_Date()
  {
    cout << "Enter DATE  &  total amount:" << endl;
    cin >> paid_date >> total;
  }
  void show_details()
  {
    cout << "ID=" << ID << endl;
    cout << "paid date=" << paid_date << endl;
    cout << "Total amount is " << total << endl;
  }
};
