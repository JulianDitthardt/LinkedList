//
// Created by Julian Ditthardt on 2/10/21.
//

#ifndef LINKEDLISTS_LINKEDLIST_H
#define LINKEDLISTS_LINKEDLIST_H

#include <iostream>
struct node{
    int data;
    node* next;
    node* prev;
};


class LinkedList{
private:
    node* head;
    node* tail;

public:
    LinkedList(){
        head = NULL;
        tail = NULL;
    }



    void insertLast(int data){
        node* temp = new node;
        temp->data = data;
        temp->next = NULL;
        temp->prev = tail;

        if (head == NULL){
            head = temp;
            tail = temp;
        }
        else{
            tail->next = temp;
            tail = tail->next;
        }
    }

    void insertFirst(int data){
        node* temp = new node;
        temp->data = data;
        temp->next = head;
        temp->prev = NULL;

        if (head == NULL){
            head = temp;
            tail = temp;
        }
        else{
            head->prev = temp;
            temp->next=head;
            head = temp;
        }

    }

    void reverseList(){

        node* cur = head;

        node* previous;
        node * next;

        while (cur != NULL){
            next = cur->next;
            cur->next = previous;

            previous = cur;
            cur = next;
        }
        tail = head;
        tail->next = NULL;
        head = previous;
    }


    void printList(){
        if (head == NULL){
            std::cout << "List is empty" <<std::endl;
        }

        node* temp = head;
        std::cout << temp->data << std::endl;

        while (temp->next != NULL){
            temp = temp->next;
            std::cout << temp->data << std::endl;
        }
    }

    int findIndex(int targetData){
        node* temp = head;
        int index = 0;

        while (temp->data != targetData){
            temp = temp->next;
            index += 1;
        }
        return index;
    }

    int findData(int targetIndex){
        node* temp = head;
        for (int i=0;i < targetIndex; i++){
            temp = temp->next;
        }
        return temp->data;
    }

    int peekFirst(){
        return head->data;
    }
    int peekLast(){
        return tail->data;
    }

    void removeFirst(){
        head = head->next;
        head->prev = NULL;
    }
    void removeLast(){
        tail = tail->prev;
        tail->next =NULL;
    }

};


#endif //LINKEDLISTS_LINKEDLIST_H
