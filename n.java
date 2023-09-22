 class abc {

  static int a = 10;

  static void display() {
    System.out.println("Hello world!" + a);
  }
}

class n {

  public static void main(String[] args) {
    abc objAbc = new abc();
    objAbc.display();
  }
}
