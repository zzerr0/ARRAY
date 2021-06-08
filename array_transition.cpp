         int low = 0, high = n-1, mid = 0;
 if(arr[0] != 0){
 while( low <= high ){
  mid = (low + high)/2;
  
  if( arr[mid] == 0){
   if(arr[mid-1] == 1){
    return n - mid;
   }
   else{
    high = mid-1;
   }
  }
  else{
    low = mid+1;
  }
  
 }
 }
 else{
  return n;
 }
