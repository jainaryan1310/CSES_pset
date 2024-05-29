import sys


class linked_list:
    x = 0
    prev = None
    next = None

    def __init__(self, x: int):
        self.x = x
        return

    def set_prev(self, prev):
        self.prev = prev
        return

    def set_next(self, next):
        self.next = next
        return

    def pop(self):
        p = self.prev
        n = self.next
        p.next = n
        n.prev = p
        return


def main(n: int):

    arr = [linked_list(1)]
    for i in range(1, n):
        a = linked_list(i+1)
        arr.append(a)
        a.set_prev(arr[i-1])
        arr[i-1].set_next(arr[i])

    arr[n-1].set_next(arr[0])
    arr[0].set_prev(arr[n-1])

    a = arr[0]
    a = a.next
    print(a.x, end="")
    a.pop()
    b = a.next
    a.next = None
    a.prev = None
    a = b

    while a.next is not None:
        a = a.next
        print(" ", end="")
        print(a.x, end="")
        a.pop()
        b = a.next
        a.next = None
        a.prev = None
        a = b

    return


if __name__ == "__main__":
    input = sys.stdin
    n = int(input.readline())
    main(n)
