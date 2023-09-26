#include<stdio.h>
int main(){
	//initializing variables
	int n=10,i=0,j=0;
	int array[]={89,45,78,56,24,12,3,46,78,90};
	//nested for loops used to loop through the blocks and numbers
	for(i=0;i<(n-1);i++){
		for(j=0;j<(n-1);j++){
			//condition checking for any two numbers one greater than another
			if(array[j]>array[j+1]){
			
			int val=array[j];
			array[j]=array[j+1];
			array[j+1]=val;
		}
		}
		
	}
	//printing sorted loop
	for(i=0;i<n;i++){
		printf("%d ",array[i]);
	}
}
