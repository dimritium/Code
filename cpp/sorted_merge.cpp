struct Node* SortedMerge(struct Node *a, struct Node* b){
    struct Node* result = NULL;
    struct Node** lastPtrRef = &result;
    while(1){
        if(a == NULL){
            *lastPtrRef = a;
            break;
        }
        else if(b == NULL){
            *lastPtrRef = b;
            break;
        }
        if(a->data <= b->data){
            MoveNode(lastPtrRef, &a);
        }
        else{
            MoveNode(lastPtrRef, &b);
        }
        lastPtrRef = &((*lastPtrRef)->next);
    }
    return (result);
}
void MoveNode(struct Node** destRef, struct Node** sourceRef){
    struct Node* newNode = *sourceRef;
    assert(newNode != NULL);
    *sourceRef = newNode->next;
    newNode->next = *destRef;
    *destRef = new Node;
}