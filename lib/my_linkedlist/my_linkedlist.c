/*
** EPITECH PROJECT, 2021
** MyLinkedList
** File description:
** my_linkedlist.c
*/

#include <stdlib.h>
#include "my_linkedlist.h"

node_t *node_pop_back(node_t **node)
{
    node_t *loop_node = (*node);
    node_t *last_node = (*node);

    if (loop_node == NULL)
        return NULL;
    if (loop_node->next == NULL) {
        (*node) = NULL;
        return loop_node;
    }
    while (loop_node->next != NULL) {
        last_node = loop_node;
        loop_node = loop_node->next;
    }
    last_node->next = NULL;
    return loop_node;
}

void node_push_back(node_t **node, void *value)
{
    node_t *loop_node = (*node);
    node_t *new_node = malloc(sizeof(node_t));

    new_node->value = value;
    new_node->next = NULL;
    if (*node == NULL) {
        (*node) = new_node;
        return;
    }
    while (loop_node->next != NULL)
        loop_node = loop_node->next;
    loop_node->next = new_node;
}

void node_push_front(node_t **node, void * value)
{
    node_t *new_node = malloc(sizeof(node_t));

    new_node->value = value;
    new_node->next = (*node);
    *node = new_node;
}

node_t *node_pop_front(node_t **node)
{
    node_t *first_node;

    if (node == NULL)
        return NULL;
    first_node = (*node);
    if (first_node == NULL)
        return NULL;
    (*node) = first_node->next;
    first_node->next = NULL;
    return first_node;
}