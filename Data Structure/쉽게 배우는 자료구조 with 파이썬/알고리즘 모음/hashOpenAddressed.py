class HashOpenAddressed:
  def __init__(self, n):
    self.__table = [None for i in range(n)]
    self.__numItems = 0
    self.__DELETED = -54321
    
  def __hash(self, i, x):
    return (x+i) % len(self.__table)
  
  def insert(self, x):
    if self.__numItems == len(self.__table):
      "에러 처리"
    else:
      for i in range(len(self.__table)):
        slot = self.__hash(i, x)
        if self.__table[slot] == None or self.__table[slot] == self.__DELETED:
          self.__table[slot] = x
          self.__numItems += 1
          break
          
  NOT_FOUND = -12345
  
  def search(self, x):
    for i in range(len(self.__table)):
      slot = self.__hash(i, x)
      if self.__table[slot] == None:
        return HashOpenAddressed.NOT_FOUND
      if self.__table[slot] == x:
        return slot
    return self.__NOT_FOUND
  
  def delete(self, x):
    for i in range(len(self.__table)):
      slot = self.__hash(i, x)
      if self.__table[slot] == None:
        break
      if self.__table[slot] == x:
        self.__table[slot] = self.__DELETED
        self.__numItems -= 1
        break
