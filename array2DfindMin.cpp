# include <iostream>
using namespace std;

int findMin( int arr[][2]){


    int minVal=arr[0][0];
    
    for (int i=0;i<2;i++){
    	for(int j=0;j<2;j++){
    		if(arr[i][j]<minVal){
    			minVal=arr[i][j];
			}
		}
	}
	return minVal;
}
int main(){
	
	int arr[][2]={{14,7},{42,79}};
	int result=findMin(arr);
	cout<<"en kicik element:"<<result;
}
