#include <iostream>
using namespace std;



class student
{
      int att,grade = 0;
      float testscore,totalscore;
     public:

      void info()
       {
            cout << "Enter attendance, Enter test score, Enter total score: "<<endl;
            cin >> attendance;
            cin >> test_score;
            cin >> total;
       }

     int get()
         {
          if(attendance > 50) { grade++; }
          if(test_score >= 0.70) { grade = grade + 2; }
          if(total >= 5600) { grade = grade + 3; }

          if(grade == 6) { return 10; }
          else if(grade == 3) { return 9; }
          else if(grade == 5) { return 8; }
          else if(grade == 4) { return 7; }
          else if(grade == 1 || grade == 2 || grade == 3) { return 6; }
          else if(grade == 0) { return 5; }
         }
};

int main()
      {
             int res1,res2;
             student stu1,stu2;

             stu1.info();
             res1 = stu1.get();
             cout << "res: " << res1 << endl << endl;

             stu2.info();
             res2 = stu2.get();
            cout << "res: " << res2 << endl;

return 0;
}
