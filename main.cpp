#include <iostream>
#include<conio.h>
#include<string.h>
#include<cmath>
#include<stdlib.h>
#define clrscr system ("clr");

using namespace std;
   int deposit(int deposit_amount, int function_balance);

int main()
{
    int user[]={0,1,2,3,4,5,6,7,8,9};
    int initial_balance[]={100,99,300,500,600,700,800,900,1000,1500};
    int  account_number;
    a:
    cout<<"\n \t Please enter your account number: ";
    cin>>account_number;


    if(account_number == user[account_number])
    {
        s:
        cout<<"\n \n";

    cout << "\t ----------WELCOME TO UCC BANK---------- \t" << endl;

    cout<<"\n \n";
    /*cout<<"\t 1. sign In"<<endl;*/

    cout<<"\t 2. Balance"<<endl;
    cout<<"\t 3. Deposit"<<endl;
    cout<<"\t 4. Withdrawal"<<endl;
    cout<<"\t 5. Exit"<<endl;
    cout<<"\n ";
    cout<<"\t ------------------------------------------\n";

    int current_balance = initial_balance[account_number];
    int choice;
    int amount;
    int widthdraw_amount;
    int final_balance = (current_balance - widthdraw_amount) ;

    int Sign_in = 1;
    int Balance = 2;
    int Deposit = 3;
    int Withdrawal = 4;
    int Exit = 5;


        cout<<"\n";
        cout<<"\t Enter Number ";
        cin>> choice;
            cout<<"\n";
     if(choice ==2)
     {
         cout<<"\t Your balance is $"<<initial_balance[account_number];

        if( initial_balance[account_number]< 100)
        {
         cout<<"\n \t Dear Customer; \t you have a Low Balance \n";
        }

     }
     else if(choice==3)
    {
     cout<<"\t How much do you want to deposit?  ";
     cin>>amount;
     if(amount>=1)
     {
        current_balance = current_balance +amount;
        cout<<"\t Your current Balance is $"<<current_balance;
     }
     else
        {
            cout<<"\n\t Invalid amount! \n";
            cout<<"\t Enter amount again  ";
            cin>>amount;

            if(amount>=1)
            {
                current_balance = initial_balance[account_number]+amount;
                cout<<"\t Your current Balance is $"<<current_balance;
                cout<<"\n \n";
            }
            else
            {
                cout<<"\n \n";
                system("cls");
                goto s;
            }
        }

    }
     else if(choice==4)
     {
         cout<<"\t Please enter amount ";
         cin>>widthdraw_amount;
         if(amount >= current_balance)
         {
             cout<<"\t You have ISUFFICIENT BALANCE \n";
             cout<<"\t Try Again \n \n";
             cout<<"\t Please enter amount ";
             cin>>widthdraw_amount;

             cout<<"\t Your Current Balance is "<<final_balance;

         }
         else
         {
             cout<<"\t Your Current Balance is "<< final_balance;
         }
     }
     else if(choice == 5)
     {
         cout<<"\n \t *** GOOD BYE *** \n \n";
         system("cls");
         goto a;
     }

    else if(account_number != user[account_number])
    {
        cout<<"\t INVALID ACCOUNT!\n";
        cout<<"\t PLEASE TRY AGAIN \n \n";
        system("cls");
        goto a;

    }
    }
    cout<<"\n \n enter 0 to close the program"<<endl;
    return 0;

}


