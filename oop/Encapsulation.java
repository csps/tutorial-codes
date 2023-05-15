/**
 * Encapsulation
 * It is the process of hiding the properties of an object from the outside class.
 * 
 * @date 2023-05-15
 * @author CSP-S
 */
class Encapsulation {
    public static void main(String[] args) {
        // Create a new car object
        Car car = new Car("Red", "Toyota", 1000000);

        // If we want to change the car's color directly, it will throw an error
        // because the color property is private (hidden from the outside class)
        // car.color = "Blue";

        // We can change the car's color by using the setter method
        car.setColor("Blue");
        car.setBrand("Honda");
        car.setPrice(2000000);

        // Print the car's properties
        System.out.println("Color: " + car.getColor());
        System.out.println("Brand: " + car.getBrand());
        System.out.println("Price: " + car.getPrice());
    }
}

/**
 * Car class
 */
class Car {
    /**
     * Properties
     */
    private String color;
    private String brand;
    private int price;

    /**
     * Constructor w/ color, brand, price parameters
     */
    public Car(String color, String brand, int price) {
        this.color = color;
        this.brand = brand;
        this.price = price;
    }

    /**
     *  Class methods
     */

    public void go() {
        System.out.println("Driving...");
    }

    public void stop() {
        System.out.println("Stopping...");
    }

    public void steer() {
        System.out.println("Steering...");
    }

    /**
     * Getters
     */

    public String getColor() {
        return color;
    }

    public String getBrand() {
        return brand;
    }

    public int getPrice() {
        return price;
    }

    /**
     * Setters
     */

    public void setColor(String color) {
        this.color = color;
    }

    public void setBrand(String brand) {
        this.brand = brand;
    }

    public void setPrice(int price) {
        this.price = price;
    }
}