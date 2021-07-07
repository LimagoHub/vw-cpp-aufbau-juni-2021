

#include <iostream>
#include "leaf.h"
#include "node.h"

// void travers(abstract_node * item)
// {
// 	std::cout << *item << std::endl;
//
// 	for(auto child: item->get_children())
// 	{
// 		// Recursion !!!!!!!!
// 		travers(child);
// 	}
// }

int main()
{

	leaf leaf1{ "Hallo" };
	leaf leaf2{ "Welt" };
	leaf leaf3{ "Hello" };
	leaf leaf4{ "World" };

	node root{ "root" };

	node e1{ "e1" };
	node e2{ "e2" };

	root.append(&e1);
	root.append(&e2);

	e1.append(&leaf1);
	e1.append(&leaf2);

	e2.append(&leaf3);
	e2.append(&leaf4);

	// Ersatz für travers root.ausgabe(); // gibt sich selbst und seine Kinder und Kindeskinder ....
	
	// travers(&root);
	
    
}


