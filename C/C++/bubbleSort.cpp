/*
 *       Filename:  bubbleSort.cpp
 *
 *    Description:  Bubble Sort 
 *        Created:  06/25/2022 06:52:58 AM
 *       Compiler:  gcc
 *
 *         Author:  Harsh Yadav (mn), harsh-yadav@tutanota.com
 */

#include <iostream>
using namespace std;

	void
bubbleSort (int arr[], int size )
{
	for(int i=0; i<size-1; i++){
		for(int j=0; j<size-i-1; j++){
			if (arr[j]>arr[j+1]){
				int temp = arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
	return ;
}		/* -----  end of function bubbleSort  ----- */

	void
printArray ( int arr[], int size )
{
	for(int i = 0; i<size; i++)
		cout << arr[i] << " ";
	return ;
}		/* -----  end of function printArray  ----- */
	int
main ( int argc, char *argv[] )
{
	int arr[]={22,13,57,11,36};
	int size = sizeof(arr)/sizeof(int);
	cout << "The Unsorted Array: \n";
	printArray(arr, size);

	bubbleSort(arr, size);
	cout << "\nSorted Array: \n";
	printArray(arr, size);

	cout << "\n";

	return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */