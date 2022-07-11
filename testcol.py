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
