#include <iostream>
#include <string>
using namespace std;

int main()
{
  string full_name {};

  cout << "Enter your fullname: ";
  getline(cin, full_name);
  cout << full_name << endl;

  return 0;
}
