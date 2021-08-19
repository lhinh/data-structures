#pragma once
#ifndef SNODE_H
#define SNODE_H

template <typename E>
class SLinkedList;

template <typename E>
class SNode {
private:
	E elem;
	SNode<E>* next;
	friend class SLinkedList<E>;
};

#endif