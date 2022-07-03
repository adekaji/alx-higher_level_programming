#include "lists.h"
/**
 * recurPalindrome - checks if singly linked list is palindrome
 * @left: pointer to head of singly linked list
 * @right: head of singly linked list
 *
 * Return: 0 if it is not a palindrome, 1 if it is a palindrome
 */

int recurPalindrome(listint_t **left, listint_t *right)
{
	int x;

	if (right == NULL)
		return (1);

	ret = recurPalindrome(left, right->next);
	if (x == 0)
		return (0);

	x = (right->n == (*left)->n);

	*left = (*left)->next;

	return (x);
}
/**
 * is_palindrome - checks if singly linked list is palindrome
 * @head: pointer to head of singly linked list
 *
 * Return: 0 if it is not a palindrome, 1 if it is a palindrome
 */
int is_palindrome(listint_t **head)
{
	if (!head)
		return (0);
	return (recurPalindrome(head, *head));
}
