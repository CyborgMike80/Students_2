#include <iostream>

#include "StudentsDb.h"
#include "ConsoleHelper.h"

using namespace std;

int main() {
    StudentsDb db;
    db.Init();
    PrintStudents(db.ToVector());

    Student student;
    student.Init("Petrov", "Petr");
    db.Add(student);
    PrintStudents(db.ToVector());

    return 0;
}
