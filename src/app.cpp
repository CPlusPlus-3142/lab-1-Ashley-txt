// practicing some imperative C++
// see README for instructions
#include <iostream>
#include <string>
using namespace std;

//returns t/f if x is prime 
bool isPrime(int x){
    if(x < 2) return false;
    if(x == 2) return true;
    if(x%2 == 0) return false;

    for (int i = 3; i * i <= x; i += 2)
{
        if(x%i == 0){
            return false;
        }
    }
    return true;
}
//returns the next prime number if x is not a prime number
int closestPrime(int x){
    if(isPrime(x)){
        return x;
    }
    int test = x+1;
    while(!isPrime(test)){
        test++;
    }
    return test;
}
/** You should put in a main for testing, but then comment it out for submission.
 * The test.cpp file will include the main in your submission. You do not edit the test.cpp 
 * file. The only file to edit is app.cpp**/

// int main()
// {
// int x;
// int y;
// cout << "Enter two numbers: " << endl;
// cin >> x;
// cin >> y;

// if(isPrime(x)){
//     cout << x << " is prime" <<endl;
// }else{
//     cout << x << " is not prime" << endl;
//     cout << "the next prime number is: " << closestPrime(x)<<endl;
// }

// if(isPrime(y)){
//     cout << y << " is prime" <<endl;
// }else{
//     cout << y << " is not prime" << endl;
//     cout << "the next prime number is: " << closestPrime(y);
// }
// return 0;        
// }
