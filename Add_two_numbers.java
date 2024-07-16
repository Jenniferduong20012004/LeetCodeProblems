import java.util.LinkedList;
import java.util.Queue;
import java.util.Stack;

class ListNode {
     int val;
     ListNode next;
     ListNode() {}
     ListNode(int val) { this.val = val; }
     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
     void display (){
         System.out.print(val);
         System.out.print (" ");
         ListNode nex = this.next;
         if (nex != null){
             nex.display();
         }
     }
}
public class Add_two_numbers {
    public static void main (String [] args){
        ListNode l = new ListNode(3);
        ListNode p = new ListNode(4,l);
        ListNode k = new ListNode(2,p);
        ListNode m = new ListNode(4);
        ListNode q = new ListNode(6,m);
        ListNode r = new ListNode(5,q);
        ListNode result = addTwoNumbers(k,r);
        result.display();
        System.out.println();
        ListNode z = new ListNode(9);
        ListNode x = new ListNode(9);
        ListNode c = new ListNode(9,x);
        ListNode v = new ListNode(9,c);
        ListNode b = new ListNode(9,v);
        ListNode n = new ListNode(9,b);
        ListNode a= new ListNode(9,n);
        ListNode s = new ListNode(9,a);
        ListNode d = new ListNode(9,s);
        ListNode f = new ListNode(9,d);
        ListNode g = new ListNode(1,f);
        ListNode result1 = addTwoNumbers(g,z);
        result1.display();





    }
    public static ListNode addTwoNumbers(ListNode l1, ListNode l2) {
        Queue<Integer> queue = new LinkedList<>();
        queue.add(l1.val);
        ListNode r = l1.next;
        while (r !=null){
            queue.add(r.val);
            r = r.next;
        }
        Queue <Integer> queue1 = new LinkedList<>();
        queue1.add (l2.val);
        ListNode r2 = l2.next;
        while (r2 !=null){
            queue1.add (r2.val);
            r2 = r2.next;
        }
        Queue <Integer> stackRes = new LinkedList<>();
        int sodu=0;
        while (!queue.isEmpty() || !queue1.isEmpty() || sodu !=0){
            int a=0, b=0;
            if (!queue.isEmpty()){
                a = queue.remove();
            }
            if(!queue1.isEmpty()){
                b = queue1.remove();
            }
            int cong = a +b+ sodu;
            int add = cong %10;
            stackRes.add(add);
            sodu= (cong-add)/10;
        }
        ListNode result = new ListNode(stackRes.remove());
        while (!stackRes.isEmpty()){
            ListNode head = result;
            while (head.next !=null){
                head = head.next;
            }
            head.next = new ListNode(stackRes.remove());
        }
        return result;
    }
}
