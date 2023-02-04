#include <iostream>
using namespace std;

	int
main ( int argc, char *argv[] )
{
	for(int i=1; i<=10; i++){
		cout << "\n";
		for(int k=10; k>=i; k--){
			cout << " ";
		}
		for(int j=1; j<=10; j++){
			cout << "* ";
		}

	}
	cout << "\n";
	return 0;
}				/* ----------  end of function main  ---------- */
