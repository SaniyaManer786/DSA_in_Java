class Solution {
    public boolean isPalindrome(int n) {
        int original = n;
        int ans = 0;

        n = Math.abs(n);

        while (n > 0) {
            int digit = n % 10;
            ans = ans * 10 + digit;
            n = n / 10;
        }

        return Math.abs(original) == ans;
    }
}
