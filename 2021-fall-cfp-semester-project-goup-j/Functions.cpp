#include <iostream>
#include "Functions.h"
#include<fstream>

using namespace std;
struct course {
    string name;
   float credithours;


};
struct cgparecord{
    float gpa=0;
    float credithours=0;
};
struct student {
    string rollnumber;
    string name;
    float points=0;
    float cgpa=0;
};
struct mids {
    float obtainednumber;
    float maxmarks;
};
struct finals {

    float obtainednumb;
    float maxmarks;
};
struct quiz {
    float obtainednumbers;
};
struct assignments {
    float obtained;
};

void gradecalculator() {

    char finalgrade;
    float totalpercentage = 0;
    float weightagefinal = 0;
    float weightgemid = 0;
    float weightagequiz = 0;
    float weightassignments = 0;
    float quiztotal = 0;
    float assigmenttotal = 0;
    float perecentagequiz = 0;
    float percentageassignments = 0;
    float percentagemids = 0;
    float percentagefinal = 0;
    float maxquizmarks = 0;
    float maxassignmentmarks = 0;
    int Numberofstudents = 0;
    cout << " HOW many students You want to enter ";
    cin >> Numberofstudents;
    student *students = new student[Numberofstudents];
    int numberofquizzes = 0;
    cout << " How many quizzes do you want to enter ";
    cin >> numberofquizzes;
    cout << " ENTER MAX MARKS IN A QUIZ" << endl;
    cin >> maxquizmarks;
    cout << " Enter weightage of Quizzes";
    cin >> weightagequiz;
    int numberOFassignments = 0;
    cout << " HOW MANY ASSIGNMENTS YOU WANT TO ENTER ";
    cin >> numberOFassignments;
    cout << " ENTER MAX MARKS IN A ASSIGNMENT : ";
    cin >> maxassignmentmarks;
    cout << " Enter weightage of Assignments :";
    cin >> weightassignments;
    cout<<" ENTER WEIGHTAGE OF MIDS ";
    cin>>weightgemid;
    cout<<" ENTER WEIGHTAGE FINALS ";
    cin>>weightagefinal;
    cin.ignore(1000, '\n');
    quiz *quizz = new quiz[numberofquizzes];
    assignments *assignment = new assignments[numberOFassignments];
    mids mid;
    finals final;
    ofstream data;
    data.open("Studentdata.txt",ios::app);
    data << "Roll#         ";
    data << "Name " << "         ";
    for (int l = 0; l < numberofquizzes; ++l) {
        data << "quiz" << (l + 1) << "      ";
    }
    data << " %Quiz  ";
    for (int p = 0; p < numberOFassignments; ++p) {
        data << "assignment" << (p + 1) << "      ";
    }
    data << " %Assignments  ";
    data<< " MIDS ";
    data<<"  % Mids ";
    data<<" Finals ";
    data<< " % Finals";
    data <<" Total %";
    data<<" Grade";
    data << endl;
    for (int i = 0; i < Numberofstudents; ++i) {

        cout << " Enter name of the student no  " << (i + 1) << endl;


        getline(cin, students[i].name);

        cout << " Enter roll no of student " << (i + 1) << endl;
        getline(cin, students[i].rollnumber);
        cout << "Enter quizz marks for " << students[i].name << endl;
        for (int j = 0; j < numberofquizzes; ++j) {
            cout << " Enter marks obtained by " << students[i].name << " in quizz no " << (j + 1) << endl;
            cin >> quizz[j].obtainednumbers;
            cin.ignore(1000, '\n');
        }
        for (int j = 0; j < numberOFassignments; ++j) {
            cout << " Enter marks obtained by " << students[i].name << " in assignment no " << (j + 1) << endl;
            cin >> assignment[j].obtained;
            cin.ignore(1000, '\n');
        }
        for (int k = 0; k < numberofquizzes; ++k) {
            quiztotal = quizz[k].obtainednumbers + quiztotal;
        }
        for (int y = 0; y < numberOFassignments; ++y) {
            assigmenttotal = assignment[y].obtained + assigmenttotal;

        }
        perecentagequiz = (quiztotal / (maxquizmarks * numberofquizzes) * 100);
        percentageassignments = (assigmenttotal / (maxassignmentmarks * numberOFassignments) * 100);
        cout << " Enter  MAXIMUM MARKS IN  MID ";
        cin >> mid.maxmarks;
        cout << " Enter  OBTAINED BY" << students[i].name << " IN  MIDS ";
        cin >> mid.obtainednumber;
        percentagemids = ((mid.obtainednumber / mid.maxmarks) * 100);
        cout << " ENTER MAXIMUM MARKS IN FINAL ";
        cin >> final.maxmarks;
        cout << " ENTER NUMBER OBTAINED BY " << students[i].name << "FINALS ";
        cin >> final.obtainednumb;
        cin.ignore(1000, '\n');
        percentagefinal = ((final.obtainednumb / final.maxmarks) * 100);
totalpercentage=((perecentagequiz*(weightagequiz/100))+(percentageassignments*(weightassignments/100))+(percentagefinal*(weightagefinal/100))+(percentagemids*(weightgemid/100)));
finalgrade= grade(totalpercentage);


        for (int m = i; m <= i; ++m) {


            data << students[m].rollnumber << "       " << students[m].name << "      ";
            for (int n = 0; n < numberofquizzes; ++n) {
                data << "    " << quizz[n].obtainednumbers << "    ";

            }
            data << "     " << perecentagequiz;

            for (int a = 0; a < numberOFassignments; ++a) {
                data << "       " << assignment[a].obtained << "   ";


            }
            data << "     " << percentageassignments;
            data<<"     "<<mid.obtainednumber;
            data<<"     "<<percentagemids;
            data<<"     "<<final.obtainednumb;
            data<<"     "<< percentagefinal;
            data<<"     "<<totalpercentage;
            data<<"     "<<finalgrade;
            data << endl;
        }
        for (int h = 0; h < numberofquizzes; ++h) {
            quizz[h].obtainednumbers = 0;

        }
        for (int x = 0; x < numberOFassignments; ++x) {
            assignment[x].obtained = 0;

        }
quiztotal=0;
perecentagequiz=0;
assigmenttotal=0;
percentageassignments=0;
percentagemids=0;
percentagefinal=0;
    }
    data.close();

}

