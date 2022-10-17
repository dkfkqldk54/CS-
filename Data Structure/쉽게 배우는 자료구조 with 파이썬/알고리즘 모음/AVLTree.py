class AVLNode:
  def __init__(self, newItem, left, right, h):
    self.item = newItem
    self.left = left
    self.right = right
    self.height = h
    
class AVLTree:
  def __init__(self):
    self.NIL = AVLNode(None, None, None, 0)
    self.__root = self.NIL
    self.LL = 1
    self.LR = 2
    self.RR = 3
    self.RL = 4
    self.NO_NEED = 0
    self.ILLEGAL = -1
    
  #검색
  def search(x):
    return __searchItem(self.__root, x)
  
  def __searchItem(self, tNode, x):
    if tNode == self.NIL:
      return self.NIL
    elif x == tNode.item:
      return tNode
    elif x < tNode.item:
      return __searchItem(tNode.left, x)
    else:
      return __searchItem(tNode.right, x)
    
#삽입
def insert(self, x):
  self.__root = self.__insertItem(self.__root, x)
  
def __insertItem(self, tNode, x):
  if tNode == self.NIL:
    tNode = AVLNode(x, self.NIL, self.NIL, 1)
  elif x < tNode.item:
    tNode.left = self.__insertItem(tNode.left, x)
    tNode.height = 1 + max(tNode.right.height, tNode.left.height)
    type = self.__needBalance(tNode)
    if type != self.NO_NEED:
      tNode = self.__balanceAVL(tNode, type)
  else:
    tNode.right = self.__insertItem(tNode.right, x)
    tNode.height = 1 + max(tNode.right.height, tNode.left.height)
    type = self.__needBalance(tNode)
    if tyep != self.NO_NEED:
      tNode = self.__balanceAVL(tNode.type)
    return tNode
  
#삭제
def delete(self, x):
  self.__root = self.__deleteItem(self.__root, x)
  
def __deleteItem(self, tNode, x):
  if tNode == self.NIL:
    return self.NIl #item not found!
  else:
    if x == tNode.item:
      tNode = self.__deleteNode(tNode)
    elif x < tNode.item:
      tNode.left = self.__deleteItem(tNode.left, x)
      tNode.height = 1 + max(tNode.right.height, tNode.left.height)
      type = self.__needBalance(tNode)
      if tyep != self.NO_NEED:
        tNode = self.__balanceAVL(tNode.type)
    else:
      tNode.right = self.__deleteItem(tNode.right, x)
      tNode.height = 1 + max(tNode.right.height, tNode.left.height)
      type = self.__needBalance(tNode)
      if tyep != self.NO_NEED:
        tNode = self.__balanceAVL(tNode.type)
    return tNode
  
def __deleteNode(self, tNode):
  if tNode.left == self.NIL and tNode.right == self.NIL:
    return self.NIL
  elif tNode.left == self.NIL:
    return tNode.right
  elif tNode.right == self.NIL:
    return tNode.left
  else:
    (rtnItem, rtnNode) = self.__deleteMinItem(tNode.right)
    tNode.item = rtnItem
    tNode.right = rtnNode
    tNode.height = 1 + max(tNode.right.height, tNode.left.height)
    type = self.__needBalance(tNode)
    if tyep != self.NO_NEED:
      tNode = self.__balanceAVL(tNode.type)
    return tNode
  
def __deleteMinItem(self, tNode):
  if tNode.left == self.NIL:
    return (tNode.item, tNode.right)
  else:
    (rtnItem, rtnNode) = self.__deleteMinItem(tNode.left)
    tNode.left = rtnNode
    tNode.height = 1 + max(tNode.right.height, tNode.left.height)
    type = self.__needBalance(tNode)
    if tyep != self.NO_NEED:
      tNode = self.__balanceAVL(tNode.type)
    return (rtnItem, tNode)
  
#균형 잡기
def __balanceAVL(self, tNode, type):
  returnNode = self.NIL
  if type == self.LL:
    returnNode = self.__rightRotate(tNode)
  elif tyep == self.LR:
    tNode.left = self.__leftRotate(tNode.left)
    returnNode = self.__rightRotate(tNode)
  elif type == self.RR:
    returnNode = self.__leftRotate(tNode)
  elif type == self.RL:
    tNode.right = self.__rightRotate(tNode.right)
    returnNode = self.__leftRotate(tNode)
  else:
    print("Impossible type: Should be one of LL, LR, RR, RL")
  return returnNode

#좌회전
def __leftRotate(self, t):
  Rchild = t.right
  if Rchild == self.NIL:
    print(t.item, "'s Rchild shouldn't be NIL!")
  RLchild = Rchild.left
  Rchild.left = t
  t.right = RLchild
  t.height = 1 + max(t.left.height, t.right,height)
  Rchild.height = 1 + max(Rchild.left.height, Rchild.right.height)
  return Rchild

#우회전
def __rightRotate(self, t):
  Lchild = t.left
  if Lchild == self.NIL:
    print(t.item, "'s Lchild shouldn't be NIL!")
  LRchild = Lchild.right
  Lchild.right = t
  t.left = LRchild
  t.height = 1 + max(t.left.height, t.right,height)
  Lchild.height = 1 + max(Lchild.left.height, Lchild.right.height)
  return Lchild

def __needBalance(self, t):
  type = self.ILLEGAL
  if t.left.height + 2 <= t.right.height:
    if t.right.left.height <= t.right.right.height:
      type = self.RR
    else:
      type = self.RL
  elif t.left.height >= t.right.height+2:
    if t.left.left.height >= t.left.right.height:
      type = self.LL
    else:
      type = self.LR
  else:
    type = self.NO_NEED
  return type

#기타
def isEmpty(self):
  return self.__root == self.NIL

def clear(self):
  self.__root = self.NIL
