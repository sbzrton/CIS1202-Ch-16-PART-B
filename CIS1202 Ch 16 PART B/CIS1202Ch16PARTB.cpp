//Sha'Mara Barton
//CIS1202 K01 
//April 12th, 2022


#include"roundtemp.h";

using namespace std;

int main() {

	//Test values 
	float a = 7.0;
	double b = 5.0f;
	int c  = 3;
	
	
	// Sent to generic template
	cout << fixed << setprecision(1) << " " <<half(a) << endl;
	cout << fixed << setprecision(1) << " " << half(b) << endl;

	//  * sent to explicit template*
	cout <<" " << half<int>(c);


	cin.ignore(INT_MAX);
}