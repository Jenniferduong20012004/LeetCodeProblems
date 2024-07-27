public class Palindrome_Number {
    public static boolean isPalindrome(int x) {
        if (x < 0) {
            return false;
        } else {
            int reverse = 0;
            for (int x1 = x; x1 != 0; x1 /= 10) {
                reverse *= 10;
                reverse += x1 % 10;
            }

            if (reverse == x) {
                return true;
            } else {
                return false;
            }
        }
    }
    public static void main (String [] args){
        System.out.println(isPalindrome(191));
        System.out.println(isPalindrome(920));
    }
}
