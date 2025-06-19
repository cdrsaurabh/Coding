# list
print("Enter 3 movie names")
list=[]
print(type(list))
list.append(input())
list.append(input())
list.append(input())
print(list)
# to check for palindrome
list_2 = [1,2,3,2,1]
new_list = list_2.copy()
new_list.reverse()
print("reverse of list is ",new_list)
if(list_2 == new_list):
    print("The above list is a palindrome")
else :
    print("The above list is not a palindrome")

# TUPLE
    tup = ("c","d","a","a","b","b","a")
print("No. of A grade students are",tup.count("a"))
list_ = list(tup) # turned the tuple into a list
print(list_[0:])
print(type(list_))
list_.sort()
print(list_)