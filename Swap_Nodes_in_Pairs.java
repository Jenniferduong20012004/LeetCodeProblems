public class Swap_Nodes_in_Pairs {
    public static ListNode swapPairs(ListNode head) {
        if (head == null){
            return head;
        }
        ListNode result = head;
        int i =0;
        int truoc =0;
        while (result.next!= null){
            if (i%2==0){
                truoc = result.val;
                result.val = result.next.val;
            }
            else{
                result.val = truoc;
            }
            i+=1;
            result = result.next;
        }
        if (i %2 !=0){
            result.val = truoc;
        }
        return head;
    }
    public static void main (String [] args){
        ListNode l = new ListNode(4);
        ListNode p = new ListNode(3,l);
        ListNode k = new ListNode(2,p);
        ListNode m = new ListNode(1,k);
        ListNode result = swapPairs(m);
        result.display();
        System.out.println();
        ListNode x = new ListNode(230);
        ListNode c = new ListNode(123,x);
        ListNode v = new ListNode(38,c);
        ListNode result1 = swapPairs(v);
        result1.display();

    }
}
