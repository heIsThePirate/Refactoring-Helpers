#include <bits/stdc++.h>
using namespace std;

#define N 256
#define P 100
#define Q 4
#define endl '\n'


int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	fstream inputFile, outputFile;
	string inputFilename, outputFilename, iopoint, time, dt, value;

	for(int i=0; i<=P; i++) {
		string fnn = to_string(i);
		for(int j=1; j<=Q; j++) {
			string prcc = to_string(j);
			inputFilename = "newData/newData" + fnn + "p" + prcc + ".txt";
			inputFile.open(inputFilename.c_str());

			outputFilename = "niceData/niceData" + fnn + "p" + prcc + ".txt";
			outputFile.open(outputFilename.c_str(), ios::out);

			cout<<inputFilename<<" "<<outputFilename<<endl;
			if(!inputFile || !outputFile) {
				cout<<"Error in opening the files!"<<endl;
				return -1;
			}

			inputFile >> iopoint;
			inputFile >> time;
			inputFile >> dt;
	
    			// Extracting values from the input file 
			while (inputFile >> value) {
				// Writing values to the output file
				outputFile << value << endl;
			}
			inputFile.close();
			outputFile.close();
		}
	}
			
	return 0;
}
