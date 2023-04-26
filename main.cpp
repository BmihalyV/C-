#include <iostream>

using namespace std;

class Animal
{
public:
	void Display(int legs, int wings)
	{
		cout <<"Ez az Animal: " << legs << " labbal, " << wings << " szarnnyal"<< endl;
	}
	virtual void virtualis() {
        cout << "Virtualis fuggveny" << endl;
    }
protected:
    void gyenge()
    {
        cout << "Gyenge allat" << endl;
        betegseg();
    }
private:
    void betegseg()
    {
        cout << "Beteg" << endl;
    }
};

class Cheetah: public Animal
{
public:
	void Display(int legs, int wings)
	{
		cout <<"Ez a Cheetah gyerek: " << legs << " labbal, " << wings << " szarnnyal"<< endl;
	}
};

class Employee {
  private:
    int salary;

  public:
    void setSalary(int s) {
      salary = s;
    }
    int getSalary() {
      return salary;
    }
};

class Beginner : public Employee
{
public:
    int payment;
    Beginner(int payment)
    {
        this->payment = payment;
    }
};
class Test
{
   public:
        Test()
       {
              cout<<"Constructor" << endl;
       }

       ~Test()
          {
              cout<<"Destructor" << endl;
          }
};

int add(int a, int b);
int add2(int a = 10, int b = 9);
void szoveg()
{
    cout << "Egyszeru void" << endl;
}

int main()
{
    Test t;
    cout << "Szamok: ";
    for(int i = 1; i< 20; i++)
    {
        if(i<=17)
        {
            cout << i << ", ";
            continue;
        }
        else
        {
            cout<< " A visszaszamlalas leallt" <<endl;
            break;
        }
    }
    int szamlalo = 0;
    while(szamlalo<10)
    {
        switch(szamlalo)
        {
        case 8:
            cout << "A szam nyolc" <<endl;
            break;
        case 1:
            cout << "A szam majdnem 2" <<endl;
            break;
        default:
            cout << "Szamlalo: " << szamlalo << endl;
            break;
        }
        szamlalo++;
    }
    do
    {
        szamlalo--;
        if(szamlalo%2==0)
        {
            cout << "Szamlalo parosakkal: " << szamlalo <<endl;
        }
        else
        {
            cout << "Paratlan szam" << endl;
        }
    }while(szamlalo>0);

    int x = 42;
    long y = 52662;
    y = x;
    x = y;

    if(x<y)
        cout << "x nagyobb mint y" << endl;
    else
        cout << "y nagyobb mint x" << endl;

    int c = 5;
    int d = 9;
    cout << "c | d: " << (c | d) <<endl;
    cout << "c & d: " << (c & d) <<endl;

    int e = (c < 10) ? 30 : 40;
    cout << "? eseten e=" << e << endl;

    Employee empl;
    empl.setSalary(50000);
    cout << "Fizetes: " << empl.getSalary() << endl;
    int a = 22;
    int* b = &a;
    cout << "Pointer: " << b << endl;

    szoveg();
    cout << "Add(): " << add(c, d)<< endl;
    cout << "Add2(): " << add2()<< endl;
    Animal animal;
    Cheetah cheetah;
	animal.Display(2, 2);
	cheetah.Display(4, 0);
	animal.virtualis();
	Beginner bg(x);
	cout << "Kezdo fizetes: " << bg.payment << endl;
	cout << "\nSablon: " << endl;
    Sablon<int>(10);
    return 0;
}
int add(int a, int b)
{
    int osszeg = a+b;
    return osszeg;
}
int add2(int cc, int dd)
{
    return cc+dd;
}
