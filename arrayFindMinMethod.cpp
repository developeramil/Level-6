# include <iostream>
using namespace std;

int findMin(int arr[],int size){
	
	int minVal=arr[0];
	for(int i =0;i<size;i++){
		if(arr[i]<minVal){
			minVal=arr[i];
		}
	}
	return minVal;
}
int main(){
	int arr[]={3,1,4,6,5,4,10};
	int size=7;
	int result=findMin(arr,size);
	cout<<"en kicik element:"<<result<<endl;
	
}
