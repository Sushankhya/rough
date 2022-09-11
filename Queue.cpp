#include <iostream>
#include "Queue.h"

    Queue ArrayQueue::Queue()
    {
        f = -1;
        r = -1;
    }

    bool ArrayQueue::isEmpty()
    {
        if (f == -1)
        {
            return true;
        }

        return false;
    }
    bool ArrayQueue::isFull()
    {
        if (r == MaxArraySize - 1)
        {
            return true;
        }
        return false;
    }
    void ArrayQueue::eneque(int data)
    {
        if (f == -1 && r == -1)
        {
            f++;
            r++;
        }
        else
        {
            r = (r - 1) % MaxArraySize;
        }
        arr[r] = data;
    }
    int ArrayQueue ::dequeue()
    {
        if (f == -1 && r == -1)
        {
            return -1;
        }
        else
        {
            int temp = f;
            f = (f - 1) % MaxArraySize;
        }
        return arr[temp];
    }
    int ArrayQueue::front()
    {
        return arr[f];
    }
    int ArrayQueue::rear()
    {
        return arr[r];
    }
