#chandan kumar
num=input("enter number")
n=len(num)
num=int(num)
sum=0
a=num

while num>0 :
   r=num%10
   sum=sum+(r**n)
   num=num//10

if(a==sum):
 print("Armstrong number")
else:
 print("Not Armstrong number")
 