char grade(float x) {
  char G;

    if (x >= 80) {
        G = 'A';

    } else if (x >= 70 && x < 80) {
        G = 'A';

    } else if (x >= 60 && x < 70) {
        G = 'B';
    } else if (x >= 50 && x < 60) {
        G = 'C';

    } else if (x >= 40 && x < 50) {
        G = 'D';

    } else if (x < 40) {
        G = 'F';

    }
    return G;
}
void gpaCalculator(){
  float totalCredithours=0;
    mids mid;
    finals final;
    int Numberofstudents = 0;
    ofstream data;
    int numberSubjects=0;
    cout<<" ENTER NUMBER OF SUBJECTS ";
    cin>>numberSubjects;
    cin.ignore(1000, '\n');
    cout << " HOW many students You want to enter ";
    cin >> Numberofstudents;
    cin.ignore(1000, '\n');
    student *students = new student[Numberofstudents];
    for (int O = 0; O <Numberofstudents; ++O) {

        cout << " enter name of the student no  " << (O + 1) << endl;


        getline(cin, students[O].name);

        cout << " enter roll no of student " << (O + 1) << endl;
        getline(cin, students[O].rollnumber);
    }
    cin.ignore(1000, '\n');
//    student *students = new student[Numberofstudents];
course *courses=new course[numberSubjects];
    for (int z = 0; z < numberSubjects; ++z)
    { cout<<" ENTER NAME OF COURSE NO "<<(z+1);
        getline(cin, courses[z].name);
        cout<<" ENTER CREDIT HOURS OF "<<courses[z].name<<" ";
        cin>>courses[z].credithours;
        cin.ignore(1000, '\n');
       totalCredithours=totalCredithours+courses[z].credithours;
    }

    for (int w = 0; w < numberSubjects; ++w) {



        cin.ignore(1000, '\n');
        float pointSubject=0;
        char finalGrade;
        float totalpercentage = 0;
        float weightagefinal = 0;
        float weightgemid = 0;
        float weightagequiz = 0;
        float weightassignments = 0;
        float quiztotal = 0;
        float assigmenttotal = 0;
        float perecentagequiz = 0;
        float percentageassignments = 0;
        float percentagemids = 0;
        float percentagefinal = 0;
        float maxquizmarks = 0;
        float maxassignmentmarks = 0;
cout<< " ENTER RECORD FOR "<<courses[w].name<<endl;

        int numberofquizzes = 0;
        cout << " how many quizzes do you want to enter ";
        cin >> numberofquizzes;
        cout << " ENTER MAX MARKS IN A QUIZ" ;
        cin >> maxquizmarks;
        cout << " Enter weightage of Quizzes";
        cin >> weightagequiz;
        int numberOFassignments = 0;
        cout << " HOW MANY ASSIGNMENTS YOU WANT TO ENTER ";
        cin >> numberOFassignments;
        cout << " ENTER MAX MARKS IN A ASSIGNMENT : ";
        cin >> maxassignmentmarks;
        cout << " Enter weightage of Assignments :";
        cin >> weightassignments;
        cout << " Enter  MAXIMUM MARKS IN  MID ";
        cin >> mid.maxmarks;
        cout<<" ENTER WEIGHTAGE OF MIDS ";
        cin>>weightgemid;
        cout << " ENTER MAXIMUM MARKS IN FINAL ";
        cin >> final.maxmarks;
        cout<<" ENTER WEIGHTAGE FINALS ";
        cin>>weightagefinal;
        cin.ignore(1000, '\n');
        quiz *quizz = new quiz[numberofquizzes];
        assignments *assignment = new assignments[numberOFassignments];



        data.open("gpa.txt",ios::app);
        data << " *-/-+-(-)---=-%-@--$-%-^-!-/--* *-/-+-(-)---=-%-@--$-%-^-!-/" << endl;
        data << "/        "<<courses[w].name<<"  data                 /" << endl;
        data<< " *-/-+-(-)---=-%-@--$-%-^-!-/--* *-/-+-(-)---=-%-@--$-%-^-!-/" << endl;
        data << "Roll#         ";
        data << "Name " << "         ";
        for (int l = 0; l < numberofquizzes; ++l) {
            data << "quiz" << (l + 1) << "      ";
        }
        data << " %Quiz  ";
        for (int p = 0; p < numberOFassignments; ++p) {
            data << "assignment" << (p + 1) << "      ";
        }
        data << " %Assignments  ";
        data<< " MIDS ";
        data<<"  % Mids ";
        data<<" Finals ";
        data<< " % Finals";
        data <<" Total %";
        data<<" Grade";
        data<<"   GPA ";


        data << endl;
        for (int i = 0; i < Numberofstudents; ++i) {


            cout << "enter quizz marks for " << students[i].name << endl;
            for (int j = 0; j < numberofquizzes; ++j) {
                cout << " enter marks obtained by " << students[i].name << " in quizz no " << (j + 1) << endl;
                cin >> quizz[j].obtainednumbers;
                cin.ignore(1000, '\n');

            }
            for (int j = 0; j < numberOFassignments; ++j) {
                cout << " enter marks obtained by " << students[i].name << " in assignment no " << (j + 1) << endl;
                cin >> assignment[j].obtained;
                cin.ignore(1000, '\n');
            }
            for (int k = 0; k < numberofquizzes; ++k) {
                quiztotal = quizz[k].obtainednumbers + quiztotal;

            }
            for (int y = 0; y < numberOFassignments; ++y) {
                assigmenttotal = assignment[y].obtained + assigmenttotal;

            }
            perecentagequiz = (quiztotal / (maxquizmarks * numberofquizzes) * 100);
            percentageassignments = (assigmenttotal / (maxassignmentmarks * numberOFassignments) * 100);

            cout << " Enter  OBTAINED BY " << students[i].name << " IN  MIDS ";
            cin >> mid.obtainednumber;
            percentagemids = ((mid.obtainednumber / mid.maxmarks) * 100);

            cout << " ENTER NUMBER OBTAINED BY " << students[i].name << "FINALS ";
            cin >> final.obtainednumb;
            cin.ignore(1000, '\n');
            percentagefinal = ((final.obtainednumb / final.maxmarks) * 100);
            totalpercentage=((perecentagequiz*(weightagequiz/100))+(percentageassignments*(weightassignments/100))+(percentagefinal*(weightagefinal/100))+(percentagemids*((weightgemid)/100)));
            finalGrade= grade(totalpercentage);
            pointSubject= points(finalGrade);
students[i].points=students[i].points+((pointSubject*courses[w].credithours)/totalCredithours);

            for (int m = i; m <= i; ++m) {


                data << students[m].rollnumber << "       " << students[m].name << "      ";
                for (int n = 0; n < numberofquizzes; ++n) {
                    data << "    " << quizz[n].obtainednumbers << "    ";

                }
                data << "     " << perecentagequiz;

                for (int a = 0; a < numberOFassignments; ++a) {
                    data << "       " << assignment[a].obtained << "   ";


                }
                data << "     " << percentageassignments;
                data<<"     "<<mid.obtainednumber;
                data<<"     "<<percentagemids;
                data<<"     "<<final.obtainednumb;
                data<<"     "<< percentagefinal;
                data<<"     "<<totalpercentage;
                data<<"     "<<finalGrade;
                data<<"     "<<pointSubject;
                data << endl;
            }
            for (int h = 0; h < numberofquizzes; ++h) {
                quizz[h].obtainednumbers = 0;

            }
            for (int x = 0; x < numberOFassignments; ++x) {
                assignment[x].obtained = 0;

            }

            quiztotal=0;
            perecentagequiz=0;
            assigmenttotal=0;
            percentageassignments=0;
            percentagemids=0;
            percentagefinal=0;
        }
        if(w==numberSubjects-1)
        {for (int i = 0; i < Numberofstudents; ++i) {
                data << " GPA OF  " << "  " << students[i].rollnumber << "   " << students[i].name << " is "
                     << students[i].points << endl;

        }

        }

        data.close();
        }          /* here outter most*/


    }
