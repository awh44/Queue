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

	return 0;
}
