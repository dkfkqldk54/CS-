from DS.list.circularLinkedList import *
from DS.list.listNode import *

class chainedHashTable:
  def __init__(self, n):
    self.__table = [circularLinkedList() for i in range(n)]
    self.__numItems = 0
    
  def __hash(self, x):
    return x % len(self.__table)
  
  def insert(self, x):
    slot = self.__hash(x)
    self.__table[slot].insert(0, x)
    self.__numItems += 1
    
  def search(self, x):
    slot = self.__hash(x)
    if self.__table[slot].isEmpty():
      return None
    else:
      head = prev = self.__table[slot].getNode(-1) # 더미 헤드
      curr = prev.next # 0번 노드
      while curr != head:
        if curr.item == x:
          return curr
        else:
          prev = curr; curr = curr.next
      return None
    
  def delete(self, x):
    slot = self.__hash(x)
    success = self.__table[slot].remove(x)
    if success != None:
      self.__numItems -= 1
      
  def isEmpty(self):
    return self.__numItems == 0
  
  def clear(self):
    for i in range(len(self.__table)):
      self.__table[i] = circularLinkedList()
    self.__numItems = 0