float points(char x){
    float p=0;
    if (x=='A'){
        p=4.00;}
     else if (x=='B'){
        p=3.2;
    } else if (x=='C'){
    p=2.4;}
    else if (x=='D'){
        p=1.6;
    }else if (x=='F')
p=0.0;
    return p;
}
void cgpaCalculator()
{    float totalCredithours=0;
    float semesterCredithours = 0;
    mids mid;
    finals final;
    int Numberofstudents = 0;
    ofstream data;
    int numberSubjects = 0;

    cout << " HOW many students You want to enter ";
    cin >> Numberofstudents;
    cin.ignore(1000, '\n');
    student *students = new student[Numberofstudents];
    for (int O = 0; O < Numberofstudents; ++O) {

        cout << " enter name of the student no  " << (O + 1) << endl;


        getline(cin, students[O].name);

        cout << " enter roll no of student " << (O + 1) << endl;
        getline(cin, students[O].rollnumber);
    }
    cin.ignore(1000, '\n');
    int numberOfsmesters=0;
    cout<<" ENTER NUMBER OF SMESTERS ";
    cin>>numberOfsmesters;
    for (int i = 0; i < numberOfsmesters; ++i) {



        cout << " ENTER NUMBER OF SUBJECTS  FOR SEMESTER NO "<<(i+1)<<" ";
        cin >> numberSubjects;
        cin.ignore(1000, '\n');

        course *courses = new course[numberSubjects];
        for (int z = 0; z < numberSubjects; ++z) {
            cout << " ENTER NAME OF COURSE NO " << (z + 1);
            getline(cin, courses[z].name);
            cout << " ENTER CREDIT HOURS OF " << courses[z].name << " ";
            cin >> courses[z].credithours;
            cin.ignore(1000, '\n');
           semesterCredithours = semesterCredithours + courses[z].credithours;
totalCredithours=totalCredithours+courses[z].credithours;
        }

        for (int w = 0; w < numberSubjects; ++w) {


            cin.ignore(1000, '\n');
            float pointSubject = 0;

            char finalGrade;
            float totalpercentage = 0;
            float weightagefinal = 0;
            float weightgemid = 0;
            float weightagequiz = 0;
            float weightassignments = 0;
            float quiztotal = 0;
            float assigmenttotal = 0;
            float perecentagequiz = 0;
            float percentageassignments = 0;
            float percentagemids = 0;
            float percentagefinal = 0;
            float maxquizmarks = 0;
            float maxassignmentmarks = 0;
            cout << " ENTER RECORD FOR " << courses[w].name << endl;

            int numberofquizzes = 0;
            cout << " how many quizzes do you want to enter ";
            cin >> numberofquizzes;
            cout << " ENTER MAX MARKS IN A QUIZ" << endl;
            cin >> maxquizmarks;
            cout << " Enter weightage of Quizzes";
            cin >> weightagequiz;
            int numberOFassignments = 0;
            cout << " HOW MANY ASSIGNMENTS YOU WANT TO ENTER ";
            cin >> numberOFassignments;
            cout << " ENTER MAX MARKS IN A ASSIGNMENT : ";
            cin >> maxassignmentmarks;
            cout << " Enter weightage of Assignments :";
            cin >> weightassignments;
            cout << " ENTER WEIGHTAGE OF MIDS ";
            cin >> weightgemid;
            cout << " Enter  MAXIMUM MARKS IN  MID ";
            cin >> mid.maxmarks;
            cout << " ENTER WEIGHTAGE FINALS ";
            cin >> weightagefinal;
            cout << " ENTER MAXIMUM MARKS IN FINAL ";
            cin >> final.maxmarks;
            cin.ignore(1000, '\n');
            quiz *quizz = new quiz[numberofquizzes];
            assignments *assignment = new assignments[numberOFassignments];



            data.open("Cgpa.txt", ios::app);
            data << " *********************************************************" << endl;
            data << "/        " << courses[w].name << "  data                 /" << endl;
            data << "  ********************************************************* "<< endl;
            data << "Roll#         ";
            data << "Name " << "         ";
            for (int l = 0; l < numberofquizzes; ++l) {
                data << "quiz" << (l + 1) << "      ";
            }
            data << " %Quiz  ";
            for (int p = 0; p < numberOFassignments; ++p) {
                data << "assignment" << (p + 1) << "      ";
            }
            data << " %Assignments  ";
            data << " MIDS ";
            data << "  % Mids ";
            data << " Finals ";
            data << " % Finals";
            data << " Total %";
            data << " Grade";
            data << "   GPA ";


            data << endl;
            for (int i = 0; i < Numberofstudents; ++i) {


                cout << " ENTER RECORD FOR  " << students[i].name << endl;
                for (int j = 0; j < numberofquizzes; ++j) {
                    cout << " ENTER MARKS OBTAINED BY " << students[i].name << " IN QUIZ NO " << (j + 1) <<endl;
                    cin >> quizz[j].obtainednumbers;
                    cin.ignore(1000, '\n');

                }
                for (int j = 0; j < numberOFassignments; ++j) {
                    cout << " ENTER MARKS OBTAINED " << students[i].name << " IN ASSIGNMENT NO  " << (j + 1) << endl;
                    cin >> assignment[j].obtained;
                    cin.ignore(1000, '\n');
                }
                for (int k = 0; k < numberofquizzes; ++k) {
                    quiztotal = quizz[k].obtainednumbers + quiztotal;

                }
                for (int y = 0; y < numberOFassignments; ++y) {
                    assigmenttotal = assignment[y].obtained + assigmenttotal;

                }
                perecentagequiz = (quiztotal / (maxquizmarks * numberofquizzes) * 100);
                percentageassignments = (assigmenttotal / (maxassignmentmarks * numberOFassignments) * 100);

                cout << " Enter  OBTAINED BY " << students[i].name << " IN  MIDS ";
                cin >> mid.obtainednumber;
                percentagemids = ((mid.obtainednumber / mid.maxmarks) * 100);

                cout << " ENTER NUMBER OBTAINED BY " << students[i].name << "FINALS ";
                cin >> final.obtainednumb;
                cin.ignore(1000, '\n');
                percentagefinal = ((final.obtainednumb / final.maxmarks) * 100);
                totalpercentage = ((perecentagequiz * (weightagequiz / 100)) +
                                   (percentageassignments * (weightassignments / 100)) +
                                   (percentagefinal * (weightagefinal / 100)) +
                                   (percentagemids * ((weightgemid) / 100)));
                finalGrade = grade(totalpercentage);
                pointSubject = points(finalGrade);
                students[i].points = students[i].points + ((pointSubject * courses[w].credithours) /semesterCredithours);

                for (int m = i; m <= i; ++m) {


                    data << students[m].rollnumber << "       " << students[m].name << "      ";
                    for (int n = 0; n < numberofquizzes; ++n) {
                        data << "    " << quizz[n].obtainednumbers << "    ";

                    }
                    data << "     " << perecentagequiz;

                    for (int a = 0; a < numberOFassignments; ++a) {
                        data << "       " << assignment[a].obtained << "   ";


                    }
                    data << "     " << percentageassignments;
                    data << "     " << mid.obtainednumber;
                    data << "     " << percentagemids;
                    data << "     " << final.obtainednumb;
                    data << "     " << percentagefinal;
                    data << "     " << totalpercentage;
                    data << "     " << finalGrade;
                    data << "     " << pointSubject;
                    data << endl;
                }
                for (int h = 0; h < numberofquizzes; ++h) {
                    quizz[h].obtainednumbers = 0;

                }
                for (int x = 0; x < numberOFassignments; ++x) {
                    assignment[x].obtained = 0;

                }

                quiztotal = 0;
                perecentagequiz = 0;
                assigmenttotal = 0;
                percentageassignments = 0;
                percentagemids = 0;
                percentagefinal = 0;

            }
            if(w==numberSubjects-1)
            {for (int i = 0; i < Numberofstudents; ++i) {
                    data << " GPA OF  " << "  " << students[i].rollnumber << "   " << students[i].name << " IS "
                         << students[i].points << endl;

                    students[i].cgpa=((students[i].cgpa+(students[i].points*semesterCredithours)));
                    data<< " CGPA "<<students[i].name<<" IS "<<students[i].cgpa/totalCredithours<<endl;
            }

            }

            data.close();
        }

        semesterCredithours=0;
        for (int j = 0; j < Numberofstudents; ++j)
        {
            students[j].points=0;


        }



    }

    }




