# include <iostream>
using namespace std;

int findMax(int arr[],int size){
	int maxVal = arr[0];
	for (int i=1;i<size;i++){
        if(arr[i]>maxVal){
		maxVal=arr[i];
		}
	}
	return maxVal;
}


int main(){
	
	int arr[]={1,3,4,3,8};
	int size=5;
	
   int result = findMax(arr,size);
   cout<<"en boyuk element:"<<result<<endl;
}
