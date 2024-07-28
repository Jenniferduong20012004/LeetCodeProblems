public class Length_of_Last_Word {
    public static int lengthOfLastWord(String s) {
        int lastlen =0;
        int len = s.length ()-1;
        for (int i =len; i >= 0; i--){
            if (s.charAt(i) == ' '){
                if (lastlen !=0){
                    return lastlen;
                }
            }
            if (s.charAt(i) != ' '){
                lastlen +=1;
            }
        }
        return lastlen;
    } public static void main (String [] args){
        System.out.println(lengthOfLastWord("Nhu is so beautiful                  "));
    }
}
