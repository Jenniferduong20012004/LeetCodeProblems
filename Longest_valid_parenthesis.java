import java.util.Stack;

public class Longest_valid_parenthesis {
    public static int longestValidParentheses(String s) {
        if (s.length()==1){
            return 0;
        }
        Stack<Character> stack = new Stack<>();
        int result =0;
        int finalResult =0;
        for (int i =0; i < s.length(); i++) {
            char a = s.charAt(i);
            if (a == '('){
                stack.push(a);
            }
            else{
                if (stack.isEmpty()){
                    if (result > finalResult){
                        finalResult = result;
                    }
                    result =0;
                }
                else{
                    stack.pop();
                    result +=2;
                }
            }
        }
        if (result > finalResult){
            finalResult = result;
        }
        return  finalResult;
    }
    public static void main (String [] args){
        String i = ")()())";
        String i2 = "(()";
        System.out.println(longestValidParentheses(i));
        System.out.println(longestValidParentheses(i2));
    }
}
