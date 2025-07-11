num = int(input("Enter any number "))
dig = []
temp = num
while (num>0):
    dig.append(num%10)
    num = num//10
length = len(dig)
print("The length of your no. is ",length)
dig.sort(reverse=True)
output = 0
for i in dig:
    output =(output*10)+i
print("The descending order of your no.",temp,"is")
print(output)