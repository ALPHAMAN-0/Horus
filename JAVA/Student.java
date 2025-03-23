package Horus.JAVA;
public class Student {
    private String name;
    private String id;
    private String depertment;
    private float cgpa;

    // Empty constructor
    public Student() {
    }

    // Constructor with parameters
    public Student(String name, String id, String depertment, float cgpa) {
        this.name = name;
        this.id = id;
        this.depertment = depertment;
        this.cgpa = cgpa;
    }

    // Getter and setter methods
    public String getName() {
        return name;
    }

    public void setName(String name) {
        this.name = name;
    }

    public String getId() {
        return id;
    }

    public void setId(String id) {
        this.id = id;
    }

    public String getDepertment() {
        return depertment;
    }

    public void setDepertment(String depertment) {
        this.depertment = depertment;
    }

    public float getCgpa() {
        return cgpa;
    }

    public void setCgpa(float cgpa) {
        this.cgpa = cgpa;
    }

    // Method to display student information
    public void showInfo() {
        System.out.println("Student Information:");
        System.out.println("Name: " + name);
        System.out.println("ID: " + id);
        System.out.println("Department: " + depertment);
        System.out.println("CGPA: " + cgpa);
    }
}