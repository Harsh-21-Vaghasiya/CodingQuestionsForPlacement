//  static method not overridden
//  static method ovelodeing possible 


public class e {

  class a {

    public static void display() {
      System.out.println("Hello parent!");
    }
  }

  class b extends a {

    public static void display() {
      System.out.println("Hello child!");
      System.out.println("Hello child!");
    }
  }

  public static void main(String[] args) {
    b obj = new b();
    obj.display();
  }
}

// public class e {

//   class ParentClass {

//     //we cannot override the display() method
//     public static void display() {
//       System.out.printf("display() method of the parent class.");
//     }
//   }

//   //child class
//   class ChildClass extends ParentClass {

//     //the same method also exists in the ParentClass
//     //it does not override, actually it is method hiding
//     public static void display() {
//       System.out.println("Overridden static method in Child Class in Java");
//     }
//   }

//   public static void main(String args[]) {
//     ChildClass pc = new ChildClass();
//     //calling display() method by parent class object
//     pc.display();
//   }
// }
// // //parent class
