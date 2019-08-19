x = int(input())
t = 0
for i in range(2,x-1):
    if x%i==0:
        print("Not Prime")
        t = 1
        break;
if t==0:
    print("Prime")