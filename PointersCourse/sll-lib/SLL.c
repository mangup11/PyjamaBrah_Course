#include <stdio.h>
#include <string.h>
#include<stdlib.h>
#include<stdbool.h>
#include "SLL.h"   // Include in double quotes when header is in your own file

static node_s* _head = NULL;   //Static global variable is only visible in this file

node_s* create_node(int data){
    node_s *new_node = (node_s*)malloc(sizeof(node_s)); // Allocate memory to node

    if(!new_node){
        printf("Memory allocation failed!!");
        return NULL;
    }
    new_node->data = data; // Store the data to new node
    new_node ->next = NULL;
    return new_node;
}



// Inserted at the start of the head itself
int insert_start(int data){

    node_s *new_node = create_node(data);

    new_node->next =_head; // New node also point to the node next to head

    // Head points to the new node
    _head = new_node;
    return 0;

}

int insert_end(int data){
    node_s* new_node = create_node(data);

    node_s* temp = _head;

    while(temp->next!=NULL){
        temp= temp->next;
    }

    temp->next = new_node;
    return 0;

}

int search(int data){

    node_s* temp = _head;

    while(temp!=NULL){
        if(temp->data == data){
            return 1;
        }
        temp = temp->next;
    }
    return 0;
}

void delete(int data){
    node_s* curr = _head;
    node_s *prev = NULL;

    while(curr!= NULL){
        prev = curr;
        curr = curr->next;
        if(curr->data == data){
            prev->next = curr->next;
            printf("Deleted data \n");
            free(curr);
            return;
        }
    }
    return;

}

int insert_after(int data, int new_data){

    node_s *new_node = create_node(new_data);

    node_s *curr = _head;

    while(curr!= NULL){
        if(curr->data == data){
            new_node->next = curr->next;
            curr->next = new_node;
            printf("Inserted after % d \n", data);
            return 0;
        }
        curr = curr->next;
    }
    return 0;

}

void traverse(){
    node_s* current_node = _head;

    while(current_node != NULL){
        printf(" Node data : %d\n",current_node->data);
        current_node = current_node->next;
    }
}

