import math
t = int(input())
while t > 0 :
    n = int(input())
    r = int(math.sqrt(n))
    for i in range(0,r+1):
        for j in range(i,r+1):
            if (i*i + j*j) == n :
               print("({},{})".format(i,(j)), end=" ")

    print(end = "\n")
    t-=1