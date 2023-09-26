#include<stdio.h>
int main()
{
	int array[]={1,2,4,5,6,7,8,9,12,20};
	int n=10;
	int data=20; // this value is searching through the array
	int left=0,right=(n-1),mid=0;
	
	while(left<=right){
		
		mid=(left+right)/2;
		
		if(array[mid]==data){
			printf("Your value found at index : %d",mid);
			break;
		}
		else if(array[mid]<data){
			left=mid+1;
		}
		else if(array[mid]>data){
			right=mid-1;
		}
		
	}
}
