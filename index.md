![.](https://i.ibb.co/nr8JGLw/Ekran-g-r-nt-s-2022-07-11-143139-fococlipping-standard.png)

## Welcome To The Homepage Of Collatz Testing

Currently `1267650600228229401496767514314` Numbers Are Tested

You can go to the [repository on GitHub](https://github.com/Collatz-Testing/Collatz-Testing) to discuss about Collatz Problem


### How To Help

You can run theese code on python and c++ to help us and share the results

**Python:**

```markdown
def test(x):
    if x==1:
        print(x)
        print("=================================================================================")
    elif x%2==0:
        print(x)
        test(x/2)
    else:
        print(x)
        test(3*x+1)
for x in range (2**100,9**100):
    print ("testing for ",x)
    test(x)

```

**C++:**

```
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
```
### Support or Contact

Want to help and contact us? Check out [discussions](https://github.com/Collatz-Testing/Collatz-Testing/discussions)
