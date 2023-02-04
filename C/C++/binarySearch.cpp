/*
 * =====================================================================================
 *
 *       Filename:  linearSearch.cpp
 *
 *    Description:  Program to do linear search... 
 *
 *        Version:  1.0
 *        Created:  06/25/2022 09:39:07 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Harsh Yadav (mn), harsh-yadav@tutanota.com
 *        Company:  
 *
 * =====================================================================================
 */

#include <iostream>
using namespace std;

	int
binarySearch ( int arr[], int n, int key )
{
	int s = 0;
	int e = n;
	while(s<=e){
		int mid=(s+e)/2;

		if(arr[mid]==key){
			return mid;
		}
		else if(arr[mid]>key){
			e=mid-1;
		}
		else{
			s=mid+1;
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

	cout << binarySearch(arr, n, key);
	return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */
