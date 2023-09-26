#include<stdio.h>
#include<Stdbool.h>
int main()
{   //leniar search algorithum for searching
	int array[]={100,1,200,45,23,67,98,56};
	int n=8,i=0;
	int data=56;
	bool found=false;
	
	//seraching
	for(i=0;i<n;i++){
		if(array[i]==data){
			printf("Your value found at index : %d",i);
			found=true;
			break;
		}
	}
	if(found==false){
		printf("Your value coudn't find'");
	}
	}

