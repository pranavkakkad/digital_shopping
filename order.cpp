#include <iostream>
#include <ctime>
using namespace std;

class Order
{
  int orderNumber;
  time_t orderDate;
  time_t shipped;
  string address;
  bool status;
  double amount;

public:
  void setOrderNumber(int orderNo)
  {
    orderNumber = orderNo;
  }
  void setOrderDate(time_t orderD)
  {
    orderDate = orderD;
  }
  void setShippedDate(time_t shipD)
  {
    shipped = shipD;
  }
  void setAddress(string addr)
  {
    address = addr;
  }
  void setStatus(bool T)
  {
    status = T;
  }
  void setAmount(double cost)
  {
    amount = cost;
  }
  int getOrderNumber()
  {
    return orderNumber;
  }
  time_t getOrderDate()
  {
    return orderDate;
  }
  time_t getShippedDate()
  {
    return shipped;
  }
  string getAddress()
  {
    return address;
  }
  bool getStatus()
  {
    return status;
  }
  double getAmount()
  {
    return amount;
  }
};

int main()
{
  Order obj1;
  time_t now = time(0);
  cout << ctime(&now) << endl;
  return 0;
}