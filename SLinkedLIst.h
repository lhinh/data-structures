#pragma once
#ifndef SLINKEDLIST_H
#define SLINKEDLIST_H

#include "SNode.h"

template <typename E>
class SLinkedList {
public:
	SLinkedList();
	~SLinkedList();
	bool empty() const;
	const E& front() const;
	void addFront(const E& e);
	void removeFront();
	void printList();
private:
	SNode<E>* head;
};

template <typename E>
SLinkedList<E>::SLinkedList() : head(nullptr) { }

template <typename E>
bool SLinkedList<E>::empty() const {
	return head == nullptr;
}

template <typename E>
const E& SLinkedList<E>::front() const {
	return head->elem;
}

template <typename E>
SLinkedList<E>::~SLinkedList() {
	while (!empty()) {
		removeFront();
	}
}

template <typename E>
void SLinkedList<E>::addFront(const E& e) {
	SNode<E>* v = new SNode<E>;
	v->elem = e;
	v->next = head;
	head = v;
}

template <typename E>
void SLinkedList<E>::removeFront() {
	SNode<E>* old = head;
	head = old->next;
	delete old;
}

template <typename E>
void SLinkedList<E>::printList() {
	while (!empty()) {
		std::cout << front() << "\n";
		head = head->next;
	}
}

#endif