public class Remove_node_from_link_list {
    public static ListNode removeNodes(ListNode head) {
        if (head == null || head.next == null){
            return head;
        }
        ListNode check = head;
        while (check != null){
            ListNode nextNode = check.next;
            if (nextNode.next != null){
                ListNode n = nextNode.next;

            }
        }
        return check;
    }
    public static void main (String [] args){
        ListNode l = new ListNode(6);
        ListNode p = new ListNode(5,l);
        ListNode k = new ListNode(8,p);
        ListNode m = new ListNode(3,k);
        ListNode q = new ListNode(2,m);
        ListNode r = new ListNode(1,q);
        ListNode result = removeNodes(r);
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
        ListNode result1 = removeNodes(g);
        result1.display();    }

}
