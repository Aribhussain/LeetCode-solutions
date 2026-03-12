class listnode{
    public:
    int val;
    listnode* next;
    listnode(int v) : val(v), next(nullptr) {}
};
class MyLinkedList {
    listnode* head;
    int size;
public:
    MyLinkedList() {
        head = nullptr;
        size = 0;
    }
    
    int get(int index) {
        if (index < 0 || index >= size) 
            return -1;
        listnode* temp = head;
        for(int i = 0; i < index ; i++){
            temp = temp->next;
        }
        return temp->val;
    }
    
    void addAtHead(int val) {
        listnode* temp = new listnode(val);
       
        temp->next = head;
        head = temp;
        size++;
    }
    
    void addAtTail(int val) {
        if(head == NULL){
            addAtHead(val);
            return;
        }
        listnode* temp = new listnode(val);
        listnode* ptr = head;
        while(ptr->next != NULL){
            ptr = ptr->next;
        }
        ptr->next = temp;
        size++;
    }
    
    void addAtIndex(int index, int val) {
       if(index > size) return; // Cannot add if index is out of bounds
        if(index <= 0) {
            addAtHead(val);
            return;
        }
        listnode* temp = new listnode(val);
        listnode* ptr = head;
        for(int i = 0; i < index-1; i++){
            if(temp == NULL)
                return;
            ptr = ptr->next;
        }
        temp->next = ptr->next;
        ptr->next = temp;
        size++;
    }
    
    void deleteAtIndex(int index) {
        listnode* ptr = head;
        listnode* curr = head;
        if(index < 0 || index >= size) return;
        if(index == 0){
            head = curr->next;
            size--;
            delete curr;
            curr = NULL;
        }
        else{

        for(int i = 0; i < index-1 ; i++){
            ptr = ptr->next;
        }
        curr = ptr->next;
        ptr->next = curr->next;
        size--;

        }
        delete curr;
        curr = NULL;
    }
};

/**
 * Your MyLinkedList object will be instantiated and called as such:
 * MyLinkedList* obj = new MyLinkedList();
 * int param_1 = obj->get(index);
 * obj->addAtHead(val);
 * obj->addAtTail(val);
 * obj->addAtIndex(index,val);
 * obj->deleteAtIndex(index);
 */