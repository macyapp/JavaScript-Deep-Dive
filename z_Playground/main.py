mod = int(1e9+7)

def exp(x,y):
    res=1
    while(y>0):
        if (y%2!=0):
            res=(res*x)%mod
        x=(x*x)%mod
        y//=2
    return res


def nCr(n,r) -> int:
    num=1
    den=1
    k=min(r,n-r)
    for i in range(1,k+1):
        num=(num*(n-i+1))%mod
        den=(den*i)%mod

    denInv=exp(den,mod-2)
    return (num*denInv)%mod

n=783
r=116

print(nCr(n,r))