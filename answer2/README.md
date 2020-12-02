By considering the terms in the Fibonacci sequence whose values 
do not exceed four million, find the sum of the even-valued terms.

Soln: We know that every term in a Fibonacci sequence is sum of previous 
  2 terms . so we can brute force every term in the sequence for getting 
  an even number and storing their sum which is not very efficient 
  considering large inputs . If we Expand the fibonacci formula F(n) = 
  F(n-1) + F(n-2) .. eventually we can reach 
  F(n) = 4F(n-3) + F(n-6)
  by exploiting the pattern that even numbers occur after every 3 numbers 
  and so by storing the first 2 terms we can find out every even numbers in
  fibonacci sequence till target sum . 

 
