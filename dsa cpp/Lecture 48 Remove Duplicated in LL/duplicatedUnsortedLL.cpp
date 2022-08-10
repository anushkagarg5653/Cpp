Node* RemoveDuplicatesFromUnsortedList(Node* head) {
    Node* current = head;
    Node* prev = NULL;

    if(current == NULL) {
        std::cout << "Node not created!\n";
        return NULL;
    }

    std::unordered_map<int, int> visited;
    while (current != NULL)
    {
        if(!visited[current->val]) {
            visited[current->val] = 1;

            prev = current;
            current = current->next;
        }
        else {
            Node* nextNode = current->next;
            prev->next = nextNode;

            delete(current);
            current = nextNode;
        }
    }
    
    return head;
}