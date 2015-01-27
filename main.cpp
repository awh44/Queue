#include <iostream>

#include "Queue.h"

int main(void)
{
	Queue<int> q;
	for (size_t i = 0; i < 20; i++)
	{
		q.enqueue(i);
	}

	while (!q.empty())
	{
		std::cout << q.front() << std::endl;
		q.dequeue();
	}

	Queue<int *> qp;
	int arr[20] = { };
	for (size_t i = 0; i < 20; i++)
	{
		arr[i] = i;
		qp.enqueue(&arr[i]);
	}

	while (!qp.empty())
	{
		int *curr = qp.front();
		std::cout << curr << " = " << *curr << std::endl;
		qp.dequeue();
	}

	return 0;
}
