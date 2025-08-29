#include <stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include"SLL.h"

int main(){
    int flag;
    insert_start(0);
    insert_start(1);
    insert_start(2);
    insert_start(3);
    insert_end(4);
    insert_end(5);
    
    traverse();
    //flag = search(5);
    //printf("flag, %d \n", flag);
    //delete(0);
    insert_after(3, 10);
    traverse();
    
    return 0;
}