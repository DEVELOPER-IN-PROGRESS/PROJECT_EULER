sum = 0 
n = int(1000/3)
sum += 3*(n+1)*n/2
n = int(1000/5)  -1
sum += 5*n*(n+1)/2
n = int(1000/15)
sum -= 15*n*(n+1)/2
print(sum)