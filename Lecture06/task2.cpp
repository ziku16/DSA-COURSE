Original Double Linked List:
NULL ← [10] ⇄ [20] ⇄ [30] ⇄ [40] → NULL

Expected Double Linked List:
NULL ← [10] ⇄ [20] ⇄ [40] → NULL

ptr->prev->next = ptr->next;
ptr->next->prev = ptr->prev;

delete ptr;
