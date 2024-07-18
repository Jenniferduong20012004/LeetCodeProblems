import java.util.LinkedList;
import java.util.Queue;

public class Remove_Linked_List_Elements {
    public static ListNode removeElements(ListNode head, int val) {
        if (head ==null){
            return head;
        }
        Queue<Integer> queue = new LinkedList<>();
        while (head!= null){
            if (head.val != val){
                queue.add (head.val);
            }
            head = head.next;
        }
        ListNode result = null;
        if (!queue.isEmpty()){
            result = new ListNode (queue.remove());
            ListNode node = result;
            while (!queue.isEmpty()){
                node.next = new ListNode();
                node = node.next;
                int a = queue.remove();
                node.val = a;
            }

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
        ListNode result = removeElements(r,100);
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
        ListNode result1 = removeElements(f,12);
        result1.display();    }
}
