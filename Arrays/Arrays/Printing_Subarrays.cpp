#include <bits/stdc++.h>
using namespace std;

void printSubArrays(int arr[], int n){
    
    for(int i=0;i < n; i++){
        for(int j=0; j <n ; j++){
            //cout << "(" << i << "," << j << "),";
            
            for(int k= i; k <= j; k++){
                cout << arr[k] << ",";
            }
            cout << endl;
        }

    }
    
}

int main() {
	int arr[] = {10,20,30,40,50,60};
	int n = sizeof(arr)/ sizeof(int);
	
	printSubArrays(arr,n);
	
	return 0;
	

}
