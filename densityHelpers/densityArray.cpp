#include<fstream>
#include<iostream>
using namespace std;

#define N 256
#define endl '\n'

void print(double a[N][N]) {
	for(int i=0; i<N; i++) {
		for(int j=0; j<N; j++)
			cout<<a[i][j]<<" ";
		cout<<endl;
	}
	
	return;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	double densityArray[N][N];
	double x;
	ifstream rhoFile("rho1.dat", ios::binary | ios::in);
	if(!rhoFile) {
		cout<<"Error while opening the file"<<endl;
		return -1;
	}

	// Discard the first character
	rhoFile.read((char *) &x, sizeof(x));

	// Read the densityArray values
	for(int i=0; i<N; i++)
		for(int j=0; j<N; j++)
			rhoFile.read((char *) &densityArray[i][j], sizeof(double));
		
	rhoFile.close();
	if(!rhoFile.good()) {
		cout<<"Error while reading the file"<<endl;
		return -1;
	}

	// Print the densityArray values
	// print(densityArray);
	return 0;
}
