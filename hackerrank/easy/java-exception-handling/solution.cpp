
        if (n == 0 && p == 0) {
            throw new Exception("n and p should not be zero.");
        }

        long result = 1;

        for (int i = 0; i < p; i++) {
            result *= n;
        }

        return result;
    }
}

public class Solution {

    public static void main(String[] args) {

        Scanner in = new Scanner(System.in);
        MyCalculator calculator = new MyCalculator();

        while (in.hasNextInt()) {
            int n = in.nextInt();
            int p = in.nextInt();

            try {
                System.out.println(calculator.power(n, p));
            } catch (Exception e) {
                System.out.println(e);
            }
        }
    }
}
        }