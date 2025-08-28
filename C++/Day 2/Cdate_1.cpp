#include <iostream>
using namespace std;
class cdate
{
    int dd, mm, yy;

public:
    void accept();
    void display() const;
    void setDd(int);
    int getMm() const;
    cdate ();
};
cdate::cdate()
{
    dd=21;
    mm=11;
    yy=2003;
}
void cdate::accept()
{
    cout << "Enter the Date \n";
    cin >> dd >> mm >> yy;
}
void cdate::display() const
{
    cout << "The Date is " << dd << "/" << mm << "/" << yy << endl;
}
void cdate::setDd(int d)
{
    dd = d;
}
int cdate::getMm() const
{
    return mm;
}
int main()
{
    cdate c1;
    c1.accept();
    c1.display();
    c1.setDd(23);
    c1.display();
    cout << "Enter Month is" << c1.getMm();

    const cdate c2;
    c2.display();
}