#include <iostream>
using namespace std;

int main() {
	int tc;
	cin>>tc;
	
	while(tc--){
	    
	    int n;
	    cin>>n;
	    string s1,s2;
	    cin>>s1>>s2;
	    
	    int change= 0;
	    
	    for(int i = 0 ; i < n ; i++){
	        if(s1[i] != s2[i]){
	            change++;
	        }else{
	            continue;
	        }
	    }
	    if(change % 2 == 0){
	        cout <<"1\n";
	    }else{
	        cout<<"0\n";
	    }
	}
	return 0;
}
