#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	float regtix = 12.00;
	float mattix = 5.00;
	float regsnacks = 8.50;
	float matsnacks = 10.50;

	float regprice = regtix + regsnacks;
	float regtixpercent = (regtix / regprice) * 100;
	float regsnackpercent = (regsnacks / regprice) * 100;

	float matprice = mattix + matsnacks;
	float mattixpercent = (mattix / matprice) * 100;
	float matsnackpercent = (matsnacks / matprice) * 100;

	cout << fixed << showpoint;
	cout << setprecision(2);

	cout << "Regular tickets make up " << regtixpercent << "% of regular sales.\n";
	cout << "Regular snacks make up " << regsnackpercent << "% of regular sales.\n";

	cout << "Matinee tickets make up " << mattixpercent << "% of matinee sales.\n";
	cout << "Matinee snacks make up " << matsnackpercent << "% of matinee sales.\n";

	return 0;

}