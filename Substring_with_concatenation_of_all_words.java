import java.util.*;

public class Substring_with_concatenation_of_all_words{
    public static List<Integer> findSubstring(String s, String[] words) {
        int i=0, j =0;
        int len = words[0].length();
        List<String> set = new ArrayList<>(Arrays.asList(words));
        //System.out.println(set);
        List <Integer> numIndex = new ArrayList<>();
        List <String> result = new ArrayList<>(Arrays.asList(words));
        while (i < s.length()){
            String as = s.substring(i, i+len);
            if (set.contains(as)){
                int counter =1;
                while (!result.contains(as)){
                    if (counter ==1){
                        if (result.isEmpty()){
                            numIndex.add(i-len*words.length);
                        }
                    }
                    result.add(s.substring(j, j+len));
                    j+=len;
                    counter+=1;
                }
                result.remove(as);
                i+=len;
            }
            else{
                if (result.isEmpty()){
                    numIndex.add (i-len*words.length);
                }
                result.clear();
                result.addAll(Arrays.asList(words));
                j =i;
                if (i+1 <s.length()-len) {
                    i += 1;
                }
                else{
                    break;
                }
            }
        }
        if (result.isEmpty()){
            numIndex.add (j);
        }
        return numIndex;
    }
    public static void main (String [] args){
        String s = "lingmindraboofooowingdingbarrwingmonkeypoundcake";
        String [] strings = {"fooo","barr","wing","ding","wing"};
        String i = "wordgoodgoodgoodbestword";
        String [] st = {"word","good","best","good"};

        System.out.println (findSubstring(i,st));
        System.out.println (findSubstring(s,strings));
    }
}