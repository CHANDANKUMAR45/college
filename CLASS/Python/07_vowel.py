s=input("enter the string \n ")
count=0
for i in s:
    if(i in "aAeEiIoOuU"):
        count+=1

print(count)