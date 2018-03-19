#include<string>
#include<iostream>
using namespace std;
class Person{
    string first_name;
    string last_name;
    string address;
    string city;
    string state;
    string country;
    long int mobile;
    int zip_code;
    string gender;
    
    public:
        Person(){
            first_name="";
            last_name="";
            address="";
            city="";
            state="";
            country="";
            mobile=0;
            zip_code=0;
            gender="";
        }
        //Metods to enter the data 
       void setFirstName(string first_name);
       void setLastName(string last_name);
       void setAddress(string address);
       void setCity(string city);
       void setState(string state);
       void setCountry(string country);
       void setMobile(long mobile);
       void setZip(int zip_code);
       void setGender(string gender);
       
       //Methods to access the data
       string getFirstName();
       string getLastname();
       string getAddress();
       string getCity();
       string getState();
       string getCountry();
       string getGender();
       long getMobile();
       int getZip();
};

void Person::setFirstName(string first_name){
    this->first_name=first_name;
}
void Person::setLastName(string last_name){
    this->last_name=last_name;
}
void Person::setAddress(string address){
    this->address=address;
}
void Person::setCity(string city){
    this->city=city;
}
void Person::setCountry(string country){
    this->country=country;
}
void Person::setGender(string gender){
    this->gender=gender;
}
void Person::setMobile(long mobile){
    this->mobile=mobile;
}
void Person::setZip(int zip_code){
    this->zip_code=zip_code;
}

string Person::getFirstName(){
    return first_name;
}
string Person::getLastname(){
    return last_name;
}
string Person::getAddress(){
    return  address;
}
string Person::getCity(){
    return city;
}
string Person::getCountry(){
    return country;
}
string Person::getGender(){
    return gender;
}
long Person::getMobile(){
    return mobile;
}
int Person:: getZip(){
    return zip_code;
}

class Customer:public Person {
    int CustomerId;
    string mailId;
    public:
        Customer(){
            CustomerId=0;
            mailId="";
        }
        void setCustomerId(int CustomerId){
            this->CustomerId=CustomerId;
        }
        void setEmail(string mailId){
            this->mailId=mailId;
        }
        
        
        int getCustomerId(){
            return  CustomerId;
        }
        string getEmail(){
            return mailId;
        }
};

void verifyUser(){
    //Verification of user to check for his login system
    //and to check for his mobile number while placing order
}
int main(){
    return 0;
}
