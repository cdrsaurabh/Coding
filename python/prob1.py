# num = int(input("Enter any number "))
# dig = []
# temp = num
# while (num>0):
#     dig.append(num%10)
#     num = num//10
# length = len(dig)
# print("The length of your no. is ",length)
# dig.sort(reverse=True)
# output = 0
# for i in dig:
#     output =(output*10)+i
# print("The descending order of your no.",temp,"is")
# print(output)
# You get an array of numbers, return the sum of all of the positives ones.

# Example [1, -4, 7, 12] => 1+7+12=20
new_dig = [1,-4,7,12]
leng = len(new_dig)
new_num = 0
print(leng)
for i in range(0, leng):
    if new_dig[i] > 0:
        new_num += new_dig[i]
print(new_num)