#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
long long n, bud = 0, count = 0;
long max = 0;
cin>>n;
vector<long long int> arr(n);
for(int i = 0; i < n; i++){
 cin>>arr[i];
}
sort(arr.begin(), arr.end());
 for(int j = 0; j < n; j++){
  count = n-j;
  bud = arr[j] * count;
  if(bud > max){
   max = bud;
  }
  count = 0;
}

cout<<max<<endl;

return 0;
}
