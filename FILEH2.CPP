//Program for adding, deleting, updating product object into/from a file

// #include <conio.h>
#include <bits/stdc++.h>
#include <iostream>
#include <fstream>
// #include <stdlib>
//#include <sstream>
#include <string>
using namespace std;
class product
{
	char name[40];
	int id;
	float price;

public:
	static int count;

	product() {}
	product(char *n, float p)
	{
		strcpy(name, n);
		id = ++count;
		price = p;
	}

	void Setproduct()
	{
		cout << "Enter Product name : ";
		cin >> name;
		cout << "enter Product id : ";
		cin >> id;
		count++;
		cout << "Enter Product price : ";
		cin >> price;
	}

	void print_product()
	{
		cout << "\nName : " << name << " id: " << id << "  Price : " << price << endl;
	}
	friend void readProductsFromFile(ifstream &);
	friend void writeProductsToFile(product *p[10], int n, ofstream &fout);
	friend void updateProductFile(ifstream &, ofstream &);
	friend void deleteProductFromFile(ifstream &, ofstream &);
};

int product::count = 0;

void writeProductsToFile(product *p[10], int n, ofstream &fout)
{
	//writing product details into file in tab seprated format
	for (int i = 0; i < n; i++)
		fout << p[i]->id << "\t" << p[i]->name << "\t" << p[i]->price << endl;
}

void readProductsFromFile(ifstream &fin)
{

	int r = 0; //to keep track of no of rows in the file
	product p[10];
	cout << "\nThe products from file " << endl;

	while (!fin.eof())
	{
		if (fin >> p[r].id >> p[r].name >> p[r].price)
		{
			cout << r + 1 << " Id : " << p[r].id << "\tname : " << p[r].name << "\tPrice : " << p[r].price << endl;
		}
		r++;
		//if(fin.eof()) break;
	}
}
void updateProductFile(ifstream &fin, ofstream &fout)
{
	int r = 0, c;
	product p[10];
	cout << "\n\nThe products from file " << endl;

	while (!fin.eof())
	{
		if (fin >> p[r].id >> p[r].name >> p[r].price)
		{
			cout << r + 1 << "  Id : " << p[r].id << "\tname " << p[r].name << "\tprice : " << p[r].price << endl;
		}
		r++;

		//if(fin.eof()) break;
	}

	int pid;
	cout << "Enter product to be updated " << endl;
	cin >> pid;

	cout << "Record retrieved " << endl;
	cout << p[pid - 1].id << "  " << p[pid - 1].name << "  " << p[pid - 1].price << endl;

	p[pid - 1].Setproduct();

	for (int i = 0; i < r - 1; i++)
		fout << p[i].id << "\t" << p[i].name << "\t" << p[i].price << endl;
	// fin.close();
}
void deleteProductFromFile(ifstream &fin, ofstream &fout)
{
	int r = 0, c;
	product p[10];

	int pid;
	cout << "Enter product to be deleted " << endl;
	cin >> pid;
	int lineno;
	while (!fin.eof())
	{
		if (fin >> p[r].id >> p[r].name >> p[r].price)
		{
			if (pid == p[r].id)
				lineno = r;
			cout << r + 1 << "  Product id : " << p[r].id << "\tname " << p[r].name << "\tPrice : " << p[r].price << endl;
		}
		r++;

		//if(fin.eof()) break;
	}
	fin.clear();
	fin.seekg(0);

	cout << "line no. " << lineno + 1 << endl;
	char record[100];
	int x = 0;
	while (fin.getline(record, 100, '\n'))
	{
		//strcpy(ine=fin,getline('\n');
		if (x != lineno)
		{
			fout << record << endl;
			cout << record << endl;
		}
		x++;
	}
}

void copyfile2file(ifstream &fin, ofstream &fout)
{

	char line[100];
	while (fin.getline(line, 100, '\n'))
	{
		//strcpy(ine=fin,getline('\n');

		fout << line << endl;
	}
}

int main()
{
	// clrscr();

	ofstream fout; //fout is output stream class object
	ifstream fin;	//fin is input stream class object

	int choice;

	while (1)
	{

		cout << "1. Create    2. View   3. Update  4. Delete  5.Exit   \n"
				 << endl;
		cin >> choice;
		switch (choice)
		{

		//*************** Creating product file
		case 1:
		{
			fout.open("Product.txt", ios::app);
			product p[10], *ptr[10];
			int n;
			cout << "enter no of prod to be added " << endl;
			cin >> n;
			for (int i = 0; i < n; i++)
				p[i].Setproduct();
			for (int i = 0; i < n; i++)
			{
				p[i].print_product();
				ptr[i] = &p[i]; //ptr is an array of pointers to product object
			}
			writeProductsToFile(ptr, n, fout);
			fout.close();
			break;
		}
		//***********Read Products from file
		case 2:
		{
			fin.open("Product.txt");
			readProductsFromFile(fin);
			fin.close();
			break;
		}

		case 3:
		{
			//*************Update product
			fin.open("Product.txt");

			fout.open("Product2.txt"); //new file for holding updated data
			updateProductFile(fin, fout);

			fin.close();

			fout.close();

			fin.open("Product2.txt");
			fout.open("Product.txt");
			copyfile2file(fin, fout);
			fin.close();
			fout.close();
			break;
		}
		case 4:
		{ ///*************Delete a product
			fin.open("Product.txt");

			fout.open("Product2.txt"); //new file for holding updated data
			deleteProductFromFile(fin, fout);

			fin.close();

			fout.close();

			fin.open("Product2.txt");
			fout.open("Product.txt");
			copyfile2file(fin, fout);
			fin.close();
			fout.close();
			break;
		}
		case 5:
		{
			exit(0);
		}
		}
	}
	// getch();
	return 0;
}