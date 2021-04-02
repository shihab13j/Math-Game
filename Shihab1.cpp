/*#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
    for (int i=1;i<=100;i++)
    {
        int Random_Number1=rand()%15;
        int Random_Number2=rand()%15;
        int Sum;
        int A;
        cout<<"Random number 1: \n\n "<<Random_Number1<<endl;
        cout<<"Random number 2: \n\n "<<Random_Number2<<endl;
        cout<<"Your Question is : [Random Number 1 + Random Number 2]=?"<<endl;
        cin>>A;
        Sum=Random_Number1+Random_Number2;
        if(A==Sum)
        {
            cout<<"Your Answer is correct.Your total achieve point is 2"<<endl;
        }
        cout<<"The sum of  random number is : "<<Sum<<endl;
    }
}
*/
#include<iostream>
#include<stdlib.h>
#include <time.h>
#include<dos.h>
#include<conio.h>
using namespace std;
int main()
{
 system("color 0a");
 cout<<"\n\n\n\t\t\t\tPlease wait while loading\n\n";
 char a=177, b=219;
 cout<<"\t\t\t\t";
 for (int i=0;i<=15;i++)
 cout<<a;
 cout<<"\r";
 cout<<"\t\t\t\t";
 for (int i=0;i<=15;i++)
 {
  cout<<b;
  for (int j=0;j<=1e8;j++);
 }
 system("cls");
 system("color 09");
 cout<<"\n\n\n\n\n\t\t\t\t  As-Salamu-Alaikum\n\n\t\t\t\tWelcome to MATH GAME\n\n\t\t     American International University Bangladesh. "<<endl;
    int A,S;
    char L,E,M,H;
    char again='Y';
    cout<<"    "<<endl;
    cout<<"    "<<endl;
    cout<<"What can you want to do? \n\n 1.Adding \n\n 2.Substitution \n\n 3.Multiplication \n\n 4.Division\nType including [1,2,3,4] :"<<endl;
    cin>>A;
    system("cls");
    while(again=='y'|| again=='Y')
    {
    if(A==1)
    {
        system("color 05");
        cout<<"Which level do you want to play? \n\n 1.Level Easy(E) \n\n 2.Level Medium (M) \n\n 3.Level Hard (H)\nType including [E,M,H] : "<<endl;
        cin>>L;
        system("cls");

            if(L=='E')
            {
                system("color 0a");
                for (int i=1;i<=10;i++)
    {
        int Random_Number1=rand()%10+1;
        int Random_Number2=rand()%10+1;
        int Sum;
        int A;
        cout<<"Random number 1: \n\n "<<Random_Number1<<endl;
        cout<<"Random number 2: \n\n "<<Random_Number2<<endl;
        cout<<"Your Question is : [Random Number 1 + Random Number 2]=?"<<endl;
        cin>>A;
        Sum=Random_Number1+Random_Number2;
        if(A==Sum)
        {
            system("color 02");
            cout<<"your answer is correct.\n\nYour point is :"<<i++<<endl;
            if(i==10)
                cout<<"   GAME OVER\n\n***ALLAH HAFEZ**"<<endl;
            }
        else
        {
             system("color 04");
            cout<<"Sorry!Your answer is Wrong.\n\nThe correct answer is :"<<Sum<<endl;
        break;
        }
    }
            }
            if(L=='M')
            {
                system("color 0e");
                for (int i=1;i<=10;i++)
    {
        int Random_Number1=rand()%100+1;
        int Random_Number2=rand()%100+1;
        int Sum;
        int A;
        cout<<"Random number 1: \n\n "<<Random_Number1<<endl;
        cout<<"Random number 2: \n\n "<<Random_Number2<<endl;
        cout<<"Your Question is : [Random Number 1 + Random Number 2]=?"<<endl;
        cin>>A;
        Sum=Random_Number1+Random_Number2;
        if(A==Sum)
        {
            {
                system("color 02");
            cout<<"your answer is correct.\n\nPlease answer your next question."<<endl;
            if(i==10)
                cout<<"GAME OVER\n\n***ALLAH HAFEZ**"<<endl;
            }
            cout<<"your answer is correct.\n\nyour point is :"<<i++<<endl;
        }
        else
        {   system("color 04");
            cout<<"Sorry!Your answer is Wrong.\n\nThe correct answer is :"<<Sum<<endl;
        break;
        }
    }
            }
            if(L=='H')
            {
                system("color 0c");
                for (int i=1;i<=10;i++)
    {
        int Random_Number1=rand()%1000+1;
        int Random_Number2=rand()%1000+1;
        int Sum;
        int A;
        cout<<"Random number 1: \n\n "<<Random_Number1<<endl;
        cout<<"Random number 2: \n\n "<<Random_Number2<<endl;
        cout<<"Your Question is : [Random Number 1 + Random Number 2]=?"<<endl;
        cin>>A;
        Sum=Random_Number1+Random_Number2;
        if(A==Sum)
        {
            {
                system("color 02");
            cout<<"your answer is correct.\n\nPlease answer your next question."<<endl;
            if(i==10)
                cout<<"GAME OVER\n\n***ALLAH HAFEZ**"<<endl;
            }
            cout<<"your answer is correct.\n\nyour point is :"<<i++<<endl;
        }
        else
        {
             system("color 04");
            cout<<"Sorry!Your answer is Wrong.\n\nThe correct answer is :"<<Sum<<endl;
        break;
        }
    }
            }
        }
       else if(A==2)
    {
        system("color 0f");
        cout<<"Which level do you want to play? \n\n 1.Level Easy(E) \n\n 2.Level Medium (M) \n\n 3.Level Hard (H)\nType including [E,M,H] : "<<endl;
        cin>>L;
        system("cls");

            if(L=='E')
            {
                system("color 0a");
                for (int i=2;i<11;i++)
    {
        int Random_Number1=rand()%10+1;
        int Random_Number2=rand()%10+1;
        int Sum;
        int A;
        cout<<"Random number 1: \n\n "<<Random_Number1<<endl;
        cout<<"Random number 2: \n\n "<<Random_Number2<<endl;
        cout<<"Your Question is : [Random Number 1 - Random Number 2]=?"<<endl;
        cin>>A;
        Sum=Random_Number1-Random_Number2;
        if(A==Sum)
        {
            {
                system("color 02");
            cout<<"your answer is correct.\n\nPlease answer your next question."<<endl;
            if(i==10)
                cout<<"GAME OVER\n\n***ALLAH HAFEZ**"<<endl;
            }

            cout<<"your answer is correct.\n\nPlease answer your next question."<<endl;
        }
        else
        {
             system("color 04");
            cout<<"Sorry!Your answer is Wrong.\n\nThe correct answer is :"<<Sum<<endl;
        break;
        }
    }
            }
            if(L=='M')
            {
                system("color 0e");
                for (int i=1;i<=10;i++)
    {
        int Random_Number1=rand()%100+1;
        int Random_Number2=rand()%100+1;
        int Sum;
        int A;
        cout<<"Random number 1: \n\n "<<Random_Number1<<endl;
        cout<<"Random number 2: \n\n "<<Random_Number2<<endl;
        cout<<"Your Question is : [Random Number 1 - Random Number 2]=?"<<endl;
        cin>>A;
        Sum=Random_Number1-Random_Number2;
        if(A==Sum)
        {
            {
                system("color 02");
            cout<<"your answer is correct.\n\nPlease answer your next question."<<endl;
            if(i==10)
                cout<<"GAME OVER\n\n***ALLAH HAFEZ**"<<endl;
            }

            cout<<"your answer is correct.\n\nPlease answer your next question."<<endl;
    }
        else
        {
             system("color 04");
            cout<<"Sorry!Your answer is Wrong.\n\nThe correct answer is :"<<Sum<<endl;
        break;
        }
    }
            }
            if(L=='H')
            {
                system("color 0c");
                for (int i=1;i<=10;i++)
    {
        int Random_Number1=rand()%1000+1;
        int Random_Number2=rand()%1000+1;
        int Sum;
        int A;
        cout<<"Random number 1: \n\n "<<Random_Number1<<endl;
        cout<<"Random number 2: \n\n "<<Random_Number2<<endl;
        cout<<"Your Question is : [Random Number 1 - Random Number 2]=?"<<endl;
        cin>>A;
        Sum=Random_Number1-Random_Number2;
        if(A==Sum)
        {
            {
            system("color 02");
            cout<<"your answer is correct.\n\nPlease answer your next question."<<endl;
            if(i==10)
                cout<<"GAME OVER\n\n***ALLAH HAFEZ**"<<endl;
            }

            cout<<"your answer is correct.\n\nPlease answer your next question."<<endl;
    }
        else
        {
             system("color 04");
            cout<<"Sorry!Your answer is Wrong.\n\nThe correct answer is :"<<Sum<<endl;
        break;
        }
    }
            }
        }
       else if(A==3)
    {
        system("color 09");
        cout<<"Which level do you want to play? \n\n 1.Level Easy(E) \n\n 2.Level Medium (M) \n\n 3.Level Hard (H)\nType including [E,M,H] : "<<endl;
        cin>>L;
        system("cls");
            if(L=='E')
                 {
                system("color 0a");
                for (int i=1;i<=10;i++)
    {
        int Random_Number1=rand()%10+1;
        int Random_Number2=rand()%10+1;
        int Sum;
        int A;
        cout<<"Random number 1: \n\n "<<Random_Number1<<endl;
        cout<<"Random number 2: \n\n "<<Random_Number2<<endl;
        cout<<"Your Question is : [Random Number 1 * Random Number 2]=?"<<endl;
        cin>>A;
        Sum=Random_Number1*Random_Number2;
        if(A==Sum)
        {
            system("color 02");
            cout<<"your answer is correct.\n\nYour point is :"<<i++<<endl;
            if(i==10)
                cout<<"   GAME OVER\n\n***ALLAH HAFEZ**"<<endl;
            }
        else
        {
             system("color 04");
            cout<<"Sorry!Your answer is Wrong.\n\nThe correct answer is :"<<Sum<<endl;
        break;
        }
    }
            }
            if(L=='M')
            {
                system("color 0e");
                for (int i=1;i<=10;i++)
    {
        int Random_Number1=rand()%100+1;
        int Random_Number2=rand()%100+1;
        int Sum;
        int A;
        cout<<"Random number 1: \n\n "<<Random_Number1<<endl;
        cout<<"Random number 2: \n\n "<<Random_Number2<<endl;
        cout<<"Your Question is : [Random Number 1 * Random Number 2]=?"<<endl;
        cin>>A;
        Sum=Random_Number1*Random_Number2;
        if(A==Sum)
        {

            {
               system("color 02");
            cout<<"your answer is correct.\n\nPlease answer your next question."<<endl;
            if(i==10)
                cout<<"GAME OVER\n\n***ALLAH HAFEZ**"<<endl;
            }

            cout<<"your answer is correct.\n\nPlease answer your next question."<<endl;
        }
        else
        {
             system("color 04");
            cout<<"Sorry!Your answer is Wrong.\n\nThe correct answer is :"<<Sum<<endl;
        break;
        }
    }
            }
            if(L=='H')
            {
                system("color 0c");
                for (int i=1;i<=10;i++)
    {
        int Random_Number1=rand()%1000+1;
        int Random_Number2=rand()%1000+1;
        int Sum;
        int A;
        cout<<"Random number 1: \n\n "<<Random_Number1<<endl;
        cout<<"Random number 2: \n\n "<<Random_Number2<<endl;
        cout<<"Your Question is : [Random Number 1 * Random Number 2]=?"<<endl;
        cin>>A;
        Sum=Random_Number1*Random_Number2;
        if(A==Sum)
        {
           {
               system("color 02");
            cout<<"your answer is correct.\n\nPlease answer your next question."<<endl;
            if(i==10)
                cout<<"GAME OVER\n\n***ALLAH HAFEZ**"<<endl;
            }

            cout<<"your answer is correct.\n\nPlease answer your next question."<<endl;
        }
        else
        {
             system("color 04");
            cout<<"Sorry!Your answer is Wrong.\n\nThe correct answer is :"<<Sum<<endl;
        break;
        }
    }
            }
        }
       else if(A==4)
    {
        system("color 0b");
        cout<<"Which level do you want to play? \n\n 1.Level Easy(E) \n\n 2.Level Medium (M) \n\n 3.Level Hard (H)\nType including [E,M,H] : "<<endl;
        cin>>L;
        system("cls");
            if(L=='E')
            {
                system("color 0a");
                for (int i=1;i<=10;i++)
    {
        int Random_Number1=rand()%10+1;
        int Random_Number2=rand()%10+1;
        int Sum;
        int A;
        cout<<"Random number 1: \n\n "<<Random_Number1<<endl;
        cout<<"Random number 2: \n\n "<<Random_Number2<<endl;
        cout<<"Your Question is : [Random Number 1 / Random Number 2]=?"<<endl;
        cin>>A;
        Sum=Random_Number1/Random_Number2;
        if(A==Sum)
        {
            {
            system("color 02");
            cout<<"your answer is correct.\n\nPlease answer your next question."<<endl;
            if(i==10)
                cout<<"GAME OVER\n\n***ALLAH HAFEZ**"<<endl;
            else
                cout<<"See you next time"<<endl;
            }

            cout<<"your answer is correct.\n\nPlease answer your next question."<<endl;
        }
        else
        {
             system("color 04");
            cout<<"Sorry!Your answer is Wrong.\n\nThe correct answer is :"<<Sum<<endl;
        break;
        }
    }
            }
            if(L=='M')
            {
                system("color 0e");
                for (int i=1;i<=10;i++)
    {
        int Random_Number1=rand()%100+1;
        int Random_Number2=rand()%100+1;
        int Sum;
        int A;
        cout<<"Random number 1: \n\n "<<Random_Number1<<endl;
        cout<<"Random number 2: \n\n "<<Random_Number2<<endl;
        cout<<"Your Question is : [Random Number 1 / Random Number 2]=?"<<endl;
        cin>>A;
        Sum=Random_Number1/Random_Number2;
        if(A==Sum)
        {
            system("color 02");
            cout<<"your answer is correct.\n\nPlease answer your next question."<<endl;
            if(i==10)
                cout<<"GAME OVER\n\n***ALLAH HAFEZ**"<<endl;
            else
                cout<<"See you next time"<<endl;
            cout<<"your answer is correct.\n\nPlease answer your next question."<<endl;
        }
            //cout<<"your answer is correct.\n\nPlease answer your next question."<<endl;
        else
        {
             system("color 04");
            cout<<"Sorry!Your answer is Wrong.\n\nThe correct answer is :"<<Sum<<endl;
        break;
        }
    }
            }
            if(L=='H')
            {
                system("color 0c");
                for (int i=1;i<=10;i++)
    {
        int Random_Number1=rand()%1000+1;
        int Random_Number2=rand()%1000+1;
        int Sum;
        int A;
        cout<<"Random number 1: \n\n "<<Random_Number1<<endl;
        cout<<"Random number 2: \n\n "<<Random_Number2<<endl;
        cout<<"Your Question is : [Random Number 1 / Random Number 2]=?"<<endl;
        cin>>A;
        Sum=Random_Number1/Random_Number2;
        if(A==Sum)
        {
           {
               system("color 02");
            cout<<"your answer is correct.\n\nPlease answer your next question."<<endl;
            if(i==10)
                cout<<"GAME OVER\n\n***ALLAH HAFEZ**"<<endl;
            }

            cout<<"your answer is correct.\n\nPlease answer your next question."<<endl;
        }
        else
        {
             system("color 04");
            cout<<"Sorry!Your answer is Wrong.\n\nThe correct answer is :"<<Sum<<endl;
        break;
        }
    }
            }
        }
        else
            cout<<"You press the wrong button.\n\nPlease press the correct button."<<endl;
            system("color 09");
            cout<<"PLAY AGAIN?(y/n)"<<endl;
            cin>>again;
            }
    }

