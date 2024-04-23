#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int data, Node *next)
    {
        this->data = data;
        this->next = next;
    }
    Node(int data)
    {
        this->data = data;
        this->next = nullptr;
    }
};

Node *array_to_llist(vector<int> arr)
{
    Node *head = new Node(arr[0]);
    Node *iterator = head;
    for (int i = 1; i <= arr.size() - 1; i++)
    {
        iterator->next = new Node(arr[i]);
        iterator = iterator->next;
    }
    return head;
}

void print(Node *head)
{
    Node *iterator = head;
    while (iterator)
    {
        cout << iterator->data << "->";
        iterator = iterator->next;
    }
    cout << endl;
}

int length(Node *head)
{
    Node *iterator = head;
    int count = 0;
    while (iterator)
    {
        count++;
        iterator = iterator->next;
    }
    return count;
}

bool search(Node *head, int k)
{
    Node *iterator = head;
    while (iterator)
    {
        if (iterator->data == k)
            return true;
        iterator = iterator->next;
    }
    return false;
}

Node *insertBeginning(Node *head, int num)
{
    return new Node(num, head);
}

Node *deleteBeginning(Node *head)
{
    if (head == NULL)
        return head;
    Node *temp = head->next;
    free(head);
    return temp;
}

Node *insertLast(Node *head, int num)
{
    if(head==NULL) return new Node(num);
    Node *iterator = head;
    while (iterator->next!= nullptr)
    {
        iterator = iterator->next;
    }
    iterator->next = new Node(num);
    return head;
}

Node *deleteLast(Node *head)
{
    if (head == NULL || head->next == NULL)
        return head;
    Node *iterator = head;
    while (iterator->next->next != nullptr)
    {
        iterator = iterator->next;
    }
    free(iterator->next);
    iterator->next = nullptr;
    return head;
}

// TODO: insetion at middle. deletion at middle

int main()
{
    vector<int> arr = {1, 3, 5, 7, 8};
    Node *head = array_to_llist(arr);
    print(head);
    cout<<"Length of llist is "<<length(head)<<endl;
    head = deleteBeginning(head);
    head = insertBeginning(head, 47);
    head = deleteLast(head);
    head = insertLast(head, 63);
    print(head);
    return 0;
}