public class Middle_of_the_linked_list {
    public static ListNode middleNode(ListNode head) {
        if (head == null){
            return head;
        }
        ListNode slow = head;
        ListNode fast = head;
        while (fast != null && fast.next != null){
            fast = fast.next.next;
            slow = slow.next;
        }
        return slow;
    }
    public static void main (String [] args){
        ListNode l = new ListNode(6);
        ListNode p = new ListNode(5,l);
        ListNode k = new ListNode(8,p);
        ListNode m = new ListNode(8,k);
        ListNode q = new ListNode(5,m);
        ListNode r = new ListNode(6,q);
        ListNode res = middleNode(r);
        res.display();
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
        ListNode result = middleNode(g);
        result.display();
    }
}
