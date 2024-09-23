# Module_03_SOLID

## Introduction

This project aims to explore the SOLID principles of Object-Oriented Programming (OOP). The exercises focus on practical applications of each principle, helping you design code that is more flexible, maintainable, and scalable. Understanding these principles is crucial for creating robust software systems.

## Why is SOLID Relevant?

The SOLID principles serve as guidelines for software design that promote good coding practices. By following these principles, developers can create code that is easier to manage and adapt over time. Each principle addresses specific aspects of software design, helping to reduce complexity and improve the reliability of code.

## How to Run

1. **Clone the Repository**:  
   ```sh
   git clone git@github.com:<your-username>/Module_03_SOLID.git
   cd Module_03_SOLID

2. For each exercise, navigate to the corresponding directory and run the code using the following command:
   ```sh
   cd <exercise-folder>
   make all
   ./<exercise-name>
   ```
    For example, to run the `SingleResponsibilityPrinciple` exercise:
    ```sh
    cd ex00
    make all
    ./single_responsibility_principle
    ```
    The output will be displayed in the terminal.

## Exercises

### Exercise 00: [S]ingle Responsibility

- **Synopsis**: Implement a `Car` class that manages various actions related to a car's operation while adhering to the Single Responsibility Principle.

- **Relevance**: This exercise is relevant as it emphasizes the importance of having a class focused on a single task, enhancing readability and maintainability.

### Exercise 01: [O]pen/Closed

- **Description**: Create a `Command` class to represent an order and implement derived classes for specific discount commands without modifying the base class.

- **Open/Closed Principle**: This principle states that software entities should be open for extension but closed for modification. In this exercise, you will extend functionality through inheritance rather than changing existing code.

### Exercise 02: [L]iskov Substitution

- **Description**: Define a base `Shape` class with virtual methods for area and perimeter, and ensure derived classes (Rectangle, Triangle, Circle) can replace the base class seamlessly.

- **Liskov Substitution Principle**: This principle states that objects of a superclass should be replaceable with objects of a subclass without affecting the correctness of the program. This exercise demonstrates how derived classes can maintain the expected behavior of a base class.

### Exercise 03: [I]nterface Segregation

- **Description**: Implement an `EmployeeManager` class to manage employee data and workdays while ensuring that clients depend only on the methods they use.

- **Interface Segregation Principle**: This principle suggests that no client should be forced to depend on methods it does not use. This exercise helps in designing focused interfaces that promote code flexibility.

### Exercise 04: [D]ependency Inversion

- **Description**: Create a logging system using the `ILogger` interface, ensuring that specific loggers depend on abstractions rather than concrete implementations.

- **Dependency Inversion Principle**: This principle states that high-level modules should not depend on low-level modules; both should depend on abstractions. This exercise illustrates how to implement a flexible logging system.

## Conclusion

This module provides a comprehensive approach to understanding and applying the SOLID principles in OOP. By working through these exercises, I have gained practical experience in designing maintainable, scalable, and flexible software solutions, emphasizing the importance of good coding practices.

## License

This project is licensed under the MIT License - see the [LICENSE](./LICENSE) file for details.

## Author

👤 **André Francisco Baião Rolão Cândido da Silva**



