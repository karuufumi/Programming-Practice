#include <iostream>
using namespace std;
struct node
{
  int data;
  node *next;
};

node* createLinkedList(int n) {
    if (n <= 0) return nullptr;

    int x;
    cin >> x;

    node* head = new node;
    head->data = x;
    head->next = nullptr;

    node* tail = head;

    for (int i = 1; i < n; i++) {
        cin >> x;

        node* newNode = new node;
        newNode->data = x;
        newNode->next = tail;

        //tail->next = newNode;
        //tail = newNode;
        tail = newNode;
    }

    return tail;
}
void print(node *head)
{
  while (head != nullptr)
  {
    cout << head->data << endl;
    head = head->next;
  }
}
int main()
{
  int n = 0;
  cin >> n;
  if (n > 0)
  {
    node *head = createLinkedList(n);
    print(head);
  }
  else
  {
    cout << "Invalid n" << endl;
  }
  return 0;
}