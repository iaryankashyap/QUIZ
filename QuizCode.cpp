
#include<iostream>
#include<stdlib.h>
#include<chrono>
using namespace std;

void sleep(float seconds){
    clock_t startClock = clock();
    float secondsAhead = seconds * CLOCKS_PER_SEC;
    // do nothing until the elapsed time has passed.
    while(clock() < startClock+secondsAhead);
    return;
}

main()
  {
    char ch;
    int A,B,C,D,E,j,z;
    cout<<string(22, '\n');
    cout<<"\n"<<"\n"<<"\n"<<"\n"<<"\n"<<"\n"<<"\n"<<"\n"<<"\n";
    cout<<"                          WELCOME TO OUR QUIZ...";
    cout<<"\n"<<"\n"<<"\n"<<"\n";
    cout<<"                        Click anywhere to continue.";
    cin.get(ch);
    cout<<string(22, '\n');

    cout<<"\n"<<"\n"<<"\n";
    cout<<" A:- Can you analyze what is the probability of meeting someone who is having an above average number of arms?";
    cout<<"\n"<<"  1. Impossible";
    cout<<"\n"<<"  2. Unlikely ";
    cout<<"\n"<<"  3. Fifty Fifty ";
    cout<<"\n"<<"  4. Certain ";
    cout<<"\n"<<"\n"<<"What is your answer?  -  "; //answer is certain
    cin>>A;
    cout<<string(22, '\n');

    cout<<"\n"<<"\n"<<"\n";
    cout<<" B:-  1  3   5"<<"\n"<<"      2  4   ?"<<"\n"<<"Do you know what will come in place of \"?\" ?";
    cout<<"\n"<<"  1. 6 ";
    cout<<"\n"<<"  2. R  ";
    cout<<"\n"<<"  3. 5";
    cout<<"\n"<<"  4. 1";
    cout<<"\n"<<"\n"<<"What is your answer?  -  "; //answer is r
    cin>>B;
    cout<<string(22, '\n');
    cout<<"\n"<<"\n"<<"\n";
    cout<<" C:-  If a peacock has 4 baby peacock, how many eggs he have laid?";
    cout<<"\n"<<"  1. 4 ";
    cout<<"\n"<<"  2. 7 ";
    cout<<"\n"<<"  3. 6 ";
    cout<<"\n"<<"  4. 0 ";
    cout<<"\n"<<"\n"<<"What is your answer?  -  ";
    cin>>C;
    cout<<string(22, '\n');

     cout<<"\n"<<"\n"<<"\n";
    cout<<" D:-  The central rice station of India is situated in?";
    cout<<"\n"<<"  1. Chennai ";
    cout<<"\n"<<"  2. Cuttack ";
    cout<<"\n"<<"  3. Bangalore ";
    cout<<"\n"<<"  4. Quilon ";
    cout<<"\n"<<"\n"<<"What is your answer?  -  "; // cuttack
    cin>>D;
    cout<<string(22, '\n');
    cout<<"\n"<<"\n"<<"\n";
    cout<<" E:-  The chief ore of Aluminium is?";
    cout<<"\n"<<"  1. Bauxite ";
    cout<<"\n"<<"  2. Iron ";
    cout<<"\n"<<"  3. Cryolite";
    cout<<"\n"<<"  4. Haematite";
    cout<<"\n"<<"\n"<<"What is your answer?  -  "; //BAUXITE
    cin>>E;
    cout<<string(22, '\n');
    j=0; //SCORE COUNTER

    if(A==4){
        j=j+1;
    }
    if(B==2){
        j=j+1;
    }
    if(C==4){
        j=j+1;
    }
    if(D==2){
        j=j+1;
    }
    if(E==1){
        j=j+1;
    }
    cout<<"\n"<<"\n"<<"\n"<<"\n"<<"\n"<<"\n"<<"\n"<<"\n"<<"\n"<<"\n";
    cout<<"                    press any key to view your result";

    cin.get(ch);
    cout<<string(22, '\n');
     cout<<"\n"<<"\n"<<"\n"<<"\n"<<"\n"<<"\n"<<"\n"<<"\n"<<"\n";
    cout<<"                              PLEASE WAIT";
    sleep(1.0);
    cout<<string(22, '\n');
      cout<<"\n"<<"\n"<<"\n"<<"\n"<<"\n"<<"\n"<<"\n"<<"\n"<<"\n";
    cout<<"                              PLEASE WAIT.";
     sleep(1.0);
     cout<<string(22, '\n');
       cout<<"\n"<<"\n"<<"\n"<<"\n"<<"\n"<<"\n"<<"\n"<<"\n"<<"\n";
    cout<<"                              PLEASE WAIT..";
       sleep(1.0);
       cout<<string(22, '\n');
       cout<<"\n"<<"\n"<<"\n"<<"\n"<<"\n"<<"\n"<<"\n"<<"\n"<<"\n";
    cout<<"                              PLEASE WAIT...";
      sleep(1.0);
     cout<<"\n"<<"\n"<<"\n"<<"\n"<<"\n"<<"\n"<<"\n"<<"\n"<<"\n"<<"\n";
    cout<<"                YOUR RESULT IS READY. CLICK TO CONTINUE.";

      cin.get(ch);
      cout<<string(22, '\n');
      cout<<"\n"<<"\n"<<"\n"<<"\n"<<"\n"<<"\n"<<"\n"<<"\n"<<"\n"<<"\n";
       cout<<"                         SCORE: "<<j<<" out of 5"<<"\n";
    if(j==5) cout<<"                           YOU ARE AWESOME";
    if(j==4) cout<<"                        PRETTY GOOD BUDDY, NICE";
    if(j==3) cout<<"                               NICE TRY";
    if(j==2) cout<<"                            NEED SOME WORK";
    if(j==1) cout<<"                           POOR PERFORMANCE";
    if(j==0) cout<<"                        ITS NOT YOUR CUP OF TEA";

    cin.get(ch);


     cout<<string(22, '\n');
    cout<<"\n"<<"\n"<<"\n"<<"\n"<<"\n"<<"\n"<<"\n"<<"\n"<<"\n";
    cout<<"                     DO YOU WANT TO CHECK YOUR ANSWERS"<<"\n" ;

    cout<<"                       1.) YES               2.) NO      " ;
    cout<<"\n"<<"\n"<<"\n";
    cout<<"                      PLEASE CHOOSE ONE OPTION:-   "  ; cin>>z;

    if(z==2){
             cout<<string(22, '\n');
      cout<<"\n"<<"\n"<<"\n"<<"\n"<<"\n"<<"\n"<<"\n"<<"\n"<<"\n"<<"\n";
    cout<<"                               THANK YOU";
    cin.get(ch);
    cout<<string(22, '\n');
      cout<<"\n"<<"\n"<<"\n"<<"\n"<<"\n"<<"\n"<<"\n"<<"\n"<<"\n"<<"\n";
    cout<<"                 PROGRAMMED BY - PARAS AGGARWAL AND ARYAN KASHYAP";
    cin.get(ch);

    }
    else{


    cout<<string(22, '\n');

     cout<<"\n"<<"\n"<<"\n";
    cout<<" A:- Can you analise what is the probability of meeting someone who is having an above average number of arms?";
    cout<<"\n"<<"  1. Impossible";
    cout<<"\n"<<"  2. Unlikely ";
    cout<<"\n"<<"  3. Fifty Fifty ";
    cout<<"\n"<<"  4. Certain ";
    cout<<"\n"<<"\n"<<"What is your answer?  -  "; //answer is certain
    cout<<A;
    cout<<"\n"<<"\n"<<"\n";
    cout<<" Correct Answer is: 4. Certain  "<<"\n";
    cout<<"                   >> The number of average arms of a human in the world is less than 2. So meeting someone with above average number of arms is certain. ";
    cin.get(ch);
    cout<<string(22, '\n');

     cout<<"\n"<<"\n"<<"\n";
    cout<<" B:-  1  3   5"<<"\n"<<"      2  4   ?"<<"\n"<<"Do you know what will come in place of \"?\" ?";
    cout<<"\n"<<"  1. 6 ";
    cout<<"\n"<<"  2. R  ";
    cout<<"\n"<<"  3. 5";
    cout<<"\n"<<"  4. 1";
    cout<<"\n"<<"\n"<<"What is your answer?  -  "; //answer is r
    cout<<B;
     cout<<"\n"<<"\n"<<"\n";
    cout<<" Correct Answer is: 2. R "<<"\n";
    cout<<"                   >> This is the series of a gear on a car. ";
    cin.get(ch);
    cout<<string(22, '\n');
     cout<<"\n"<<"\n"<<"\n";
    cout<<" C:-  If a peacock has 4 baby peacock, how many eggs he have laid?";
    cout<<"\n"<<"  1. 4 ";
    cout<<"\n"<<"  2. 7 ";
    cout<<"\n"<<"  3. 6 ";
    cout<<"\n"<<"  4. 0 ";
    cout<<"\n"<<"\n"<<"What is your answer?  -  ";
    cout<<C;
     cout<<"\n"<<"\n"<<"\n";
    cout<<" Correct Answer is: 4. 0 "<<"\n";
    cout<<"                    >> Peacock does not lay eggs. Peahen does.   ";
    cin.get(ch);
    cout<<string(22, '\n');

     cout<<"\n"<<"\n"<<"\n";
    cout<<" D:-  The central rice station of India is situated in?";
    cout<<"\n"<<"  1. Chennai ";
    cout<<"\n"<<"  2. Cuttack ";
    cout<<"\n"<<"  3. Bangalore ";
    cout<<"\n"<<"  4. Quilon ";
    cout<<"\n"<<"\n"<<"What is your answer?  -  "; // cuttack
    cout<<D;
     cout<<"\n"<<"\n"<<"\n";
    cout<<" Correct Answer is: 2. Cuttack  ";


     cin.get(ch);
    cout<<string(22, '\n');
     cout<<"\n"<<"\n"<<"\n";
    cout<<" E:-  The chief ore of Aluminium is?";
    cout<<"\n"<<"  1. Bauxite ";
    cout<<"\n"<<"  2. Iron ";
    cout<<"\n"<<"  3. Cryolite";
    cout<<"\n"<<"  4. Haematite";
    cout<<"\n"<<"\n"<<"What is your answer?  -  " ; //BAUXITE
    cout<<E;
     cout<<"\n"<<"\n"<<"\n";
    cout<<" Correct Answer is:  1. Bauxite ";

    cin.get(ch);
}
 }









