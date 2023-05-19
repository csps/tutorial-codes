#include <stdio.h>
#include <stdlib.h>

#define MAX 10

//structure definition
typedef struct Arraylist{
    int list[MAX];
    int counter;
}Arraylist;

/*
    - To those who want to implement in C, you can try other structure definitions below. Maka improve nis inyo skills.

    1. The one we are using in this Program
    typedef struct Arraylist{
        int list[MAX];
        int counter;
    }Arraylist;

    2.
    typedef struct Arraylist{
        int list[MAX];
        int counter;
    }*Arraylist;

    3.
    typedef struct Arraylist{
        int *list;
        int counter;
    }Arraylist;

    4.
    typedef struct Arraylist{
        int *list;
        int counter;
    }*Arraylist;

    NOTE: Using a different structure definition requires changes in the code. :)

    good reference: Harvard's CS50 (Data Structures)

    happy coding :)
*/


/*
    initilizeList(Arraylist*) will initialize the values of the list.
    When list is Empty, counter is 0.
    In java, initilizeList(Arraylist*) is the constructor.
*/

void initializeList(Arraylist *a);

/*
    insertLast(Arraylist*, int) will add an element at the end of the list.
*/

void insertLast(Arraylist *a, int num);

/*
    deleteLast(Arraylist*) will delete the last element of the list.
*/
void deleteLast(Arraylist *a);

/*
    displayList(Arraylist) will visit each element in the list and will print it.
*/
void displayList(Arraylist a);


int main(){
    printf("Arraylist in C :)\n\n");
    Arraylist a;
    initializeList(&a); //CONSTRUCTOR IN JAVA
    insertLast(&a,1);
    insertLast(&a,2);
    deleteLast(&a);
    displayList(a);
    insertLast(&a,3);
    displayList(a);
}

void initializeList(Arraylist *a){
    a->counter = 0;
}
void insertLast(Arraylist *a, int num){
    if(a->counter < MAX){
        a->list[a->counter++] = num; //post increment. it will increment a->counter in the next line
    }else{
        printf("THE LIST IS FULL");
    }
}

void deleteLast(Arraylist *a){
    if(a->counter == 0){
        printf("THE LIST IS EMPTY\n");
    }else{
        a->counter--;
    }
}

void displayList(Arraylist a){
    printf("The contents of your list : ");
    if(a.counter == 0){
        printf("The List is empty");
    }else{
        for(int i = 0; i < a.counter; i++){
            printf("%d ",a.list[i]);
        }
    }
    printf("\n");
}
