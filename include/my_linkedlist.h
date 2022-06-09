/*
** EPITECH PROJECT, 2021
** BootstrapMyLs
** File description:
** my_linkedlist.h
*/

#ifndef BOOTSTRAPMYLS_LINKED_LIST_H
#define BOOTSTRAPMYLS_LINKED_LIST_H

#include <stdbool.h>

typedef struct node_s node_t;

struct node_s {
    void *value;
    node_t *next;
};

void node_push_back(node_t **node, void *value);
node_t *node_pop_back(node_t **node);
void node_push_front(node_t **node, void *value);
node_t *node_pop_front(node_t **node);

#endif //BOOTSTRAPMYLS_LINKED_LIST_H
