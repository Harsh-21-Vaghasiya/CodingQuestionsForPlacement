// Cpp code

// #include<iostream>
// using namespace std;
// int main()
// {
// string str1="helloharsh";
// string str2="har";
// string str3;

// int num=str1.find(str2);

// str3=str1.substr(0,num);
// str3=str3+str1.substr(num+str2.length());
// cout<<str3;
// }

// java code

class remove_substring {

  public static void main(String args[]) {
    String s1 = "helloharsh";
    String s2 = "har";
    String s3[];

    int index = s1.indexOf(s2);
    s3 = s1.split(s2);

    System.out.println(s3[0] + s3[1]);
  }
}
