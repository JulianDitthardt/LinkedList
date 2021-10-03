#include <iostream>
#include "LinkedList.h"
#include <gtest/gtest.h>





TEST(linkedTests,testRemoveLast){
    // Tests the functionality of the peek last and remove last functions
    LinkedList a;
    a.insertLast(1);
    a.insertLast(2);
    a.insertLast(3);

    EXPECT_EQ(a.peekLast(),3);

    a.removeLast();
    EXPECT_EQ(a.peekLast(),2);

}

TEST(linkedTests,testRemoveFirst){
    // Tests the functionality of the peek first and remove first functions
    LinkedList a;
    a.insertFirst(1);
    a.insertFirst(2);
    a.insertFirst(3);

    EXPECT_EQ(a.peekFirst(),3);

    a.removeFirst();
    EXPECT_EQ(a.peekFirst(),2);
}

TEST(linkedTests,Iteration){
    // Tests the functionality of the findIndex and findData functions
    LinkedList a;
    a.insertLast(1); // Index 0
    a.insertLast(2); // Index 1
    a.insertLast(3); // Index 2
    a.insertLast(4); // Index 3
    a.insertLast(5); // Index 4

    int testIndex = a.findIndex(3);

    EXPECT_EQ(a.findIndex(3),testIndex);

    int testData = a.findData(testIndex);
    EXPECT_EQ(3,testData);
}

TEST(linkedTests,listReversal){
    // Tests the functionality of reversing the linked List
    LinkedList a;
    a.insertLast(1);
    a.insertLast(2);
    a.insertLast(3);
    a.insertLast(4);
    a.insertLast(5);

    EXPECT_EQ(a.peekFirst(),1);

    a.reverseList();

    EXPECT_EQ(a.peekFirst(),5);
}



