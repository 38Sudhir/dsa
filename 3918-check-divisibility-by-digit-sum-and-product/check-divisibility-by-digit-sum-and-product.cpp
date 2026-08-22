class Solution {
public:
    bool checkDivisibility(int n) {
        int sum = 0, prod = 1, rem;
        int x;
        int original = n;

        while (n) {
            rem = n % 10;
            sum = sum + rem;
            prod = prod * rem;
            n = n / 10;
        }
        x = sum + prod;

        if (original % x == 0)
            return true;
        else
            return false;

        return -1;
    }
};