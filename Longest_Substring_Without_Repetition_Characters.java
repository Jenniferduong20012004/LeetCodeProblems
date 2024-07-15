import java.util.HashSet;
import java.util.Set;

public class Longest_Substring_Without_Repetition_Characters {
    public static int lengthOfLongestSubstring(String s) {
        Set<Character> set = new HashSet<>();
        int i=0, j =0;
        int max =0;
        while (i < s.length()){
            char a = s.charAt(i);
            while (set.contains(a)){
                set.remove (s.charAt(j));
                j++;
            }
            set.add(a);
            if (set.size()>max)
                max = set.size();
            i+=1;
        }
        return max;

    }
    public static void main (String [] args){
        String i = "abcabcbb";

        System.out.print (lengthOfLongestSubstring(i));
    }
}