n=30
product=1
summ=0
for i in range(1,n+1):
    product*=i
    summ+=i
print(product%summ)