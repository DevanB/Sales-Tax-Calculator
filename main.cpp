#include <iostream>
using namespace std;

int main()
{
	double taxrate = 0.08;
	double subtotal;
	double total;
	double taxamount;
	
	// Get amount of the sale
	cout << "Enter the amount of the sale ";
	cin >> subtotal;
	
	// Calculate the tax amount
	taxamount= subtotal * taxrate;
	
	// Calculate the sales total
	total= subtotal + taxamount;
	
	// Display the total sales
	cout << "The total sale with tax is $ ";
	cout << total << endl;
	return 0;
};