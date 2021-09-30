/* Ty Schluter
*  C++ 1st 2021
* Sept. 29th
* Lab 3 User and File I/O
* Description:Write an interactive C++ program that computes and outputs the mean and  population standard deviation of a
set of four integers that are inputted by a file called “inMeanStd.dat” and the user (should handle both).
Although the individual values are integers, the results are floating-point values.
*/

#include <iostream>
#include <cmath>
#include <math.h>
#include <fstream>
#include <string>

// inMeanStd.dat FILE FOR LAB

using namespace std;

int main()
{
	string inputFileName = "C:/Users/Engineering/Documents/REALLAB3N's.dat";
	string outputFileName = "inMeanStd.dat";
	ifstream inFile;
	ofstream outFile;
	string inputFileName;
	float inte1, inte2, inte3, inte4;
	inFile.open(inputFileName);
	outFile.open(outputFileName, ios::app);

		cout << "Please type your first integer." << endl;
	cin >> inte1;
		cout << "Please type your second integer." << endl;
	cin >> inte2;
		cout << "Please type your third integer." << endl;
	cin >> inte3;
		cout << "Please type your fourth integer." << endl;
	cin >> inte4;
	cout << "CALCULATING" << "\n" << endl;
	cout << "The standard deviation of the 4 integers you gave me is" << " " ;
	cout << sqrt(pow(inte1 + inte2 + inte3 + inte4 - inte1 + inte2 + inte3 + inte4 /4,2) / 4); // I used the internet for the square root part
	cout << "\n" << endl; // just to clear it up

	inFile.close();
	outFile.close();


		return 0;
}