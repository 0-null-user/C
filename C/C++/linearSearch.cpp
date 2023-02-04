/*
 *       Filename:  linearSearch.cpp
 *
 *    Description:  Program to do linear search... 
 *        Created:  06/25/2022 09:39:07 AM
 *       Compiler:  gcc
 *
 *         Author:  Harsh Yadav (mn), harsh-yadav@tutanota.com
 */

#include <iostream>
using namespace std;

	int
linearSearch ( int arr[], int n, int key )
{
	for(int i=0; i<n; i++){
		if(arr[i]==key){
			return i;
		}
	}
	return -1;
}		/* -----  end of function linearSearch  ----- */


	int
main ( int argc, char *argv[] )
{
	int n;
	cin>>n;

	int arr[n];
	for(int i=0; i<n; i++){
		cin>>arr[i];
	}

	int key;
	cin>>key;

	cout << linearSearch(arr, n, key);
	return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */
