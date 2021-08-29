n=int(input())
p=input()
x=p.split()
p=int(x[0])
x=set(map(int,x[1:]))
q=input()
y=q.split()
q=int(y[0])
y=set(map(int,y[1:]))
result=y.union(x)
if (len(result)==n):
    print("I become the guy.")
else:
    print("Oh, my keyboard!")