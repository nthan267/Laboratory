// Program to calculate total of hotel stay.


#include <iostream>
int main()

{
	using namespace std;
	// adult price and children prices are fixed.
	const double adult_price = 90;
	const double child_price = 60;
	int reserved_days, points;
	 int a_number, c_number, d_number;
	
	double total;

	cout << "How many adult guest ?" << endl;
	cin >> a_number;

	cout << "How many child guest ?" << endl;
	cin >> c_number;

	cout << "How many days ?" << endl;
	cin >> d_number;

	total = (a_number*adult_price) + (c_number*child_price) * d_number;

	points = (total / 50) * 2; // for every $50 spent guest's earn 2 points

	cout << "Your total bill for " << a_number << " adult guest(s) and " << c_number << " child guest(s) for " << d_number << " day(s) is "
		<<"$" <<  total << "." << "You have earned " << points << " points " << "." << endl;


	return 0;



}
