#include<iostream>
#include<string>
using namespace std;

int guess;
int total;

class Question
{
    private:
       string Ques_text;
       string Ans_1;
       string Ans_2;
       string Ans_3;
       string Ans_4;

       int correct_ans;
       int ques_score;
    
    public:
      void setValues(string,string,string,string,string,int,int);
      void askQues();
};

int main()
{
    cout<<endl;
    cout<<endl;
    cout<<"*********************************************"<<endl;
    cout<<"                   Quiz                      "<<endl;
    cout<<"*********************************************"<<endl;
    cout<<endl;
  
    string name;
    cout<<"Enter Your Name : ";
    cin>>name;

    // cout<<"Please Enter to Start:"<<endl;
    // cin.get();
    
    //objects of class Question

    Question q1;
    Question q2;
    Question q3;
    Question q4;
    Question q5;
    Question q6;
    Question q7;
    Question q8;
    Question q9;
    Question q10;

     //setting values using setvalues function 

    q1.setValues("Which of the following is the address operator?",
                "@",
                "#",
                "&",
                "%",
                3,
                10);

    q2.setValues("The C++ language is ______ object-oriented language.",
                "Pure Object oriented",
                "Not Object oriented",
                "Semi Object-oriented or Partial Object-oriented",
                "None of the above",
                3,
                10);

     q3.setValues(" C++ is a ___ type of language.",
                "High-level Language",
                "Middle-level language",
                "Low-level language",
                "None of the above",
                2,
                10);

     q4.setValues("Who invented C++??",
                "Dennis Ritchie",
                "Ken Thompson",
                "Brian Kernighan",
                "Bjarne Stroustrup",
                4,
                10);

     q5.setValues("Which of the following user-defined header file extension used in c++?",
                "hg",
                "cpp",
                "h",
                "hf",
                3,
                10);

   q1.askQues();
   q2.askQues();
   q3.askQues();
   q4.askQues();
   q5.askQues();

   cout<<"Your Score is "<<total<<" out of 50"<<endl;
   cout<<endl;

   if(total>=30)
   {
       cout<<"CONGRATULATIONS ! YOU PASSES THE QUIZ."<<endl;
       cout<<endl;
   }
   else{
       cout<<"OPPS! Better luck next time"<<endl;

   }
}

//here defining function setValues() of class Question
void Question::setValues(string q,string a1,string a2,string a3,string a4,int ca,int pa){
    Ques_text=q;
    Ans_1=a1;
    Ans_2=a2;
    Ans_3=a3;
    Ans_4=a4;
    correct_ans=ca;
    ques_score=pa;
}

void Question::askQues()
{
    cout<<endl;
    cout<<Ques_text<<endl;
    cout<<"1. "<<Ans_1<<endl;
    cout<<"2. "<<Ans_2<<endl;
    cout<<"3. "<<Ans_3<<endl;
    cout<<"4. "<<Ans_4<<endl;

    cout<<endl;
    cout<<"Your Annwer : ";
    cin>>guess;

    if (guess==correct_ans)
    {
        cout<<endl;
        cout<<"Great! You are correct."<<endl;
        total=total+ques_score;
        cout<<"Score : "<<ques_score<<" out of "<<ques_score<<endl;
        cout<<endl;
    }
    else{
        cout<<endl;
        cout<<"Oh No! You are wrong"<<endl;
        cout<<"Score : 0 "<<"out of "<<ques_score<<endl;
        cout<<"The correct answer is : "<<correct_ans<<endl;
        cout<<endl;
    }
}