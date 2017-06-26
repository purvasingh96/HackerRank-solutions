          Node* removeDuplicates(Node *head)
          {
              Node *t=head;
              while(t!=NULL)
              {
                  while(t->next!=NULL && t->data == t->next->data)
                  {
                      Node *del = t->next;
                      t->next = t->next->next;
                      delete del;
                  }
                  t=t->next;
              }
              return head;
          }
