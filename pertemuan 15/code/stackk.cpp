/**
 * @file stackk.cpp
 * @mainpage Dokumentasi project stack linked ist
 * 
 * @section Deskripsi
 * program ini merupakan implementasi struktur data stack (tumpukan).
 * mendukung dasar seperti :
 * - push
 * - pop
 * - display
 * 
 * @section Cara penggunaan
 * jalankan program dan pilih menu:
 * 1. Push
 * 2. Pop
 * 3. Display
 * 4. Exit
 *  
 * 
 * @section Penulis
 * - Nama : shahky yandhana putra
 * - Nim  :20240140046
 * - class : A
 */

/**
 * @file stackk.cpp
 * @author shahky  
 * @brief ini adalah program stack menggunakan linked list
 * @version 0.1
 * @date 2025-06-23
 * 
 * @copyright Copyright (c) 2025
 * 
 */
#include <iostream>
using namespace std;
//node class representing a single node in the linked list
/**
 * @class Node
 * @brief class node untuk menyimpan data dan alamat memori
 * 
 */
class Node
{
    public: 
    int data; ///< variabel data den tipe integer
    Node *next; ///< variabel untuk menyimpan alamat memori

    Node()
    {
        next = NULL;

    }
};

//stack class 
/**
 * @class stack
 * @brief operasi dimana digunakan method push untuk menambahkan data
 * 
 */
class stack
{
    private:
    Node *top; // pointer to the top node of the stack  ///< pointer the stack with a top pointer
     public:
    stack()
    {
        top = NULL; // initialize the stack with a a null top pointer 
    }
    // push operation: insert a element onto the top of the stack 
  /**
   *@brief  Method push untuk menambahkan data
   * 
   * @param value 
   * @return int 
   */
  
    int push (int value)
    {
        Node *newNode = new Node();///< 1.allocate memory for the new node
        newNode->data = value; ///< 2.assingn value
        newNode->next =top; /// < set the next pointer of the new node to the current top 
        top = newNode; ///< update the top pointer to the new node
        cout << "push value: " << value << endl;
        return value;
    }
   /**
    * @brief  mengembalikan pointer jika dikatakan true sehingga mengindikasikan stack dalam keadaan kosong
    * 
    * @return true 
    * @return false 
    */
bool isEmpty()
    {
        return top == NULL; ///<return true if the pointer is null , indicating an empty stack
    } 
    
   

// pop operation : remove the tompost element from the stack
/**
 * @
 * @brief jika stack kosong, menampilkan pesan dan mengulang kembali
 * @if (isEmpty)
 */
    void pop () {
    if(isEmpty()) {
        cout << " stack is empty. " <<endl;
        return; ///< of the stack is empty, print message and return
    }
    cout << " popped value:  " << top->data << endl;
    top = top->next; ///< update the top pointer to the next node
    } 
    /**
     * @brief setelah mengecek apakah stack kosong , kita dapat memasukkan data
     * @if (isEmpty)
     * @else
     */
    void peek()
    {
        if (isEmpty())
        {
            cout <<"list is empty." << endl;
    }
        else
        {
            Node * current =top;
            while ( current != NULL)
            {
                cout << current->data <<"" << endl;
                current = current->next;
            }cout << endl;
        }
    }


};
/**
 * @brief  program utama yang berfungsi untuk memanggil fungsi beserta class 
 * 
 * @return int 
 * @class 
 */
int main()
{ stack stack;
    int choice = 0;
    int value;
    /**
     * @brief 
     * 
     */
    while (choice != 4)
    {
     cout << "1. push\n";
           cout << "2. pop\n";
       cout << "3. peek\n";
     cout <<"4. exit\n";	
        cout <<"Enter your choice";
        cin >> choice;
        /**
         * @brief Construct a new switch object
         * 
         */
       switch( choice)
        {
            case 1:
            cout <<" enter the value to push: " ;
            cin >> value;
            stack.push(value); ///< push the entered value onte the stack
            break;
            case 2:
            stack.pop(); ///< pop the tommost element from the stack
            break;
            case 3:
                stack.peek();
                break;

            case 4:
                cout << " existing program" << endl;
                break;
                default :
                cout << "invalid choice try again." << endl;
                break; 
                
        }
        cout << endl;
        
    

    }
    return 0; 
}     
   


            

    
 



