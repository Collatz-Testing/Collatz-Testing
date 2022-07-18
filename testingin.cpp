// CPP program to print Collatz sequence
#include <bits/stdc++.h>
using namespace std;

void printCollatz(int n)
{
    // We simply follow steps
    // while we do not reach 1
    while (n != 1)
    {
        cout << n << "\n";

        // If n is odd
        if (n & 1)
            n = 3*n + 1;

            // If even
        else
            n = n/2;
    }

    // Print 1 at the end
    cout << n <<"\n";
    cout <<"================================================\n";
}

// Driver code
int main()
{
    for(unsigned long long int i =1;i<=18446744073709551615;i++){
        printCollatz(i);}

}
