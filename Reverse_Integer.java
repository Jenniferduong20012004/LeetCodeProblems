import java.util.Stack;

public class Reverse_Integer {
    public static int reverse(int x) {
        if (x >= Integer.MAX_VALUE|| x <= Integer.MIN_VALUE){
            return 0;
        }
        int result =0;
        int i =0;
        Stack <Integer> stack = new Stack <>();
        while (x !=0){
            int b = x % 10;
            stack.push (b);
            x-=b;
            x/=10;
        }
        while (!stack.isEmpty()){
            result += stack.pop()* Math.pow (10,i);
            if (result >= Integer.MAX_VALUE|| result <= Integer.MIN_VALUE){
                return 0;
            }
            i+=1;
        }
        return result;
    }
    public static void main (String [] args){
        System.out.println(reverse(1534236469));
    }
}
