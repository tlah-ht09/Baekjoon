while True:
    d=0
    n=input()
    l_n=list(n)
    if n == "0":
        break
    while len(l_n)>1:
        if l_n.pop() != l_n.pop(0):
            d=1
            break
    
    if d==1:
        print("no")
    else:
        print("yes")