import java.lang.*;
import java.util.*;

public class static_variable {

  static int a = 10;

  void display() {
    System.out.println(this.a);
  }

  public static void main(String[] args) {
    static_variable a = new static_variable();
    a.display();
  }
}
