class Person {
	public:
		virtual ~Person() {
			cout << "Deleting a person." << endl;
		}
};

class Student : public Person {
	public:
		~Student() {
			cout << "Deleting a studnet." << endl;
		}
};

int main() {
	Person *p= new Student();
	delet p;
}

