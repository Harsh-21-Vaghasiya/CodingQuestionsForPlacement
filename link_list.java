class ll {

  private int size = 0;

  class Node {

    String data;
    Node next;

    Node(String val) {
      this.data = val;
      this.next = null;
    }
  }

  private Node head;

  // To add a new node in first place

  void addFirst(String val) {
    Node newNode = new Node(val);

    if (head == null) {
      size++;
      head = newNode;
      return;
    } else {
      size++;
      newNode.next = head;
      head = newNode;
    }
  }

  // To add a new node in Last place

  void addLast(String val) {
    Node newNode = new Node(val);

    if (head == null) {
        size++;
      head = newNode;
      return;
    } else {
    size++;
      Node temp = head;
      while (temp.next != null) {
        temp = temp.next;
      }
      temp.next = newNode;
    }
  }

  // To display Link List

  void display() {
    Node temp = head;

    if (temp == null) {
      System.out.println("List Is Empty");
      return;
    } else {
      do {
        System.out.println(temp.data + " ");
        temp = temp.next;
      } while (temp != null);
    }
  }

  // To Delete First node
  void deleteFirst() {
    Node temp = head;
    if (temp == null) {
      System.out.println("List Is Empty");
      return;
    } else {
        size--;
      head = head.next;
    }
    return;
  }

  // To Delete Last node
  void deleteLast() {
    Node temp = head;
    if (temp == null) {
      System.out.println("List Is Empty");
      return;
    } else if (head.next == null) {
        size--;
      head = null;
      return;
    } else {
      while (temp != null) {
        if (temp.next.next == null) {
            size--;
          temp.next = null;
          return;
        }
      }
    }
    return;
  }


  void getsize()
  {
    System.out.println("Size is : "+ size);
  }

  public static void main(String[] args) {
    ll list = new ll();
    list.addFirst("Hello");
    list.addFirst("Harsh");
    list.addLast("Vaghasiya");
    list.display();
    list.deleteFirst();
    list.display();
    list.deleteLast();
    list.display();
    list.deleteLast();
    list.display();
    list.getsize();
  }
}
