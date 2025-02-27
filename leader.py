a = [5,9,1,7,4,2,3]
n=7
sum=a[n-1]
max=a[n-1]
for i in range(n-1,0,-1):
    if(a[i]>max):
        max=a[i]
        sum+=a[i]
print(sum)