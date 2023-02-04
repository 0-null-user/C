#include <iostream>
using namespace std;

	int
main ( int argc, char *argv[] )
{
	int n;
	cout<<"Enter the number of rows: ";
	cin>>n;
	for(int i=1; i<=n; i++){
		cout << "\n";
		for(int k=n; k>=i; k--){
			cout << " ";
		}
		for(int j=1; j<=2*i-1; j++){
			cout << "*";
		}
	}
	for(int a=1; a<=n; a++){
		cout << "\n";
		for(int b=1; b<=a; b++){
			cout << " ";
		}
		for(int c=2*n; c>2*a-1; c--){
			cout << "*";
		}
	}
	cout << "\n";
	return 0;
}				/* ----------  end of function main  ---------- */
