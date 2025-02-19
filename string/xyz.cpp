#include <bits/stdc++.h>  
 using namespace std;


class DoublyLinkedListNode
{
public:
    int data;
    DoublyLinkedListNode *next;
    DoublyLinkedListNode *prev;

    DoublyLinkedListNode(int node_data)
    {
        this->data = node_data;
        this -> next = nullptr;
        this->prev = nullptr;
    }
};
class
    DoublyLinkedList
{
public:
    DoublyLinkedListNode *head;
    DoublyLinkedListNode *tail;

    DoublyLinkedList()
    {
        this->head = nullptr;
        this -> tail = nullptr;
            
    }
    void insert_node(int node_data)
    {
        DoublyLinkedListNode *node = new DoublyLinkedListNode(node_data);
        if (!this->head)
        {
            this -> head = node;
        }
        else
        {
            this->tail->next = node;
            node->prev = this->tail;
        }
        this->tail =
            node;
    }
};
void print_doubly_linked_list(DoublyLinkedListNode *node, string sep, ofstream &fout)
{
    while (node)
    {
        cout << node->data;
        node = node -> next;
               
        if (node)
        {
            cout << sep;
        }
    }
}
void free_doubly_linked_list(DoublyLinkedListNode *node)
{
    while (node)
    {
        DoublyLinkedListNode *temp = node;
        node = node->next;
        free(temp);
    }
}
DoublyLinkedListNode *reverse(DoublyLinkedListNode *head)
{
    // Complete this function
    // Do not write the main method.
    DoublyLinkedListNode *current = head;
    DoublyLinkedListNode *temp = NULL;
    while (current != NULL)
    {
        temp = current->prev;
        current->prev = current->next;
        current->next = temp;
        current = current -> prev;
                 
    }
    if (temp != NULL)
        head = temp->prev;
    return head;
}
int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));
    int t;
    cin >> t;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int t_itr = 0; t_itr < t; t_itr++)
    {
        DoublyLinkedList *llist = new DoublyLinkedList();
        int llist_count;
        cin >> llist_count;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        for (int i = 0; i < llist_count; i++)
        {
            int llist_item;
            cin >> llist_item;
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            llist -> insert_node(llist_item);
        }

        DoublyLinkedListNode *llist1 = reverse(llist->head);
        print_doubly_linked_list(llist1, " ", fout);
        fout << "\n";
        free_doubly_linked_list(llist1);
    }
    fout.close();
    return 0;
}
