/**
 * Inheritance
 * It is simply a way to reuse code by inheriting properties from an existing class.
 * 
 * @date 2023-05-15
 * @author CSP-S
 */
class Inheritance {
    public static void main(String[] args) {
        // Create a new dinosaur object
        Dinosaur dinosaur = new Dinosaur("T-Rex");

        /**
         * Call the dinosaur's methods
         */

        dinosaur.roar(); // T-Rex is roaring...
        dinosaur.eat(); // Eating... (inherited from Animal class)
        dinosaur.sleep(); // Sleeping... (inherited from Animal class)
    }
}

/**
 * Animal class (superclass)
 */
class Animal {
    /**
     * Properties
     */
    public String name;

    /**
     * Constructor w/ name parameter
     */
    public Animal(String name) {
        this.name = name;
    }

    /**
     * Class methods
     */

    public void eat() {
        System.out.println("Eating...");
    }

    public void sleep() {
        System.out.println("Sleeping...");
    }
}

/**
 * Dinosaur class (subclass of Animal)
 */
class Dinosaur extends Animal {
    /**
     * Constructor w/ name parameter
     */
    public Dinosaur(String name) {
        // Call the superclass constructor which is Animal, and pass the name parameter
        super(name);
    }

    /**
     * Class specific methods
     */
    public void roar() {
        System.out.println(this.name + " is roaring...");
    }
}