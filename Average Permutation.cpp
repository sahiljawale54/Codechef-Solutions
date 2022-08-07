#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	
	while(t--){
	    int n;
	    cin>>n;
	    
	    if(n==3){
	        cout<<"1 2 3\n";
	    }
	    else{
	        cout<<n<<" "<<n-2<<" ";
	        for(int i = 1 ;i < n-3 ; i++){
	            cout<<i<<" ";
	        }
	        cout<<n-3<<" "<<n-1<<"\n";
	    }
	}
	return 0;
}
