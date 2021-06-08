#include "Pony.hpp"

string	Pony::get_name()
{
	return (name);
}

string	Pony::get_task()
{
	return (task);
}

void	ponyOnTheHeap()
{
	Pony *newPony = new Pony("Armored fighter", "fight the grass");
	cout << newPony->get_name() << " has to " << newPony->get_task() << endl;
	delete newPony;
}

void	ponyOnTheStack()
{
	Pony newPony("Minion", "eat the hays");
	cout << newPony.get_name() << " has to " << newPony.get_task() << endl;
}

int main()
{
	ponyOnTheHeap();
	ponyOnTheStack();
}