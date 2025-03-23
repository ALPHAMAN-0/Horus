# Triangle Project

This project defines a `Triangle` class that represents a triangle with three sides. It includes methods to display the triangle's properties and determine the equality of its sides.

## Project Structure

```
triangle-project
├── src
│   ├── Triangle.java
│   └── Main.java
└── README.md
```

## Triangle Class

The `Triangle` class has the following features:
- Three private integer attributes: `x`, `y`, and `z` representing the lengths of the triangle's sides.
- Two constructors:
  - An empty constructor that initializes the sides to default values.
  - A parameterized constructor that allows setting the sides upon creation.
- Getter and setter methods for each attribute.
- A method `showInfo` to display the triangle's properties.
- A method to determine if the triangle has:
  - Three equal sides (equilateral)
  - Two equal sides (isosceles)
  - No equal sides (scalene)

## Instructions to Compile and Run

1. Navigate to the project directory:
   ```
   cd triangle-project/src
   ```

2. Compile the Java files:
   ```
   javac Triangle.java Main.java
   ```

3. Run the main class:
   ```
   java Main
   ```

This will execute the program and display the properties of the triangles created in the `Main` class.