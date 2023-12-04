/************************************************************

    Following is the linkedList class structure:

    class Node {
    public:
        int data;
        Node *next;

        Node(int val) {
            this->data = val;
            next = NULL;
        }
        ~Node() {
            if (next != NULL) {
                delete next;
            }
        }
};

************************************************************/
#include <cmath>
int binaryToInteger(int n, Node *head) 
{
    int sum=0,a=n-1;
    Node *temp=head;
    while(n>0)
    {
        //cout<<temp->data<<endl;
        sum+=(temp->data*(pow(2,a)));
        a--;
        temp=temp->next;
        n--;
    }
    return sum;
}
