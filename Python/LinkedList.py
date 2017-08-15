class Node:
    def __init__(self, data):
        self.data = data;
        self.next = None;

class LinkList:
    def __init__(self):
        self.head = None;
    
    def push(self, new_data):
        new_node = Node(new_data)
        new_node.next = self.head
        self.head = new_node
    
    def append(self, new_data):
        new_node = Node(new_data)
        if self.head == None:
            self.head = new_node
            return
        last = self.head
        while(last.next):
            last = last.next
        last.next = new_node
    
    def print_list(self):
        temp = self.head
        while(temp):
            print temp.data
            temp = temp.next
            
if __name__ == '__main__':
    llist = LinkList()
    llist.append(5)
    llist.append(5)
    llist.append(5)
    llist.append(5)
    llist.append(5)
    llist.print_list()

    