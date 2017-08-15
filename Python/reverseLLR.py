class Node:
    def __init__(self, data = 0):
        self.data = data
        self.next = None

class LinkedList:
    def __init__(self):
        self.head = None

    def insert(self, data):
        if self.head is None:
            head = Node(data)
            return head
        temp = head
        while temp.next is not None:
            temp = temp.next
        temp.next = Node(data)
        return head

    def traverse(self, head):
        temp = head
        while temp is not None:
            print (temp.data)
            temp = temp.next
    
    def reverseUtil(self, cur, prev):
        if cur.next is None:
            self.head = cur
            cur.next = prev
            return
        next = cur.next
        cur.next = prev
        self.reverseUtil(next,cur)
    def reverseLL(self):
        if self.head is None:
            return
        self.reverseUtil(self.head, None)

    def bind(self, head, temp):
        temp = head
        temp = temp.next
        
if __name__ == '__main__':
    LinkList = LinkedList()
    # head = Node(1)
    LinkList.insert(2)
    LinkList.insert(3)
    LinkList.traverse()
    print ("--reve--")
    # temp = Node()
    LinkList.reverseLL()
    LinkList.traverse()
    