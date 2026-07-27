class Solution {
public:
    double power(double x, long n) {
        // base case
        if (n == 0)
            return 1.0;

        double half = power(x, n / 2);

        if (n % 2 == 0) {
            return half * half;
        } else {
            return x * half * half;
        }
    }

    double myPow(double x, int n) {
        if (x == 0)
            return 0.0;

        long binForm = n;

        if (n < 0) {
            x = 1 / x;
            binForm = -(long)n;
        }

        return power(x, binForm);
    }
};