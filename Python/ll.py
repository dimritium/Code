class Node(object):
    def __init__(self, data=None, next=None):
        self.data = data;
        self.fwd = next;
    def get_data(self):
        return self.data;
    def get_next(self):
        return self.next
    def set_next(self, next):
        self.next = next
    def __str__(self):
        return str(self.data)

node = Node(5)
sec = Node(10)
third = Node(15)
node.set_next(sec)
sec.set_next(third)
print sec;