#include<iostream>
#include<string.h>
#include<fstream>
#include<stdexcept>
using namespace std;

class student{
    private:
    double marks;
    public:
    //int n; // Number of students
    int roll_num;
    string name;
    double english, maths, science;

    student(){
        //n=0;
        roll_num=0;
        name="";
        english=0;
        maths=0;
        science=0;
        marks=0;
    }

    student(/*int n*/ int roll_num, string name, double english, double math, double science){
        //this->n=n;
        this->roll_num=roll_num;
        this->name=name;
        this->english=english;
        this->maths=maths;
        this->science=science;
        marks=0;
    }

    void input(){
        //cout<<"Enter Number of Students : ";
        //cin>>n;
        //for(int i=1;i<=n;i++){
            cout<<"Roll Number : ";
            cin>>roll_num;
            cin.ignore();
            cout<<"Name : ";
            getline(cin,name);
            cout<<"Each Subject Marks :\n";
            cout<<"English :";
            cin>>english;
            cout<<"Maths :";
            cin>>maths;
            cout<<"Science :";
            cin>>science;
        //}

    }

    void display(){
        //for(int i=1;i<=n;i++){
            //cout<<"Students Detail "<<n<<" :"<<endl;
            //cout<<"\nAfter Adding Student Details : "<<endl;
            cout<<"Roll Number of Student : "<<roll_num<<endl;
            cout<<"Name of the Student : "<<name<<endl;
            cout<<"Marks for Each Subjects : English- "<<english<<", Maths- "<<maths<<", Science- "<<science<<endl;
            try
            {
                if(getMarks()<0 || getMarks()>100)
                throw(runtime_error("Please Enter Valid Marks to calculate percentage."));
                cout<<"Total Percentage : "<<getMarks()<<endl;
            }
            catch(const std::exception& e)
            {
                std::cerr << e.what() << '\n';
            }

        //}
    }



    void setMarks(double m){
        marks=m;
    }
    double getMarks(){
        return marks=((english+maths+science)/300)*100;
    }



};

class Gradebook{
    public:
    student StudentData;

    Gradebook(){

    }
    Gradebook(student s){
        StudentData=s;
    }

    void display(){
        if(StudentData.roll_num!=0){
            StudentData.display();
            double percentage = StudentData.getMarks();
            try
            {
                if(percentage>100||percentage<0)
                throw(runtime_error("Please Enter Valid Marks"));
            }
            catch(const std::exception& e)
            {
                std::cerr << e.what() << '\n';
            }
            
            cout<<"Students Grade :";
            if (percentage >= 90 && percentage<=100) {
                cout << "A" << endl;
            } else if (percentage >= 80 && percentage<90) {
                cout << "B" << endl;
            } else if (percentage >= 70 && percentage<80) {
                cout << "C" << endl;
            } else if (percentage >= 60 && percentage<70) {
                cout << "D" << endl;
            } else {
                cout << "Failed!" << endl;
            }
        }
    }

    void savetofile(){
        ofstream outfile("students_data.txt", ios::app); //open file in append mode
        if(outfile.is_open())
        {
            if(StudentData.roll_num!=0)
            {
                outfile<<"Roll Number of Student : "<<StudentData.roll_num<<endl;
                outfile<<"Name of the Student : "<<StudentData.name<<endl;
                outfile<<"Marks for Each Subjects : English- "<<StudentData.english<<", Maths- "<<StudentData.maths<<", Science- "<<StudentData.science<<endl;
                outfile<<"Total Percentage : "<<StudentData.getMarks()<<endl;   
            }
            else{
                outfile<<"No details in the GradeBook.";
            }
            outfile<<"----------------------------------------"<<endl;
            outfile.close();
            cout<<"Students Detail Saved to students_data.txt file.";
        }else {
            cout << "Error: Unable to open file for writing!" << endl;
        }
    }

    static void loadFromFile() {
        ifstream infile("students_data.txt"); // Read mode
        if (infile.is_open()) {
            string line;
            cout << "Previous Students Records:\n";
            cout << "========================================\n";
            while (getline(infile, line)) {
                cout << line << endl;
            }
            cout << "========================================\n\n";
            infile.close();
        } else {
            cout << "No previous records found (students_data.txt missing)." << endl << endl;
        }
    }

};

int main(){
    Gradebook::loadFromFile();

    student s1;
    cout<<"Enter the Students Details :"<<endl;
    s1.input();

    //pass students to gradebook
    Gradebook g1(s1);
    cout<<"\nStudent Report :"<<endl;
    g1.display();

    //Save to file 
    g1.savetofile();
}