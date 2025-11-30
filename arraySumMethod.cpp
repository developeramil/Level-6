# include <iostream>
using namespace std;


/*int main(){
	 int sum=0;
	int array[]={24,56,43,73};
	for (int i=0;i<4;i++){
		sum=sum + array[i];
	};
	cout<<sum;
	return 0;
	
}*/

int sumArray(int arr[],int size){
	int sum=0;
	for(int i=0;i<size;i++){
		sum+=arr[i];
	}
	 return sum;
}  

int main(){
	
	int array[]={1,2,3,4};
	int size=4;
	 int result = sumArray(array,size);
	cout<<result;
	
	
}

