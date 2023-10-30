#include <iostream>
using namespace std;

template <class T>
void swapVars(T &var1, T &var2)
{
	
T temp;
temp = var1;
var1 = var2;
var2 = temp;

}
int main()
{
char firstChar;
char secondChar;     // Two chars
int firstInt;
int secondInt;       // Two integers
double firstDouble;
double secondDouble; // Two doubles


 // Get and swapVars two chars
cout << "Enter two characters: ";
cin >> firstChar >> secondChar;
swapVars(firstChar, secondChar);
cout << firstChar << " " << secondChar << " " << endl;

 // Get and swapVars two ints
cout << "Enter two integers: ";
cin >> firstInt >> secondInt;
swapVars(firstInt, secondInt);
cout << firstInt << " " << secondInt << endl;

// Get and swapVars two doubles
cout << "Enter two floating-point numbers: ";
cin >> firstDouble >> secondDouble;
swapVars(firstDouble, secondDouble);
cout << firstDouble << " " << secondDouble << " " <<endl;
}

