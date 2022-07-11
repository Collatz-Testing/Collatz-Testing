![.](https://lh3.googleusercontent.com/6dmVdoX4b9Le2uhbwKNlaa_k_86ElqPyi_-kh6iCYCCBRTlfJCD0TKit5r3DqHIWOvAv=s170) 

## Welcome To The Homepage Of Collatz Testing

Currently `1267650600228229401496767514314` Numbers Are Tested

You can go to the [repository on GitHub](https://github.com/Collatz-Testing/Collatz-Testing) to discuss about Collatz Problem


### How To Help

You can run this code on python to help us and share the results

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
### Support or Contact

Want to help and contact us? Check out [discussions](https://github.com/Collatz-Testing/Collatz-Testing/discussions)
