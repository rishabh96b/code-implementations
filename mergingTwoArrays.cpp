'''
Subject: C++ program to merge 2 unsorted arrays and then sort the merged array.
Author: @Rishabh Bohra

'''

#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {

  //defining 2 array with some values
	int arr1[] = {4,2,6,9,5};
	int arr2[] = {7,5,4,3,2};
  
	//calculation of the length of 2 arrays using sizeof() function.
	int len1 = sizeof(arr1)/sizeof(int);
	int len2 = sizeof(arr2)/sizeof(int);
	
  //declaring third array into with merging is going to happen.
	int *arr3 = new int[len1+len2];
  
	int i=0,j=0,k=0;
  
  //keep on merging until boundary of one of the array is reached.
	while(i<len1 && j<len2){
	    if(arr1[i] <= arr2[j]){
	        arr3[k++] = arr1[i++];
	        cout <<"value of i:" << i <<endl;
	    }
	    else{
	        arr3[k++] = arr2[j++];
	        cout <<"value of j:" << j <<endl;
	    }
	}
  
  //if array1 boundary is reached i.e all elements of array1 are considered already.
  //put all remaining elements of array2 into array3.
	if(i>=len1){
	    cout<< "(i>len1"<<j <<")";
	    while(j<len2){
	        arr3[k++] = arr2[j++];
	    }
	}
  
  //if array2 boundary is reached i.e all elements of array1 are considered already.
  //put all remaining elements of array1 into array3.
	if(j>=len2){
	    cout<< "(i>len1"<<i <<")";
	    while(i<len1){
	        arr3[k++] = arr1[i++];
	    }
	}
  
  //printing unsorted merged array
	for(int i=0;i<10;i++)
	    cout<< arr3[i]<<" ";
      
   //sorting merged array
	 std::sort(arr3,arr3 + len1+len2);
   
   //printing sorted marged array
	 cout<< "Sorted"<<endl;
	 for(int i=0;i<10;i++)
	    cout<< arr3[i]<<" ";
	 
	 
	
	return 0;
} //end of main
