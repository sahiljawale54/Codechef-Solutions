#include<bits/stdc++.h>
using namespace std;

void sahiljawale(){
  int s1,s2,s3;
  cin>>s1>>s2>>s3;
  int ans=min(s1,min(s2,s3));
  int p=0;
  if(ans==s1){
    if(s1==ans && s3==ans)
      p=1;
    if(s1==ans && s2==ans)
      p=1;
  }
  else if(ans==s2){
    if(s1==ans && s2==ans)
      p=1;
    if(s2==ans && s3==ans)
      p=1;
  }
  else{
    if(s2==ans && s3==ans)
      p=1;
    if(s1==ans && s3==ans)
      p=1;
  }
  if(p==1){
    cout<<"YES\n";
    return;
  }
  cout<<"NO\n";

}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
  int tt;
  cin>>tt;
  while(tt--){
    sahiljawale();

  }
  return 0;
}