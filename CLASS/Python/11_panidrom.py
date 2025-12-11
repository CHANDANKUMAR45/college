num=int(input("enter number"))
n=num
p=0
while(num>0):
    p=(p*10)+(num%10)
    num=num//10
if(n==p):
    print("padidrom")
else:
   print("not padidrom") 