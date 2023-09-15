import java.util.ArrayList;
import java.util.List;
import java.util.Map;
import java.util.function.Consumer;
import java.util.function.UnaryOperator;

class java_interview_question {

  //   String berry = "blue";

  //   public static void main(String[] args) {
  //     new java_interview_question().juicy("straw");
  //   }

  //   void juicy(String berry) {
  //     this.berry = "rasp";

  //     System.out.println(berry + "berry");
  //   }

  //   public static void main(String[] args) {
  //     List<String> dates = new ArrayList<String>();

  //     UnaryOperator<String> replaceslashes = date -> date.replace("/", "-");

  //     dates.replaceAll(replaceslashes);
  //     for (String date : dates) {
  //       System.out.println(date);
  //     }
  //   }

  public static void main(String[] args) {
    List<String> horses = new ArrayList<String>();
    horses.add(" Sea Biscuit ");
    System.out.println(horses.get(1).trim());
  }
}
