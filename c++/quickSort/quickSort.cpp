/*
 * quickSort.cpp
 *
 *  Created on: Jan 22, 2022
 *      Author: ubuntu
 */
#include <iostream>

using namespace std;

void swap(int *a, int *b)
{
	int t=0;
	t=*a;
	*a=*b;
	*b=t;
}

int quicksort(int arr[], int low, int high)
{
	int pivot=arr[high];
	int i=0,j=0;

	i=low-1; //select greater value

	for(j=low;j<high;j++)
	{
		if(arr[j]<=pivot) //if less value found than pivot
		{
			i++;

			swap(&arr[i],&arr[j]); //swap first pointer with smallest value
		}
	}
	swap(&arr[i+1],&arr[high]); //swap the pivot to correct postion

	return (i+1);
}

void partion(int arr[],int low , int high)
{
	int pi=0;



	if(low<high)
	{
		pi=quicksort(arr, low, high);
		quicksort(arr, pi+1, high);
		quicksort(arr, low, pi-1);
	}
}

void print(int arr[],int size)
{
	for(int i=0;i<size;i++)
	{
		cout<<arr[i]<<"\n";
	}
}

int main()
{

	int arr[]={12,3,42,4};

	int size=(sizeof(arr)/sizeof(arr[0]));

	partion(arr, 0, size-1);

	print(arr, size);

	return 0;
}
