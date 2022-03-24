#include <iostream>
#include <conio.h>

using namespace std;
 
struct node { // mendefinisikan struct node
    int data; // data dari node
    node *next; // pointer yang menunjukkan alamat node selanjutnya
};

node *head= NULL; // pointer yang berfungsi sebagai head sekaligus mendeklarasikan head = NULL

bool cekKosong() {
    if ( head == NULL ) // cek kondisi head = NULL
    return true; // mengembalikan nilai true
    return false; // mengembalikan nilai false
}

void insertAfter( node *prev_node, int nilai) {
    if ( prev_node == NULL ) { // cek kondisi head = NULL
        cout << "Nilai sebelumnya tidak boleh NULL";
    }
    node *new_node; // mendeklarasikan node baru
    new_node = new node; // alokasi memori dinamis
    new_node -> data = nilai; // mengisi node data dengan value dari int nilai
    new_node -> next = prev_node -> next; // mengisi node next dengan node next yang ditunjukkan head
    prev_node -> next = new_node; // nengisi node next head dengan menunjukkan node yang baru
}

void insertAkhir( int nilai ) { // fungsi insert pada akhir linked list
    node *new_node; // mendeklarasikan node baru
    node *temp; // pointer untuk operasi insert akhir linked list
    new_node = new node; // alokasi memori dinamis
    new_node -> data = nilai; // mengisi node data dengan value dari int nilai
    new_node -> next = NULL; // mengisi node next pada node baru dengan NULL

    if ( cekKosong()) {
        head = new_node; // pointer head menunjukkan alamat dari node baru
        head -> next = NULL; // mengisi node next pada node baru dengan NULL
    } else {
        temp = head; // pointer temp menunjukkan alamat dari node pertama (yang sebelumnya ditunjukkan oleh pointer head)
        while ( temp -> next != NULL) { // mengecek node next pada temp apakah tidak sama dengan NULL
            temp = temp -> next; // jika tidak sama dengan NULL, maka temp bergeser menuju alamat yang terdapat di node next
        }
        temp -> next = new_node; // jika sama dengan NULL, maka node next akan menunjukkan alamat dari node baru
    }
}


void deleteAwal() // menghapus bilangan awal dari SLL
{
    if (head == NULL) // kondisi ketika keadaan head NULL (kosong)
    {
        cout << "List Empty"; // menampilkan keterangan
    }
    else
    {
        node *del = head; // deklarasi node del menjadi head
        head = head->next; // memindahkan posisi HEAD yang sekarang ke head next 
        free(del); // fungsi untuk menghapus (free)
    }
    
}

void deleteTengah(node** head_ref, int key) // fungsi delete tengah LL
{
    // Store head node
    node* temp = *head_ref;
    node* prev = NULL;
     
    // If head node itself holds
    // the key to be deleted
    if (temp != NULL && temp->data == key)
    {
        *head_ref = temp->next; // Changed head
        delete temp;            // free old head
        return;
    }
 
    // Else Search for the key to be deleted,
    // keep track of the previous node as we
    // need to change 'prev->next' */
      else
    {
    while (temp != NULL && temp->data != key)
    {
        prev = temp;
        temp = temp->next;
    }
 
    // If key was not present in linked list
    if (temp == NULL)
        return;
 
    // Unlink the node from linked list
    prev->next = temp->next;
 
    // Free memory
    delete temp;
    }
}

void deleteAkhir() // fungsi delete akhir SLL
{
  node *del, *prev;
  if (head == NULL)
  {
      cout << "List Empty";
  } // kondisi jika head tidak mempunyai value
  else if (head->next == NULL)
  {
      del = head; // mendeklarasikan variable del menjadi head
      head = NULL; // menjadikan head sebagai NULL
      free(del); // menghapus isi variable del
  }
  else
  {
      del = head; // mendeklarasikan variable del menjadi head
      while (del->next != NULL) // kondisi apabila dell->next tidak kosong
      {
          prev = del; // mengubah variable prev menjadi del
          del = del->next; // mendeklarasikan variable del
      }
    prev->next = NULL; // variable prev->next diubah menjadi kosong
    free(del); // menghapus value dari variable del
  }
  
}

void tampilkanList() { // menampilkan linked list
    if ( !cekKosong()) { // cek kondisi list apakah kosong atau tidak
        node *telusur; // node baru untuk pengecekan penelusuran
        telusur = head; // penelusuran dimulai dari head
        cout << "===== Data Linked List =====" << endl;
        while ( telusur != NULL ) { 
            cout << telusur -> data << " "; // menampilkan node data linked list
            telusur = telusur -> next; // bergeser menuju alamat yang terdapat di node next
        }
    }
}

int main() {

    system("CLS");
    cout << "Fairus Salimi | 2100117 | RPL 2B" << endl;
    cout << "   Struktur Data & Algoritma    " << endl;
    cout << "\n\n";
    
    insertAkhir(1);
    insertAkhir(2);
    insertAkhir(3);
    insertAfter(head,15);
    tampilkanList();
    deleteAwal();
    cout << endl;
    tampilkanList();
    deleteTengah(&head, 2);
    cout << endl;
    tampilkanList();
    deleteAkhir();
    cout << endl;
    tampilkanList();
}