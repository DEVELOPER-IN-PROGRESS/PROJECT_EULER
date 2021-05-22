
"""
Project Euler Problem 5: https://projecteuler.net/problem=5
Smallest multiple

What is the smallest positive number that is _evenly divisible_ by all 
of the numbers from 1 to 20?
"""

def solution(n: int = 7) -> int:
    try:
        n = int(n)
    except (TypeError, ValueError):
        raise TypeError("Parameter n must be int or castable to int.")
    if n <= 0:
        raise ValueError("Parameter n must be greater than or equal to one.")
    i = 0
    while 1:
        print("i =  " , i )
        i += n * (n - 1)
        print("i ==  " , i )
        nfound = 0
        for j in range(2, n):
            if i % j != 0:
                nfound = 1
                break
        if nfound == 0:
            if i == 0:
                i = 1
            return i


if __name__ == "__main__":
    print(f"{solution() = }")     
