// Source: https://www.geeksforgeeks.org/linked-list-set-2-inserting-a-node/

// Linked List Class
class LinkedList {
    Node head; // head of list

    /* Node Class */
    class Node {
        int data;
        Node next;

        // Constructor to create a new node
        Node(int d) {
            data = d;
            next = null;
        }
    }

    /*
     * Appends a new node at the end. This method is
     * defined inside LinkedList class shown above
     */
    public void ON_165(int new_data) {
        /*
         * 1. Allocate the Node &
         * 2. Put in the data
         * 3. Set next as null
         */
        Node new_node = new Node(new_data);

        /*
         * 4. If the Linked List is empty, then make the
         * new node as head
         */
        if (head == null) {
            head = new Node(new_data);
            return;
        }

        /*
         * 4. This new node is going to be the last node, so
         * make next of it as null
         */
        new_node.next = null;

        /* 5. Else traverse till the last node */
        Node last = head;
        while (last.next != null)
            last = last.next;

        /* 6. Change the next of last node */
        last.next = new_node;
        return;
    }
}
