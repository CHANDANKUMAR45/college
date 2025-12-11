a=int(input("enter the value of A : "))
b=int(input("enter the value of B : "))
c=int(input("enter the value of C : "))
d=(b*b)-(4*a*c)
if(d>0 or d==0):
    print("the real roots")
    r1=(-b+pow(d,0.5))/(2*a)
    r2=(-b-pow(d,0.5))/(2*a)
    print(f"root1={r1}") 
    print(f"root2={r2}")
else:
    print("roots are complex")