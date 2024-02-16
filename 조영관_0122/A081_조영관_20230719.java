import java.util.Scanner;

class Main {
  public static void main(String[] args) {
    Main stepC = new Main();
    stepC.c11();
  }

  void c11() {
    Scanner s = new Scanner(System.in);
    int set = s.nextInt();
    int a[][]=new int[set][10];
    for (int i=0; i<a.length; i++) {
      for (int j=0; j<10; j++) {
        a[i][j]=s.nextInt();
      }
    }
    for (int i=0; i<a.length; i++) {
      for (int j=0; j<10; j++) {
        for (int k=0; k<j; k++) {
          if (a[i][k]>a[i][j]) {
            int temp=a[i][k];
            a[i][k]=a[i][j];
            a[i][j]=temp;
          }
        }
      }
    }
    for (int i=0; i<a.length; i++) {
      System.out.print(a[i][7] + "\n");
    }
  }
}