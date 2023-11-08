#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * is_palindrome - Checks if a singly linked list is a palindrome
 * @head: Pointer to the head of the linked list
 *
 * Return: 1 if the list is a palindrome, 0 if not
 */
int is_palindrome(listint_t **head)
{
    listint_t *slow_ptr = *head, *fast_ptr = *head;
    listint_t *second_half, *prev_of_slow_ptr = *head;
    listint_t *mid_node = NULL;
    int is_palindrome = 1;

    if (*head == NULL || (*head)->next == NULL)
        return (1); 

    
    while (fast_ptr != NULL && fast_ptr->next != NULL)
    {
        fast_ptr = fast_ptr->next->next;
        prev_of_slow_ptr = slow_ptr;
        slow_ptr = slow_ptr->next;
    }

    
    if (fast_ptr != NULL)
    {
        mid_node = slow_ptr;
        slow_ptr = slow_ptr->next;
    }

    
    second_half = slow_ptr;
    prev_of_slow_ptr->next = NULL;
    reverse_list(&second_half);

    
    is_palindrome = compare_lists(*head, second_half);

    
    reverse_list(&second_half);

    
    if (mid_node != NULL)
    {
        prev_of_slow_ptr->next = mid_node;
        mid_node->next = second_half;
    }
    else
    {
        prev_of_slow_ptr->next = second_half;
    }

    return is_palindrome;
}

/**
 * reverse_list - Reverses a singly linked list
 * @head: Pointer to the head of the linked list
 */
void reverse_list(listint_t **head)
{
    listint_t *prev = NULL, *current = *head, *next;

    while (current != NULL)
    {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }

    *head = prev;
}

/**
 * compare_lists - Compares two singly linked lists
 * @list_one_head: Pointer to the head of the first list
 * @list_two_head: Pointer to the head of the second list
 *
 * Return: 1 if the lists are equal, 0 if not
 */
int compare_lists(listint_t *list_one_head, listint_t *list_two_head)
{
    while (list_one_head != NULL && list_two_head != NULL)
    {
        if (list_one_head->n != list_two_head->n)
            return (0);

        list_one_head = list_one_head->next;
        list_two_head = list_two_head->next;
    }

    
    if (list_one_head != NULL || list_two_head != NULL)
        return (0);

    return (1);
}
