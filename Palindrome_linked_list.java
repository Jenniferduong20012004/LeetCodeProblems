import java.util.ArrayList;
import java.util.List;

public class Palindrome_linked_list {
    public static boolean isPalindrome(ListNode head) {
        if (head == null){
            return false;
        }
        List<Integer> list = new ArrayList<>();
        while (head != null){
            list.add(head.val);
            head = head.next;
        }
        int len = list.size()/2;
        for (int i=0; i < len; i++){
            if (list.get(i) != list.get (list.size()-i-1)){
                return false;
            }
        }
        return true;

    }
    public static void main (String [] args){
        ListNode l = new ListNode(6);
        ListNode p = new ListNode(5,l);
        ListNode k = new ListNode(8,p);
        ListNode m = new ListNode(8,k);
        ListNode q = new ListNode(5,m);
        ListNode r = new ListNode(6,q);
        System.out.println(isPalindrome(r));
        ListNode z = new ListNode(1);
        ListNode x = new ListNode(2,z);
        ListNode c = new ListNode(3,x);
        ListNode v = new ListNode(10,c);
        ListNode b = new ListNode(12,v);
        ListNode n = new ListNode(102,b);
        ListNode a= new ListNode(2002,n);
        ListNode s = new ListNode(20321,a);
        ListNode d = new ListNode(309821,s);
        ListNode f = new ListNode(400000,d);
        ListNode g = new ListNode(4000001,f);
        System.out.println(isPalindrome(g));
    }
}
