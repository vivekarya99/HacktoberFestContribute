struct Node *addBegin(struct Node *last, int data) 
{ 
  if (last == NULL) 
     return addToEmpty(last, data); 
  
  // Creating a node dynamically. 
  struct Node *temp 
        = (struct Node *)malloc(sizeof(struct Node)); 
    
  // Assigning the data. 
  temp -> data = data; 
  
  // Adjusting the links. 
  temp -> next = last -> next; 
  last -> next = temp; 
    
  return last; 
} 
