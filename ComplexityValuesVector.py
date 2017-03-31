class Vec:
    cag=0
    def __init__(self,labels,function):
        self.D=labels
        self.f=function
        self.cag=self.cag+1
        
def zero_vec(D): 
  return Vec(D,{})
def setitem(v,d,val):
  v.f[d]=val
def getitem(v,d):
  if d in v.f:
    return v.f[d]
  else:
    return 0
def scalar_mul(v,alpha):
  return Vec(v.D,{d:alpha*getitem(v,d) for d in v.D})
def add(u,v):
  return Vec(u.D,{d: getitem(u,d)*getitem(v,d) for b in u.D})
def neg(v):
  return scalar_mul(v,-1)
def printVec(v_1):
  for d in v_1.D:
    if d in v_1.f:
      v_1.cag=v_1.cag+1
      print(d,v_1.f[d])
      
v_1=Vec({'a','b','c','d'},{'a':1,'b':1,'c':1,'d':1})
printVec(v_1)
print("printVec için Karmasiklik: ")
print(v_1.cag)
