// Danh sach lien ket don

// Khai bao Linked list

struct Node{
    int value;
    Node* next;
};

// in ra cac phan tu cua danh sach lien ket tren cung 1 dong cach nhau boi dau cach
void print(Node* head)
{
    for (Node *p = head; p != NULL; p = p->next)
    {
        cout << p->value << " ";
    }
}

void print(Node* head)
{
    while(head != NULL)
    {
        cout << head->value << " ";
        head = head->next;
    }
}



//Node* insertTail(Node* head, int value);
//thêm một node có giá trị là value vào cuối của danh sách liên kết.
//Hàm trả về con trỏ trỏ tới node đầu của danh sách liên kết sau khi đã thêm
Node* insertTail(Node* head, int value)
{
    // tao node moi
    Node* new_node = new Node();
    new_node->value = value;
    new_node->next=NULL;
    //tao node temp
    Node* temp = head;
    if(head == NULL)
    {
        head = new_node ;
    }
    else{
        while(temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = new_node;
    }
    return head;
}

//Node* insertHead(Node* head, int value);
//thêm một node có giá trị là value vào đầu của danh sách liên kết.
//Hàm trả về con trỏ trỏ tới node đầu của danh sách liên kết sau khi đã thêm
Node* insertHead(Node* head, int value)
{
     // tao node moi
    Node* new_node = new Node();
    new_node->value = value;
    new_node->next=NULL;
    //tao node temp
    Node* temp = head;
    if(head == NULL)
    {
        head = new_node ;
    }
    else{
        new_node->next = head;
        head = new_node;
    }
    return head;
}

// Node* deleteNode(Node* head, int pos);
// xoá một node tại vị trí thứ pos ra khỏi danh sách liên kết (danh sách bắt đầu từ 0),
// biết pos luôn lớn hơn hoặc bằng 0 và nhỏ hơn độ dài của danh sách liên kết.
// Hàm trả về con trỏ trỏ tới đầu danh sách liên kết sau khi đã xoá.
Node* deleteNode(Node* head, int pos)
{
    int count = 1;
    Node *temp, *p;
    temp = head;
    if(pos == 0)
    {
        temp = temp->next;
        return temp;
    }
    else{
        while(count != pos)
        {
            count++;
            temp = temp->next;
        }
        p = temp->next;
        p = p->next;
        temp->next = p;
        return head;
    }
}


// xoa dau
Node *deleteHead(Node * head)
{
    Node *p = head;
    p = p->next;
    delete(head);
    return p;
}

