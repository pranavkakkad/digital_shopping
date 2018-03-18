#include <bits/stdc++.h>
#include <ctime>
using namespace std;
enum orderStatus
{
  New,
  Hold,
  Shipped,
  Delivered,
  Closed
};

class Order
{
  int orderNumber;
  int orderDate;
  int shipped;
  string address;
  enum orderStatus status;
  double amount;

public:
  void setOrderNumber(int orderNo)
  {
    orderNumber = orderNo;
  }
  void setOrderDate(int orderD)
  {
    orderDate = orderD;
  }
  void setShippedDate(int shipD)
  {
    shipped = shipD;
  }
  void setAddress(string addr)
  {
    address = addr;
  }
  // void setStatus(string T)
  // {
  //   status = T;
  // }
  void setAmount(double cost)
  {
    amount = cost;
  }
  int getOrderNumber()
  {
    return orderNumber;
  }
  int getOrderDate()
  {
    return orderDate;
  }
  int getShippedDate()
  {
    return shipped;
  }
  string getAddress()
  {
    return address;
  }
  // enum orderStatus getStatus(int t)
  // {
  //   // status = t;
  //   // return status(t);
  // }
  double getAmount()
  {
    return amount;
  }
};

// int main()
// {
//   Order obj1;
//   int now = time(0);
//   cout << ctime(&now) << endl;
//   return 0;
// }