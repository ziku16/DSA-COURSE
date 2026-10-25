10 → 20 → 30 → NULL

new_node->next = ptr->next;

ptr->next = new_node; my new-node is 25

10 → 20 → 30
     ↑
    ptr

new_node = 25

ptr 20 par hai.

ptr->next 30 ko point kar raha hai.

ab
10 → 20 → 30
     ↑
    ptr

25 → 30


10 → 20 → 25 → 30 → NULL