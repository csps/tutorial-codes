/*
    おはよう皆さん、皆の気分がいいといいなと思います。
*/
class Arraylist{
    private int[] list;
    private int counter;
    private int MAX;

    //Constructors for initializing values
    //When the list is empty, counter is 0

    //Default Constructor, will create a list with size 10
    public Arraylist(){
        this.MAX = 10;
        this.list = new int[this.MAX];
        this.counter = 0; 
    }

    //Parametized Constructor, will create a list with size n
    public Arraylist(int n){
        this.MAX = n;
        this.list = new int[this.MAX];
        this.counter = 0; 
    }

    //Methods of ADT List


    /*
        - Adding an element at the end of the list
        - If insertion is successful, return true. Otherwise, false
    */
    public boolean addLast(int element){
        boolean flag = false;

        // Check if the list is not full
        if(counter < MAX){
            // If the list is not full, do the insertion
            list[counter] = element;
            counter++;
            flag = true;
        }else{
            System.out.println("INSERTION FAILED");
        }
        return flag;
    }

    /*
        - Deleting the last element in the list
        - If deletion is successful, return true. Otherwise, false
    */
    public boolean deleteLast(){
        boolean flag = false;
        // Check if the list is not empty. There is no element to be deleted if the list is empty
        
        if(counter != 0){
            counter--;
            // We only need to decrement the counter. The element deleted is still in the array however, it cannot be accessed anymore since we will only use the COUNTER variable as an index.
            
            // Will make sense in the traversal method
            flag = true;
        }else{
            System.out.println("DELETION FAILED");
        }
        return flag;
    }

    /*
        - Adding an element at the start of the list
        - If insertion is successful, return true. Otherwise, false
    */
    public boolean addFirst(int element){
        return false;
    }

    /*
        - Deleting the first element in the list
        - If deletion is successful, return true. Otherwise, false
    */
    public boolean deleteFirst(){
        return false;
    }

    /*
        - Deleting the element in the index i
        - LIST -> 4 5 6 7 8
        - deleteAtSpecificIndex(2)
        - LIST -> 4 5 7 8
        - If deletion is successful, return true. Otherwise, false
    */
    public boolean deleteAtSpecificIndex(int i){
        return false;
    }

    /*
        - Inserting the element n in the index i
        - LIST -> 4 5 6 7 
        - insertAtSpecificIndex(1,10)
        - LIST -> 4 10 5 6 7
        - If deletion is successful, return true. Otherwise, false
    */
    public boolean insertAtSpecificIndex(int i, int n){
        return false;
    }

    /*
       - Searching the element n in the list. If n is found, return the index. Otherwise, return -1  
    */
    public int search(int n){
        return -1;
    }

    


    /*
        - Will visit and display each element in the list
        - Also called as the traversal
    */
    public void displayList(){
        if(counter == 0){
            System.out.println("The list is empty");
        }else{
            System.out.print("The contents of the list: ");

            //Do not use list.length. Utilize the counter variable in traversing the array
            for(int i = 0; i < counter; i++){
                System.out.print(list[i]+" ");
            }
            System.out.println();
        }
    }


}

//    happy coding :)
