import math
t=int(input())
  
def GCD(x, y):
  
    if x > y:
        small = y
    else:
        small = x
    for i in range(1, small+1):
        if((x % i == 0) and (y % i == 0)):
            gcd = i
              
    return gcd
  

while t:
    t=t-1
    n=int(input())
    s=list(map(int,input().split()))
    l = [num for num in s if num % 2 == 0]
    for i in s:
        if i%2!=0:
            l.append(i)
    m=len(l)
    res=0
    for i in range(m):
        for j in range(i+1,m):
            if math.gcd(l[i],2*l[j])>1:
                res+=1
    print(res)