#include <iostream>
#include "Queue.h"
using namespace std;

int main()
{
   ArrayQueue a;
   Queue *q= &a;

    q->eneque(5);

    int removed = q->dequeue();
    cout << removed << endl;


}
