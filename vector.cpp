//5:Defines a Student class with attributes like name, age, and grade.
//Initializes a vector of Student objects.
//Allows the user to add new students to the vector with their name, age, and grade.
//Prints the list of students

#include<iostream>
#include<string.h>
#include<vector>
#include<fstream>
using namespace std;
class student{
   protected:
   string name;
   int roll;
   long int mobile;
   public:
   student(){

   }
            student(string name, int roll, long int mobile){
                    this->name=name;
                    this->roll=roll;
                    this->mobile=mobile;
            }
};
class course:public student{
    public:
    string course_name;
    int fees;
    public:
    int courseid;
    string course1;
    vector<string>N;
    vector<int> R;
    vector<int>M;
    vector<string>C;
    vector<int> F;
    vector<int>co;
    course():student(){

    }
    // course(string course_name, int fees):student(name, roll, mobile){
    //         this->course_name=course_name;
    //         this->fees=fees;
    //         this->name=name;
    //         this->roll=roll;
    //         this->mobile=mobile;
    // }

    void register1(){
        
            cout<<"\n\nENter the name of student :";
        cin>>name;
        N.push_back(name);
        cout<<"\n\nENter the roll of student :";
        cin>>roll;
        R.push_back(roll);
        cout<<"\n\nENter the  mobile of student :";
        cin>>mobile;
        M.push_back(mobile);
        
    }
    void courseName(){
        cout<<"\n\nEnter the number";
        cout<<"\nPress 1 for PGDac\nPress 2 For DBDA\nPress 3 for DITISS";
        int ch;
        cin>>ch;
        switch(ch){
            case 1: course_name="PGDAC";
            courseid=1;
            fees=94400;
            C.push_back(course_name);
            F.push_back(fees);
            co.push_back(courseid);
            break;
            case 2: course_name="DBDA";
            courseid=2;
            fees=104000;
            C.push_back(course_name);
            F.push_back(fees);
            co.push_back(courseid);
            break;
            case 3:course_name="DITISS";
            fees=150000;
            courseid=3;
            C.push_back(course_name);
            F.push_back(fees);
            co.push_back(courseid);
            break;
            default:cout<<"ENter correct options ";
            break;
        }
         fstream file;
         file.open("student.txt",ios::in|ios::out|ios::app);
         file<<endl<<name<<" "<<roll<<" "<<mobile<<" "<<course_name<<" "<<courseid<<" "<<fees<<endl;
    }
    void display(){
        cout<<"the name of student is "<<name;
        
    }
    void displaySpecfic(){
        int cou;
        cout<<"Enter the course id of course ";
        cin>>cou;
        int i=0;
        ifstream file;
        file.open("student.txt",ios::out);
        while(!file.eof() ){
            string line;
            if(courseid==cou){
                getline(file,line);
                cout<<endl<<line<<endl;
            }
            
        }
        file.close();
        // for(int i=0;i<5;i++){
        //     if(co[i]==cou){
        //         cout<<N[i];
        //     }
        // }
        
    }

};
int main(){
    course c;
    int i=0;
    // while(i<5){
    //     // 
         
    //     //c.display();
         
    // i++;
    // }
    // c.register1();
    // c.courseName();
    c.displaySpecfic();
      
    return 0;
}