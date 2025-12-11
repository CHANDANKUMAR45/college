''' PRINT THE FOLLOWING PATTERN 
   1
  232
 34543
4567654 
'''
n = int(input("Enter the number of rows: "))

# loop to iterate over each row
for i in range(1, n+1):
    # loop to print  spaces 
    for j in range(n-i):
        print(" ", end="")

    # loop to print increasing numbers
    for k in range(i, i*2):
        print(k, end="")

    # loop to print decreasing numbers 
    for l in range(i*2-2, i-1, -1):
        print(l, end="")

    # Move to the next line 
    print()
