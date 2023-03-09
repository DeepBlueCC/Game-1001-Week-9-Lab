#include <iostream>
#include <vector>
#include <string>
#include <sstream>

using namespace std;

// Function prototype
double avgVector(vector<int>);

int main()
{
	vector<int> values;     // Define a vector to hold int values
	int num = 0, sum = 0;
	string line;

	// Get the number of values to average
	cout << "Enter integer values: ";

	// Convert user entry into a string stream object
	getline(cin, line);
	stringstream ss(line);

	// Parse integers from string stream into an integer vector
	while (ss >> num) {
		cout << num << " ";
		sum += num;
		values.push_back(num);
	}

	// Display sum and average
	cout << endl << "Sum:" << sum << endl;
	cout << "Average: " << avgVector(values) << endl;

	return 0;
}

double avgVector(vector<int> vect)
{
	int total = 0;       // Accumulator
	double avg = 0.0;

	if (vect.empty())	    // Determine if the vector is empty 
		cout << "No values to average.\n";
	else
	{
		for (int count = 0; count < vect.size(); count++)
			total += vect[count];
		avg = static_cast<double>(total) / vect.size();
	}
	return avg;
}
