def pat(n,m):
    for i in range(1,n+1):
        for j in range(1,m+1):
            if(i==1 or i==n or j==1):
                print("*",end="")
            else:
                print(" ",end="")
        print("\r")
rows=6
cols=8
pat(rows,cols)
print("\n")
def pat1(n,m):
    for i in range(1,n+1):
        for j in range(1,m+1):
            if(i==1 or j==1 or j==m or i==n-3 ):
                print("*",end="")
            else:
                print(" ",end="")
        print()

rows=7
cols=8
pat1(rows,cols)
print("\n")
def pat2(n,m):
    for i in range(1,n+1):
        for j in range(1,m+1):
            if(j==1 or j==m  or j==i+1):
                print("*",end="")
            else:
                print(" ",end="")
        print()
rows=6
cols=8
pat2(rows,cols)
print("\n")
def pat3(n,m):
    for i in range(1,n+1):
        for j in range(1,m+1):
            if(i==1 or i==n or j==m or j==1):
                print("*",end="")
            else:
                print(" ",end="")
        print()
rows=6
cols=8
pat3(rows,cols)
print("\n")
def pat4(n,m):
    for i in range(1,n+1):
        for j in range(1,m+1):
            if(j==1 or j==m  or j==i+1):
                print("*",end="")
            else:
                print(" ",end="")
        print()
rows=6
cols=8
pat4(rows,cols)