#include <iostream>
using namespace std;

int arrTotal(int arr[],int size){
	
   int total=1;
   for (int i=0;i<size;i++){
   	total*=arr[i];
   }
	return total;
}
 
 int main(){
 	
 	int arr[]={4,6,3,7};
 	 
 	 int size =4;
 	 
 	  int result = arrTotal(arr,size);
 	cout<<result;
 	
 }
