#include <iostream>
#include <string>
#include <stdio.h>
#include <curses.h>
using namespace std;
class Person
{
	string first_name;
	string last_name;
	string address;
	string email;
	string pass;
	string city;
	string state;
	string country;
	long int mobile;
	int zip_code;
	string gender;

public:
	Person()
	{
		first_name = "ABC";
		last_name = "XYZ";
		address = "PDPU";
		city = "GANDHINAGAR";
		state = "GUJARAT";
		country = "INDIA";
		mobile = 123456789;
		zip_code = 001122;
		gender = "M";
	}
	//Metods to enter the data
	void setFirstName();
	void setLastName();
	void setAddress();
	void setEmail();
	void setPass();
	void setCity();
	void setState();
	void setCountry();
	void setMobile();
	void setZip();
	void setGender();

	//Methods to access the data
	string getFirstName();
	string getLastname();
	string getAddress();
	string getCity();
	string getEmail();
	string getPass();
	string getState();
	string getCountry();
	string getGender();
	long int getMobile();
	int getZip();
};
void Person::setPass()
{
	// char st[10] = {0};
	cin >> pass;
	// for (int i = 0; i < 10; i++)
	// {
	// 	st[i] = gets();
	// 	puts('*');
	// 	if (st[i] == 13)
	// 		break;
	// };
}
string Person::getPass()
{
	return pass;
}
void Person::setEmail()
{
	cin >> email;
}
string Person::getEmail()
{
	return email;
}
void Person::setFirstName()
{
	cin >> first_name;
}
void Person::setLastName()
{
	cin >> last_name;
}
void Person::setAddress()
{
	cin >> address;
}
void Person::setCity()
{
	cin >> city;
}
void Person::setCountry()
{
	cin >> country;
}
void Person::setGender()
{
	cin >> gender;
}
void Person::setMobile()
{
	cin >> mobile;
}
void Person::setZip()
{
	cin >> zip_code;
}

string Person::getFirstName()
{
	return first_name;
}
string Person::getLastname()
{
	return last_name;
}
string Person::getAddress()
{
	return address;
}
string Person::getCity()
{
	return city;
}
string Person::getCountry()
{
	return country;
}
string Person::getGender()
{
	return gender;
}
long int Person::getMobile()
{
	return mobile;
}
int Person::getZip()
{
	return zip_code;
}

class Customer : public Person
{
	static int CustomerId;
	string mailId, pass;

public:
	Customer()
	{
		// CustomerId=0;
		mailId = "";
		inc();
	}
	void inc()
	{
		CustomerId++;
	}
	void setPassword(string p)
	{
		pass = p;
	}
	string getPassword()
	{
		return pass;
	}
	static int getCustomerId()
	{
		return CustomerId;
	}
	void setCustomerId(int CId)
	{
		CustomerId = CId;
	}
	void setEmail(string mailId)
	{
		this->mailId = mailId;
	}

	// int getCustomerId(){
	//     return  CustomerId;
	// }
	string getEmail()
	{
		return mailId;
	}
};
int Customer::CustomerId;
void verifyUser()
{
	//Verification of user to check for his login system
	//and to check for his mobile number while placing order
}
