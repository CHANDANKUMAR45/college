''' PRINT THE FOLLOWING PATTERN 
   1
  232
 34543
4567654 
'''
n=int(input("Enter the number of row : "))

for i in range(1,n+1):
    for j in range(n-i):
       print(" ",end="")
    for k in range(i,i*2):
     print(k,end="")
    # for l in range(k-1,i-1,-1):
    for l in range(i*2-2,i-1,-1):
     print(l,end="")
    print()