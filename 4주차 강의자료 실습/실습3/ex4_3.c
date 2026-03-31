#include "CircularLinkedList.h"

int main(void) {
	linkedList_h* CL;
	listNode* p;

	CL = createLinkedList_h();
	printf("(1) Create Circular Linked List! \n");
	printList(CL);

	printf("\n(2) Insert First Node! \n");
	insertFirstNode(CL, "A");
	printList(CL);

	printf("\n(3) Insert Middle Node after First! \n");
	p = searchNode(CL, "A"); insertMiddleNode(CL, p, "B");
	printList(CL);

	printf("\n(4) Insert Middle Node after Second! \n");
	p = searchNode(CL, "B"); insertMiddleNode(CL, p, "C");
	printList(CL);

	printf("\n(5) Delete Node! \n");
	p = searchNode(CL, "A");  deleteNode(CL, p);
	printList(CL);  	getchar();
	return 0;
}
