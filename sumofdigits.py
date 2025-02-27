n = int(input("Enter the number: "))
if(n==0):
    sum=0
elif(n%9==0):
    sum=9
else:
    sum=n%9
print(sum)