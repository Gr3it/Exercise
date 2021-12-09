#include <iostream>
#include <fstream>

using namespace std;

struct node
{
    int data;
    struct node* left;
    struct node* right;
};

void printOrdered(node* head){
  if (head != NULL) {
    printOrdered(head->left);
    cout << head -> data << endl;
    printOrdered(head->right);
  }
}

void searchNumber(node* head, int value){
  if(value == head -> data){
    cout << value << endl;
  }
  if(value > head->data){
    cout << head -> data << " destra, ";
    if(head->right != NULL){
      searchNumber(head->right, value);
    }
    else{
      cout << " non trovato" << endl;
    }
  }
  if(value < head->data){
    cout << head -> data << " sinistra, ";
    if(head->left != NULL){
      searchNumber(head->left, value);
    }
    else{
      cout << " non trovato" << endl;
    }
  }
}

void treeDestruction(node* head){
  if (head != NULL) {
    treeDestruction(head->left);
    treeDestruction(head->right);
    delete head;
  }
}

void stampaAlbero(node* radice, int spazio = 0){
  if (radice != NULL) {
    spazio ++;
    
    stampaAlbero(radice->right, spazio);

    for (int i = 1; i < spazio; i++) {
        cout<<"\t";
    }
    cout<<radice->data<<"\n";
    
    stampaAlbero(radice->left, spazio);
  }
}

int main(int argc, char *argv[])
{
  if(argc != 2){
    cout << "Usage: ./a.out <file>" << endl;
    exit(0);
  }

  fstream input;
  input.open(argv[1], ios::in);

  if(input.fail()){
    cout << "Unable to open the file" << endl;
    exit(1);
  }

  int value;

  input >> value;
  node* head = new node{value,NULL,NULL};
  node* dummyNode;
  node* createdNode;
  bool inserted;

  while(input >> value){
    dummyNode = head;  
    createdNode = new node{value,NULL,NULL};
    inserted = false;

    while(!inserted){
      if(value > dummyNode->data){
        if(dummyNode -> right == NULL){
          dummyNode -> right = createdNode;
          inserted = true;
        }
        else{
          dummyNode = dummyNode -> right;
        }
      }else{
        if(dummyNode -> left == NULL){
          dummyNode -> left = createdNode;
          inserted = true;
        }
        else{
          dummyNode = dummyNode ->left;
        }
      }
    }
  }

  stampaAlbero(head);
  printOrdered(head);

  int number;
  cout << "inserire il numero da cercare: ";
  cin >> number;

  searchNumber(head, number);
  treeDestruction(head);

  input.close();

  return 0;
}