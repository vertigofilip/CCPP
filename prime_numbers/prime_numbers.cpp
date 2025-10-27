#include <iostream>
#include <vector>
using namespace std;

int main() {
    int max_number = 30;  // Find all primes up to this number
    vector<int> prime_numbers;
    
    for(int i = 2; i <= max_number; i++) {
        bool is_prime = true;
        
        // Check if i is divisible by any previously found prime
        for(int prime : prime_numbers) {
            if(i % prime == 0) {
                is_prime = false;
                break;
            }
            // Optimization: only check up to sqrt(i)
            if(prime * prime > i) {
                break;
            }
        }
        
        if(is_prime) {
            prime_numbers.push_back(i);
        }
    }
    
    // Print the prime numbers
    cout << "Prime numbers up to " << max_number << ": ";
    for(int prime : prime_numbers) {
        cout << prime << " ";
    }
    cout << endl;
    
    return 0;
}