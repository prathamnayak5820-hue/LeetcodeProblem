
typedef struct {
    int data[100];
    int front;
    int size;
} MyStack;

MyStack* myStackCreate() {
    MyStack* stack = malloc(sizeof(MyStack));

    stack->front = 0;
    stack->size = 0;

    return stack;
}

void myStackPush(MyStack* obj, int x) {
    int rear = (obj->front + obj->size) % 100;

    obj->data[rear] = x;
    obj->size++;

    // Rotate old elements behind the new element
    for (int i = 0; i < obj->size - 1; i++) {
        int value = obj->data[obj->front];

        obj->front = (obj->front + 1) % 100;

        int newRear = (obj->front + obj->size - 1) % 100;
        obj->data[newRear] = value;
    }
}

int myStackPop(MyStack* obj) {
    int value = obj->data[obj->front];

    obj->front = (obj->front + 1) % 100;
    obj->size--;

    return value;
}

int myStackTop(MyStack* obj) {
    return obj->data[obj->front];
}

bool myStackEmpty(MyStack* obj) {
    return obj->size == 0;
}

void myStackFree(MyStack* obj) {
    free(obj);
}
