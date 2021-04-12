class Stack
{
    public:
        Stack();
        void push(int elem);
        int pop();
        bool isEmpty();
        void multiPop(int N);
        void show();
        Stack (const Stack& sstack);
        Stack& operator=(const Stack& sstack);
        ~Stack();

    private:
        int ssize = 0;
        int* my_stack;
};

