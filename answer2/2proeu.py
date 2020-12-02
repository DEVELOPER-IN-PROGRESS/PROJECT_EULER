a = 0 
b = 2 
n = a + 4*b
sum =  a + b 

while n < 4000000 :
    sum = sum +  n
    n  = a + 4*b
    a = b 
    b = n 

print(sum)
  