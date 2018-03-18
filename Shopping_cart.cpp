#include <bits/stdc++.h>
using namespace std;
class shopping_cart
{
	int day, mounth, year, p;

public:
	void creat_date()
	{
		cout << endl
				 << "enter day" << endl;
		cin >> day;
		cout << endl
				 << "enter mounth" << endl;
		cin >> mounth;
		cout << endl
				 << "enter year" << endl;
		cin >> year;
	}
	void saw_date()
	{
		cout << day << "/" << mounth << "/" << year << endl;
	}
	void total_product(int x)
	{
		p = x;
	}
	void saw_totalproduct()
	{
		cout << endl
				 << p << endl;
	}
};
class product
{
	string prdid;
	string prdname, splrname;

public:
	string pruduct_name()
	{
		cout << endl
				 << "enter product name" << endl;
		cin >> prdname;
		return prdname;
	}
	string product_id()
	{
		cout << endl
				 << "enter product id" << endl;
		cin >> prdid;
		return prdid;
	}
	string supplier_name()
	{
		cout << endl
				 << "enter product supplier name" << endl;
		cin >> splrname;
		return splrname;
	}
};

// int main()
// {
// 	return 0;
// }
