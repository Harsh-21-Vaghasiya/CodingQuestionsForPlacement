import java.util.*;

public class stack {

  ArrayList<Integer> stack = new ArrayList<Integer>();
  int top = 0;

  void push(int data) {
    stack.add(data);
    top++;
  }

  int pop() {
    int data = stack.indexOf(top-1);
    stack.remove(top-1);
    top--;
    return data;
  }

  void display()
  {
    for(int i = 0; i < top; i++)
    {
        System.out.print(stack.get(i)+" ");
    }
  }

  public static void main(String[] args) {
    stack s=new stack();
    s.push(10);
    s.push(20);
    s.push(30);
    s.pop();

    s.display();
    

  }
}
