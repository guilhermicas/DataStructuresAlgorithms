#include <stdio.h>
#include <stdlib.h>

struct BTNode {
  int data;
  struct BTNode* left;
  struct BTNode* right;
};

//We assume that the node given is already allocated
void append(struct BTNode* node, int val){
  /*
    @brief inserts on tree DS according to binary tree standards
    @param BT -> binary tree DS
    @param val -> value to insert into BT
  */

  if(node->data == 0){
    printf("root node is empty\n");
    node->data = val;
  }else{
    struct BTNode* curr = node;

    while(curr){
      if(val < curr->data){
        printf("going to the left child\n");
        if(!curr->left){
          curr->left = malloc(sizeof(struct BTNode));
          curr->left->data = val;
          break;
        }
        curr = curr->left;
      }else if(val > curr->data){
        printf("going to the right child\n");
        if(!curr->right){
          curr->right = malloc(sizeof(struct BTNode));
          curr->right->data = val;
          break;
        }
        curr = curr->right;
      }
    }

    //printf("exited loop\n");

    //curr = malloc(sizeof(struct BTNode));
    //curr->data = val;
  }
}

int main(int argc, char **argv[]){

  struct BTNode* root = malloc(sizeof(struct BTNode));
  root->data = 20;
  append(root, 10);
  //if(root->left)
    //printf("has left child\n");
  printf("root->left->data = %d\n", root->left->data);
  append(root, 40);
  printf("root->right->data = %d\n", root->right->data);
  append(root, 5);
  printf("root->left->left->data = %d\n", root->left->left->data);

  return 1;
}
