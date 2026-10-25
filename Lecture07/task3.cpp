Original DLL:


     before ptr second after
       |     |    |    |
NULL ← 10 ⇄ 20 ⇄ 30 ⇄ 40 ⇄ 50 → NULL

Expected DLL:
NULL ← 10 ⇄ 40 ⇄ 50 → NULL


//Step 1:
Node* second = ptr->next;
Node* before = ptr->prev;
Node* after = second->next;


//Step 2:
before->next = after;
after->prev = before;


//Step 3:
delete ptr;
delete second;