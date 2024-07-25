import java.util.Stack;

public class Valid_Parenthesis {
        public static boolean isValid(String s) {
            Stack<Character> stack = new Stack<>();
            for (int i =0; i < s.length(); i++){
                char a = s.charAt(i);
                if (a== '('|| a== '['|| a== '{'){
                    stack.push (a);
                }
                else if (a == ')'){
                    if ( stack.isEmpty()){
                        return false;
                    }
                    if ( stack.pop() != '('){
                        return false;
                    }
                }
                else if ( a == '}'){
                    if (stack.isEmpty()){
                        return false;
                    }
                    if ( stack.pop() != '{'){
                        return false;
                    }
                }
                else if (a == ']'){
                    if ( stack.isEmpty()){
                        return false;
                    }
                    if ( stack.pop() != '['){
                        return false;
                    }
                }
            }
            if (stack.isEmpty()){
                return true;
            }
            else{
                return false;
            }
        }
    public static void main (String [] args){
        String i = ")()())";
        String i2 = "(()";
        System.out.println(isValid(i));
        System.out.println(isValid(i2));
    }
}
