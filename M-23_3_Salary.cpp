#include<bits/stdc++.h>
#include"TMyStack.h"
using namespace std;

int globalID = 100;

class Person
{
    string name;
    int id;
    float salary;

    public:
        Person()
        {
            name = "";
            id = -1;
            salary = -1.0;
        }

        void setName(string name)
        {
            this->name = name;
        }
        void setSalary(float salary)
        {
            this->salary=salary;
        }

        Person(string name, float salary)
        {
            setName(name);
            setSalary(salary);
            id=globalID;
            globalID++;
        }

        int getID()
        {
            return id;
        }
        string getName()
        {
            return name;
        }
        float getSalary()
        {
            return salary;
        }

        void print()
        {
            cout<<name<<" | "<< id << " | "<<salary<<endl;
        }
};

int main()
{
    Stack <Person> st;
    Person a("Shakil Khan", 8000);
    Person b("Rifat Hasan", 9000);
    Person c("Hasibul Hasan", 9500);

    st.push(a);
    st.push(b);
    st.push(c);

/*  while(!st.empty())
    {
        Person printObj;
        printObj = st.pop();
        printObj.print();
    }*/
    Person printObj;
    printObj=st.Top();
    printObj.print();
    cout<< st.size()<<endl;
    
    return 0;
}
