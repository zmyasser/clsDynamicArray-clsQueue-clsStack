#include <iostream>
#include "clsMyDynamicArray.h"
#include "clsMyQueue.h"
#include "clsMyStack.h"


int main()
{ 

    // ================= Dynamic Array =================

    clsDynamicArray<int> MyDynamicArray(5);

    MyDynamicArray.SetItem(0, 10);
    MyDynamicArray.SetItem(1, 20);
    MyDynamicArray.SetItem(2, 30);
    MyDynamicArray.SetItem(3, 40);
    MyDynamicArray.SetItem(4, 50);


    std::cout << "\nDynamic Array: \n";
    std::cout << "\nIs Empty?  " << MyDynamicArray.IsEmpty();
    std::cout << "\nArray Size: " << MyDynamicArray.Size() << "\n";
    std::cout << "\nArray Items: \n";

    MyDynamicArray.PrintList();

    MyDynamicArray.InsertAtBeginning(400);
    std::cout << "\n\nArray after insert 400 at Beginning:";
    std::cout << "\nArray Size: " << MyDynamicArray.Size() << "\n";
    MyDynamicArray.PrintList();

    MyDynamicArray.InsertBefore(2, 500);
    std::cout << "\n\nArray after insert 500 before index 2:";
    std::cout << "\nArray Size: " << MyDynamicArray.Size() << "\n";
    MyDynamicArray.PrintList();

    MyDynamicArray.InsertAfter(2, 600);
    std::cout << "\n\nArray after insert 600 after index 2:";
    std::cout << "\nArray Size: " << MyDynamicArray.Size() << "\n";
    MyDynamicArray.PrintList();


    MyDynamicArray.InsertAtEnd(800);
    std::cout << "\n\nArray after insert 800 at End:";
    std::cout << "\nArray Size: " << MyDynamicArray.Size() << "\n";
    MyDynamicArray.PrintList();

    std::cout << "\n\nDelete First Item: ";
    MyDynamicArray.DeleteFirstItem();
    MyDynamicArray.PrintList();

    std::cout << "\n\nDelete Last Item: ";
    MyDynamicArray.DeleteLastItem();
    MyDynamicArray.PrintList();


    std::cout << "\n\nDelete Item At 3: ";
    MyDynamicArray.DeleteItemAt(3);
    MyDynamicArray.PrintList();

    std::cout << "\n\nDelete Item by value (600): ";
    MyDynamicArray.DeleteItem(800);
    MyDynamicArray.PrintList();

    std::cout << "\n===================================================" << std::endl;



    // ================= Queue =================

    clsMyQueue <int> MyQueue;

    MyQueue.push(10);
    MyQueue.push(20);
    MyQueue.push(30);
    MyQueue.push(40);
    MyQueue.push(50);


    std::cout << "\n\n\nQueue: \n";
    MyQueue.Print();

    std::cout << "\nQueue Size: " << MyQueue.Size();
    std::cout << "\nQueue Front: " << MyQueue.front();
    std::cout << "\nQueue Back: " << MyQueue.back();

    MyQueue.pop();

    std::cout << "\n\nQueue after pop() : \n";
    MyQueue.Print();


    std::cout << "\n\nItem(2) : " << MyQueue.GetItem(2);

    
    MyQueue.Reverse();
    std::cout << "\n\nQueue after reverse() : \n";
    MyQueue.Print();


    MyQueue.UpdateItem(2, 600);
    std::cout << "\n\nQueue after updating Item(2) to 600 : \n";
    MyQueue.Print();


    MyQueue.InsertAfter(2, 800);
    std::cout << "\n\nQueue after Inserting 800 after Item(2) : \n";
    MyQueue.Print();


    MyQueue.push_Front(1000);
    std::cout << "\n\nQueue after Inserting 1000 at front: \n";
    MyQueue.Print();


    MyQueue.push_Back(2000);
    std::cout << "\n\nQueue after Inserting 2000 at back: \n";
    MyQueue.Print();


    MyQueue.Clear();
    std::cout << "\n\nQueue after Clear(): \n";
    MyQueue.Print();

    std::cout << "\n===================================================" << std::endl;





    // ================= Stack =================

    clsMyStack <int> MyStack;

    MyStack.push(10);
    MyStack.push(20);
    MyStack.push(30);
    MyStack.push(40);
    MyStack.push(50);


    std::cout << "\nStack: \n";
    MyStack.Print();

    std::cout << "\nStack Size: " << MyStack.Size();
    std::cout << "\nStack Top: " << MyStack.Top();
    std::cout << "\nStack Bottom: " << MyStack.Bottom();


    MyStack.pop();
    std::cout << "\n\nStack after pop() : \n";
    MyStack.Print();


    std::cout << "\n\nItem(2) : " << MyStack.GetItem(2);


    MyStack.Reverse();
    std::cout << "\n\nStack after reverse() : \n";
    MyStack.Print();


    MyStack.UpdateItem(2, 600);
    std::cout << "\n\nStack after updating Item(2) to 600 : \n";
    MyStack.Print();


    MyStack.InsertAfter(2, 800);
    std::cout << "\n\nStack after Inserting 800 after Item(2) : \n";
    MyStack.Print();



    MyStack.push_Front(1000);
    std::cout << "\n\nStack after Inserting 1000 at top: \n";
    MyStack.Print();


    MyStack.push_Back(2000);
    std::cout << "\n\nStack after Inserting 2000 at bottom: \n";
    MyStack.Print();


    MyStack.Clear();
    std::cout << "\n\nStack after Clear(): \n";
    MyStack.Print();






    std::cin.get();

}