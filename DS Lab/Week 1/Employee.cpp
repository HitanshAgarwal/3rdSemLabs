#include <iostream>
#include <string>

using namespace std;

class Employee {
public:
    int employee_number;
    string employee_name;
    float basic;
    float DA;
    float IT;
    float net_sal;
    float gross_sal;
};

int main() {
    int n;
    cin >> n;
    Employee employees[n];

    for (int i = 0; i < n; ++i) {
        cin >> employees[i].employee_number;
        cin >> employees[i].employee_name;
        cin >> employees[i].basic;
        employees[i].DA = employees[i].basic * 0.12;
        employees[i].gross_sal = employees[i].basic + employees[i].DA;
        employees[i].IT = 0.18 * employees[i].gross_sal;
        employees[i].net_sal = employees[i].gross_sal - employees[i].IT;
    }

    for (int i = 0; i < n; ++i) {
        cout << employees[i].employee_number << " ";
        cout << employees[i].employee_name << " ";
        cout << employees[i].basic << " ";
        cout << employees[i].DA << " ";
        cout << employees[i].IT << " ";
        cout << employees[i].net_sal << " ";
        cout << employees[i].gross_sal << endl;
    }

    return 0;
}

