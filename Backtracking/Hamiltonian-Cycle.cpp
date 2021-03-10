#include<iostream>
using namespace std;

void display_hamiltonian_cycle(int path[], int no_of_vertices)
{
	    cout << "The Hamiltonian cycle is as follows : \n";
	        for (int i = 0; i < no_of_vertices; i++)
			    {
				            cout << path[i];
					        }

//complete cycle
cout << path[0];
cout << "\n";
}

