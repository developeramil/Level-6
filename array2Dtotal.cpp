# include <iostream>
using namespace std;

int array2Dtotal(int arr[3][3]){
	int total=1;
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
				total=total*arr[i][j];
			}
		}
	return total;
}

int main(){
	int arr[3][3]={{4,5,6},{2,3,4},{7,8,6}};
	int result=array2Dtotal(arr);
	cout<<result;
}
