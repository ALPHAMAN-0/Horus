public class Triangle {
    private int x;
    private int y;
    private int z;

    // Empty constructor
    public Triangle() {
    }

    // Constructor with parameters
    public Triangle(int x, int y, int z) {
        this.x = x;
        this.y = y;
        this.z = z;
    }

    // Getter and setter methods
    public int getX() {
        return x;
    }

    public void setX(int x) {
        this.x = x;
    }

    public int getY() {
        return y;
    }

    public void setY(int y) {
        this.y = y;
    }

    public int getZ() {
        return z;
    }

    public void setZ(int z) {
        this.z = z;
    }

    // Method to display information about the triangle
    public void showInfo() {
        System.out.println("Triangle Information:");
        System.out.println("Side x: " + x);
        System.out.println("Side y: " + y);
        System.out.println("Side z: " + z);
        System.out.println("Equality Status: " + getEqualityStatus());
    }

    // Method to determine the equality status of the sides
    public String getEqualityStatus() {
        if (x == y && y == z) {
            return "All sides are equal (Equilateral)";
        } else if (x == y || y == z || x == z) {
            return "Two sides are equal (Isosceles)";
        } else {
            return "No sides are equal (Scalene)";
        }
    }
}