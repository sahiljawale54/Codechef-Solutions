#include <bits/stdc++.h>
using namespace std;

int main() {
	int tc;
	cin>>tc;
	
	while(tc--){
	    
	    int arr[3];
	    cin>>arr[0]>>arr[1]>>arr[2];
	    
	    sort(arr, arr+3);
	    
	    if(arr[0] == arr[1]){
	        cout<<"yes\n";
	    }else{
	        cout<<"no\n";
	    }
	   
	}
	return 0;
}
