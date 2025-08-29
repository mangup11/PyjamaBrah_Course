#ifndef __H_SLL__     // Header guard, so that if same header when added again and again 
#define __H_SLL__     // will not cause any problem

/*Some comment on how to create the library
create the object file of the main SLL.c file with gcc -c SLL.c
then create an archive file that can be shipped to uses with ar -rc libsll.a sll.o
Now this archive file can be used by the user, and the user will not know the full 
implementation of the library, will need the header file as well to run with archive code
 */
typedef struct node{
    int data;
    struct node* next;
} node_s;

node_s* create_node(int data);

int insert_start(int data);

int insert_end(int data);

int search(int data);

void delete(int data);

int insert_after(int data, int new_data);

void traverse();

#endif 

