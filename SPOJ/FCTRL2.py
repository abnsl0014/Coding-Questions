t = int(input())
while t > 0 :
    ans = 1
    n = int(input())
    for i in range(1,n+1):
        ans*=i;
    print(ans)
    t-=1;