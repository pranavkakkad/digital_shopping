#include <bits/stdc++.h>
using namespace std;

int main()
{

  ofstream ofile;
  ofile.open("text.txt");
  ofile << "Hello world1\n";

  ofile.open("text.txt");
  ofile << "Hello world2\n";

  char data[100];
  ifstream ifile;

  //create a text file before executing.
  // ifile.open("text.txt");
  // while (!ifile.eof())
  // {
  //   ifile.getline(data, 100);
  //   cout << data << endl;
  // }
  // ifile.close();

  ofile.close();

  return 0;
}