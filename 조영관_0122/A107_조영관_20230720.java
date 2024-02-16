import java.util.Scanner;

class Main {
  public static void main(String[] args) {
    Main stepC = new Main();
    stepC.c11();
  }

  void c11() {
    Scanner s = new Scanner(System.in);
    int a = s.nextInt();
    int b = s.nextInt();
    int sum=0;
    int check=0;
    
    for (int i=a; i<=b; i++) {
      check=0;
      for (int j=1;; j++){
        check+=j;
        if (check>=i) {
          sum+=j;
          break;
        }
      }
    }
    System.out.print(sum);
  }
}