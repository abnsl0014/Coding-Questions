int Solution::sqrt(int A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
   long long int low = 1;
   long long int high = A;
   long long int ans;
   while(low <= high) {
       long long int mid = low + (high - low) /  2;
       if(mid*mid == A){
           return mid;
       }
       else if(mid*mid < A){
           low = mid + 1;
           ans = mid;
       }
       else {
           high = mid - 1;
       }
   }
   if(A==0)return 0; else return ans;
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
}
