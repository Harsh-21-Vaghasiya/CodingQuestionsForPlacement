import javax.sql.rowset.spi.SyncResolver;

class reverse_word_in_string {

  String reverse_word(String word) {
    String s2 = "";
    for (int i = word.length() - 1; i >= 0; i--) {
      s2 = s2 + word.charAt(i);
    }

    return s2;
  }

  public static void main(String[] args) {
    reverse_word_in_string ss = new reverse_word_in_string();
    String s = "Hello Harsh";

    String[] arr;
    arr = s.split(" ");

    String s2 = "";

    for (int i = 0; i < arr.length; i++) {
      System.out.println(ss.reverse_word(arr[i]));
    }
    for (int i = 0; i < arr.length; i++) {
      s2 = " " + ss.reverse_word(arr[i]) + s2;
    }

    System.out.println(s2);
  }
}
