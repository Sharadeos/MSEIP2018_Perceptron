#include <iostream>
#include <fstream>
#include <vector>
#include <sstream>
 
int main(int argc, char *argv[]) {
	/* 
	* Code to load a CSV into a 2-D vector. No need to modify
	* the following code.
	*/
	std::vector< std::vector<double> > data;	// Vector containing data and labels
	std::ifstream file( argv[1] );			// File to load data


	/* 
	* Part 0: Code to load in from a CSV, no need to edit this
	*/
	std::string line;
	while(std::getline(file, line)) {
	    std::vector<double> row;
	    std::stringstream iss(line);

	    std::string val;
	    while (std::getline(iss, val, ',')) {
		try {
		    double temp = std::stod(val);
		    row.push_back(temp);
		}
		catch (...) {
		    std::cout << "Bad input: " << val << std::endl;
		}
	    }
	    data.push_back(row);
	}

	/* 
	* Part 1: Reflex agent
	*/
	// Iterate over the array and make a decision based on some value.
	for (const auto &row : data) {
		// Each row represents a data sample.
		// The columns represent a specific feature.
		// For the Iris dataset:
		//	0 - Sepal length
		//	1 - Sepal width
		//	2 - Petal length
		//	3 - Petal width
		// The final column (4) is the label
		double prediction = -1;
		double label = row.back();
		std::cout << "Data values: ";
		for (const auto &col : row )
			std::cout << col << '\t';
		std::cout << std::endl;

		std::cout << "Current sample is labeled " << label;

		/* 
		* Part 1.1: Reflex rule
		*/

		/* 
		* Part 1.2: Reflex rule
		*/

	}

	/* 
	* Part 2: Performance metrics
	*/
	
	}
