class Node:
    def __init__(self,data):
        self.data=data
        self.next=None

class LinkedList:
    def __init__(self):
        self.head=None

    def insert_end(self,val):
        newnode=Node(val)
        if not self.head:self.head=newnode;return
        temp=self.head
        while temp.next:temp=temp.next
        temp.next=newnode

    def nth_from_end(self,n):
        fast=slow=self.head
        for _ in range(n):
            if not fast:return -1
            fast=fast.next
        while fast:
            fast=fast.next
            slow=slow.next
        return slow.data

ll=LinkedList()
ll.insert_end(10); ll.insert_end(20); ll.insert_end(30); ll.insert_end(40)
print(ll.nth_from_end(2))
print(ll.nth_from_end(5))
