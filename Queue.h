#if !defined(Queue_h)
#define Queue_h
#define MaxArraySize 10


class Queue
{
public:
    int f;
    int r;
    Queue();
    virtual void enqueue(int )=0;
    virtual int dequeue()=0;
    virtual bool isEmpty()=0;
    virtual bool isFull()=0;
    virtual int front()=0;
    virtual int back()=0;

};
class ArrayQueue: public Queue
{
    int arr[MaxArraySize];
    bool isEmpty();
    bool isFull();
    void eneque(int data);
    int dequeue();
    int front();
    int rear()


};

#endif // Queue_h
