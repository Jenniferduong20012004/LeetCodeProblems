public class Delete_Node_in_a_Linked_List {
    public static void deleteNode(ListNode node) {
        ListNode prev = node.next;
        while (prev!= null ){
            node.val = prev.val;
            node.next = prev.next;
            node = node.next;
            prev= prev.next;
        }
    }
    public static void main (String [] args){
        ListNode l = new ListNode(3);
        ListNode p = new ListNode(4,l);
        ListNode k = new ListNode(2,p);
        ListNode m = new ListNode(100,k);
        ListNode q = new ListNode(6,m);
        ListNode r = new ListNode(5,q);
        deleteNode(m);
        r.display();
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
        deleteNode(s);
        g.display();    }
}
