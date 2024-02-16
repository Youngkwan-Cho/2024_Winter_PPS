import java.util.*;

class Main {
  public static void main(String[] args) {
    Main stepC = new Main();
    stepC.c11();
  }

  void c11() {
    Scanner s = new Scanner(System.in);
    int number = s.nextInt();
    char word;
    int sum[] = new int[number];
    int check;
    
    for (int i = 0; i < number; i++) {
      sum[i]=0;
      check=0;
      String str = s.next();
      for (int j = 0; j < str.length(); j++) {
        if (str.charAt(j) == '\n') break;
        word = str.charAt(j);
        if (word == 'O') {
          check++;
          sum[i]+=check;
        }
        else check=0;
      }
    }
    for (int i=0; i <number ; i++) {
      System.out.print(sum[i] + "\n");
    }
  }
}