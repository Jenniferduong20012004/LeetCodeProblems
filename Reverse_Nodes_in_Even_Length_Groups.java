import java.util.LinkedList;
import java.util.Queue;
import java.util.Stack;

public class Reverse_Nodes_in_Even_Length_Groups {
    public static void main (String [] args){
        ListNode l = new ListNode(3);
        ListNode p = new ListNode(4,l);
        ListNode k = new ListNode(2,p);
        ListNode m = new ListNode(100,k);
        ListNode q = new ListNode(6,m);
        ListNode r = new ListNode(5,q);
        ListNode result = reverseEvenLengthGroups(r);
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
        ListNode result1 = reverseEvenLengthGroups(g);
        result1.display();





    }
    public static ListNode reverseEvenLengthGroups(ListNode head) {
        int i =2;
        if (head == null){
            return head;
        }
        Queue<Integer> queue = new LinkedList<>();
        while (head != null){
            queue.add (head.val);
            head = head.next;
        }
        ListNode result = new ListNode(queue.remove());
        ListNode node = result;
        while (!queue.isEmpty()){
            if (queue.size()>= i){
                if (i %2!=0){
                    for (int j =0; j < i; j++){
                        node.next = new ListNode();
                        node = node.next;
                        node.val = queue.remove();
                    }
                }
                else{
                    Stack<Integer> stack = new Stack <>();
                    for (int j =0; j < i; j++){
                        stack.push (queue.remove());
                    }
                    for (int j =0; j < i; j++){
                        node.next = new ListNode();
                        node = node.next;
                        node.val = stack.pop();
                    }
                }
                i+=1;
            }
            else{
                i = queue.size();
                if (i %2!=0){
                    for (int j =0; j < i; j++){
                        node.next = new ListNode();
                        node = node.next;
                        node.val = queue.remove();
                    }
                }
                else{
                    Stack <Integer> stack = new Stack <>();
                    for (int j =0; j < i; j++){
                        stack.push (queue.remove());
                    }
                    for (int j =0; j < i; j++){
                        node.next = new ListNode();
                        node = node.next;
                        node.val = stack.pop();
                    }
                }
            }
        }
        return result;
    }
}
