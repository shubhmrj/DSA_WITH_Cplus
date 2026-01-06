class Student {
public:
    int roll;

    Student(int r) {
        roll = r;
    }

    // Copy Constructor
    Student(const Student &s) {
        roll = s.roll;
    }
};

int main() {
    Student s1(10);
    Student s2 = s1;   // copy constructor called
}
