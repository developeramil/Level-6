# include <iostream>
using namespace std;

int findMax( int arr[][2]){


    int maxVal=arr[0][0];
    
    for (int i=0;i<2;i++){
    	for(int j=0;j<2;j++){
    		if(arr[i][j]>maxVal){
    			maxVal=arr[i][j];
			}
		}
	}
	return maxVal;
}
int main(){
	
	int arr[][2]={{14,37},{42,79}};
	int result=findMax(arr);
	cout<<"en boyuk element:"<<result;
}
