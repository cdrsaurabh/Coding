def show(n):
    if(n==0): #base case --> it decides whether
        return # the recursion will stop or not
    print(n)
    show(n-1)
show(5)