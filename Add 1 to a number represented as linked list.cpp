Node* current = head;
        int carry = 1;  // Initialize carry with 1 to add 1.

        while (current != nullptr) {
            int sum = current->data + carry;
            current->data = sum % 10;  // Update the current node's data.
            carry = sum / 10;         // Update the carry.

            if (carry == 0) {
                break;  // If carry becomes 0, no need to continue.
            }

            if (current->next == nullptr) {
                // If we reach the end of the list and carry is still 1,
                // create a new node with value 1 and append it.
                Node* newNode = new Node(1);
                current->next = newNode;
                break;
            }

            current = current->next;  // Move to the next node.
        }

        return reverseList(head);  // Reverse the list again to get the final result.