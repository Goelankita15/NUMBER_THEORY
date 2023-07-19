/*
Multiple of a prime number is not a prime number
 start from square of a number since
multiple of any number can be written as 
let 7 => 7 * N where N can be 1,2,3,4....
so since the number N < 7 must be the multiple of other smaller prime number therfore already marked
if someone below that number able to divide that number then that number isnot a prime number 

Take all as prime
start and check if prime then mark all multiples non prime

//https://cp-algorithms.com/algebra/sieve-of-eratosthenes.html
*/

int prime[1000000]
void seive(){
  int maxN = 1000000;
  for(int i = 1; i <= maxN; i++){
        prime[i] = 1;
  }
  prime[0] = prime[1] = 0;
  for(int i = 2; i*i <= maxN;i++){
      if(prime[i]){
        for(int j = i*i; j<=maxN; j += i){
            prime[j] = 0;
        }
      }
    }

//implementation
int n;
vector<bool> is_prime(n+1, true);
is_prime[0] = is_prime[1] = false;
for (int i = 2; i*i <= n; i++) {
    if (is_prime[i]) {
        for (int j = i * i; j <= n; j += i)
            is_prime[j] = false;
    }
}
//TC -> O[log(logn)]


/*
The number of prime numbers less than or equal to  
n/lnn  is approximately  

The  
k-th prime number approximately equals  
k lnk  (that follows immediately from the previous fact).

*/


Another optimisation is all evens can be ignored,2
every prime can be written as 6n-1 or 6n+1 , 2,3 n-> natural  umber
sqrt function takes logn time
