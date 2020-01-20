//**********WELCOME TO MY PROGRAM************

//HEADER FILES USED

 #include<iostream.h>
 #include<conio.h>
 #include<stdlib.h>

 void main()
 {clrscr();
 int n,a;
 cout<<"\t\t____________________________"
     <<"\n\t\t|***Welcome to your cafe***|"
     <<"\n\t\t____________________________"
     <<"\n\t\tGood~`Morning^~Sir/\/*^-."
     <<"\nWhat would you like to take"
     <<"\nHere are some choices:-"
     <<"\n______________________________________________________"
     <<"\n1.coffee\n2.tea\n3.cookie\n4.icecream\n5.buns"
     <<"\n______________________________________________________";

 cout<<"\nChoose what you want:";
 cin>>n;
 cout<<"\n_____________________________________________";
 n==1?cout<<"\nHere are some more sub-choice\n1.cookie coffee\n2.cold coffee":
      (n==2?cout<<"\nHere are some more sub-choices\n1.black tea\n2.green tea":
      (n==3?cout<<"\nHere are some more sub-choices\n1.choclate cookie\n2.hard cookie":
      (n==4?cout<<"\nHere are some sub-choices\n1.vanilla icecream\n2.cup icecream":
      (n==5?cout<<"\nHere are some sub-choices\n1.plain buns\n2.mix buns":cout<<"\nSoory sir not more choices beyond this"))));
cout<<"\n_______________________________________________";
 if(n>0&&n<=5)
{
cin>>a;
cout<<"\nsir your bill:";
 a>0&&a<3?cout<<(a==1?cout<<"\nis="<<40+(5*40/100.):(a==2?cout<<"\nis="<<50+(5*50/100.): cout<<"\n no choices")):cout<<"\tis not possible";
}
else
{
cout<<"\npress any key to exit";
}
getch();
}
