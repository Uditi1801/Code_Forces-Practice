t=int(input())
x=0
for i in range(t):
    strx=input()
    for j in strx:
        if j=="+":
            x+=1
            break
        elif j=="-":
            x-=1
            break
print(x)
