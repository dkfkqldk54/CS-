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
