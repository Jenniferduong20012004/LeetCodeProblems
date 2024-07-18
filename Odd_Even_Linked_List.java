import java.util.ArrayList;
import java.util.List;

public class Odd_Even_Linked_List {
    public static ListNode oddEvenList(ListNode head) {
        List<Integer> array = new ArrayList<>();
        if (head == null){
            return head;
        }
        while (head != null){
            array.add (head.val);
            head = head.next;
        }
        ListNode result = new ListNode ( array.get(0));
        ListNode ne = result;
        for (int i =2; i < array.size(); i+=2){
            ne.next = new ListNode();
            ne= ne.next;
            ne.val = array.get(i);
        }
        for (int i =1; i < array.size(); i+=2){
            ne.next = new ListNode();
            ne= ne.next;
            ne.val = array.get(i);
        }
        return result;

    }
    public static void main (String [] args){
        ListNode l = new ListNode(3);
        ListNode p = new ListNode(4,l);
        ListNode k = new ListNode(2,p);
        ListNode m = new ListNode(100,k);
        ListNode q = new ListNode(6,m);
        ListNode r = new ListNode(5,q);
        ListNode result = oddEvenList(r);
        result.display();
        System.out.println();
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
        ListNode result1 = oddEvenList(g);
        result1.display();    }
}
