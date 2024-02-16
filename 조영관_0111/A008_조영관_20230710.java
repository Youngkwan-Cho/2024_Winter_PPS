import java.util.Scanner;

class Main {
  public static void main(String[] args) {
    Main stepC = new Main();
    stepC.c11();
  }

  void c11() {
    Scanner s = new Scanner(System.in);
    int test_case = s.nextInt();
    int a[][] = new int[test_case][1000];
    int total = 0;
    int count;
    int student_number[] = new int[test_case];
    double average[] = new double[test_case];
    double percentage[] = new double[test_case];

    for (int i = 0; i < test_case; i++) {
      total = 0;
      student_number[i] = s.nextInt();
      for (int j = 0; j < student_number[i]; j++) {
        a[i][j] = s.nextInt();
        total += a[i][j];
      }
      average[i] = total / student_number[i];
    }

    for (int i = 0; i < test_case; i++) {
      count = 0;
      for (int j = 0; j < student_number[i]; j++) {
        if (a[i][j] > average[i])
          count++;
      }
      percentage[i] = (double) 100 * count / student_number[i];
    }

    for (int i = 0; i < test_case; i++) {
      System.out.printf("%.3f", Math.round(percentage[i] * 1000) / 1000.00);
      System.out.print("%\n");
    }
  }
}