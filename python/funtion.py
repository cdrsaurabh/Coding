#fn to count length off list
def len_list(y):
    print(len(y))
list=[1,4,9,16,25]
x=list
leng=len_list(x)
#fn to count elements in a list
def el_list(y):
    print("the elements of the list are")
    for el in y:
        print(el)
list=[1,4,9,16,25]
el_list(list)
#fn to calculate factorial
def facto(y):
    fact=1
    for i in range(y,1,-1):
        fact=fact*i
    return fact    
n=int(input("Enter a no. for factorial:"))
print("The factorial of",n,"is",facto(n))
#fn to convert usd to inr
#1usd = 85.79inr
def convert(y):
    y=y*85.79
    print("Your amount in INR is",y)
a = int(input("Enter amount in USD"))
convert(a)