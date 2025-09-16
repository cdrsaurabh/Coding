def find_maximum(n, arr):
    maxi = arr[0]
    for i in range(n):
        if arr[i] > maxi:
            maxi = arr[i]
    return maxi
n = int(input("Enter the number of terms"))
arr = []
for i in range(n):
    num = int(input(f"Enter the term {i+1}: "))
    arr.append(num)

print("The maximum of the array is:",find_maximum(n, arr))