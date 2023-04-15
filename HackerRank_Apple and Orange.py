r1 ,r2 =map(int,input().split())
a ,o =map(int ,input().split())
n1,n2=map(int,input().split())
arr1=list(map(int,input().split()))
arr2=list(map(int ,input().split()))
# the all output will be about co , ca 
# is to sum every number of array 1 with a so it will be like that a+i in arr1
#and it sould be in range of r1 and r2   r1<=(a+i)r>=r2 in arr1
# and to make counter like ca=+1 it will be sum for the whole function 
ca = sum(r1 <= (a + i) <= r2 for i in arr1)
co = sum(r1 <= (o + i) <= r2 for i in arr2)
print(ca)
print(co)

