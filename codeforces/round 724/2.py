t=int(input())
while t:
    t-=1
    n=int(input())
    a=input()
    flag=0
    while flag==0:
        for i in range(26):
            ord_=97+i
            
            if not chr(ord_) in a :
                flag=1
                print(chr(ord_))
                break
        if flag==1:
            break
        for i in range(26):
            ord_=97+i
            for j in range(26):
                var=
            ch=chr(ord_)+chr(ord_+1)
            print(ch)
            if not ch in a:
                flag=1
                print(ch)
                break