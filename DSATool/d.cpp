/*
Create an interface to instanciate data-structures and interact with them (C++)
Objective:
start
numbered list to choose which data structure to instanciate and interact with.
operate on the data structure
exit

Beggining data structures to support:
1.Linked List(Array and Dinamic Memory version, doubly-linked list)
2.Stack
3.Queue(Priority, Circular)
4.Trees
5.Binary Trees(AVL Tree, BST, Binary tree, self balancing, B-tree)
6.Heaps
6.Graphs
7.Hash Tables

On the future implement a lot of these :)
https://en.wikipedia.org/wiki/List_of_data_structures

I want to organize each data structure code in a folder that represents the category of that data-structure, ex:
Tree Folder-¬
            v
            Binary Tree.c
            AVL Tree.c
            etc...c
*/
#include <iostream>
#include <string>

using namespace std;

//Data structures that are implemented
string supportedDS[] = {"Linked List", "Stack", "Queue"};
int DSArrLen = sizeof(supportedDS)/sizeof(supportedDS[0]);

int main(int argc, char *argv[]){
  while(true){
    //Main menu
    int choice = 0;

    cout << "Select the data structure you want to interact with\n" << endl;

    for(int i = 0; i < DSArrLen; i++){
      if(supportedDS[i] != ""){
        cout << i + 1 << " " << supportedDS[i] << endl;
      }
    }

    cin >> choice;
    cin.clear();
    cin.ignore();

    if(choice < 1 || choice > DSArrLen){
      cout << "Invalid choice" << endl;
      continue;
    }

    /*
       based on choice, create an instance of the data-structure, and get from the data-structure definition the list of available implemented operations so the user can choose
       You can choose an option and that option will be applied to the current data structure

       Maybe the code inside the switch case would be implemented as interface in the data-structure implementation
    */
    //auto DS;
    switch(choice){
      case 1:
      LinkedList DS = LinkedList();
      while(true){
        choose which operation you want:
        for idx, operation in enumerate(DS.AvailableOperations()):
          print(idx+1 + " " + operation);

        if(choice < 1 || choice > DS.AvailableOperations()){
          cout << "Invalid choice" << endl;
          continue;
        }

        while(true){
          switch(choice){
            case 1:
            int val;
            cin >> val;
            DS.push(val);
            break;
          }

          //Shows the list in a "visually appealing and understandable way"
          DS.visualizeList();
        }
      }
      break;
    }
    cout << "The DS selected was: " << supportedDS[choice-1] << endl;

    break;
  }

  return 1;
}

/*
   Main menu select loop:
    select the data structure from within the choices
   Data structure interaction loop:
    use operations on data structures
    on exit go back to main menu select loop
*/
