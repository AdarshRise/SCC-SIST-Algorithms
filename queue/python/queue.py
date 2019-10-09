# add your code here
class Queue:
    def __init__(self):
        self.items = []

    def isEmpty(self):
        return self.items == []

    def enqueue(self, item):
        self.items.append(item)

    def dequeue(self):
        return self.items.pop(0)

q = Queue()

while True:
    request = input('''Queue functions:
            1 E. Enqueue one element; 
            2. Dequeue one element;
            3. Finish the program;
            What do you like to do?''').split()
    if request[0] == '1':
        q.enqueue(request[1])
    elif request[0] == '2':
        if q.isEmpty():
            print("Queue is empty")
        else:
            print("Dequeued value:", q.dequeue())
    elif request[0] == '3': 
        print(q.items)
        break
