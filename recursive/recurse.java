
/*Recursion in Java*/

public class Main {
  public static void main(String[] args) {
    for(int i=0;i<1000000;i++)
    System.out.println(sum(100));
  }

  public static int sum(int k) {
    if (k > 0) {
      return k + sum(k - 1);
    } else {
      return 0;
    }
  }
}
