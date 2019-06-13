//Georgia Smith 1/16/2019 HW #0

#include <iostream>
#include <string>
using namespace std;

class FizzBuzz{
   private:
      int max;
      int factor[15];//max set at 15 buzzword/factor combos
      string buzz[15];
   public:
      FizzBuzz(){
         clear();//constructor setting bases for the arrays and max to zero
      }
      void clear(){//clears data members
        for(int i = 0; i<15; i++){
            factor[i] = 0;
            buzz[i] = "";
        }
        max=0;
      }
      void run(){//runs game
         int flag;
         if (max == 0){
           cout<<"You have to set a limit greater than 0!"<<endl;//protection in case maximum values has not been set
           cout<<"Game not run"<<endl;
           return;
         }
         for(int i = 1; i<=max; i++){
            flag = 0;
            for(int j = 0; j<15; j++){//checks factors against numbers
               if (factor[j] != 0){
                  if(i%factor[j]== 0){
                     cout<<buzz[j];
                     flag = 1;
                  }
             }
             if(factor[j+1]==0){j=15;}
            }
            if (flag == 0){//if no factors were present prints number
               cout<<i;
            }
            cout<<endl;
         }
      }
      void addRule(){
         int i;
         int flag = 0;
         cout<<"What is your factor?"<<endl;
         for(i = 0; i<15; i++){
            if(factor[i] == 0){//adds new factors to the next empty space in array
               cin>>factor[i];
               if(i==14){cout<<"You have reached your maximum factors for this program\nbeware - no more may be added";}//alert of reaching maximum array value
               break;
            }
            if(i==14){cout<<"factor not added - must clear before adding more"; flag = 1;}
         }

         if (flag ==0){
           cout<<"What is your term to pair it with?"<<endl;
           cin>>buzz[i];
        }
      }
      void setLimit(){
         cout<<"What is your limit?"<<endl;
         cin>>max;
      }
};

int main(){
   FizzBuzz game1;
   int choice;

   cout<<"Menu"<<endl;
   cout<<"1 - clear data members"<<endl;
   cout<<"2 - run game"<<endl;
   cout<<"3 - add rule (you may have 15)"<<endl;
   cout<<"4 - set the limit"<<endl;
   cout<<"5 - quit program"<<endl<<endl;
   cout<<"Enter your choice"<<endl;
   cin>>choice;

while(choice!=5){
   switch (choice){
      case 1:
         game1.clear();
         break;
      case 2:
         game1.run();
         break;
      case 3:
         game1.addRule();
         break;
      case 4:
         game1.setLimit();
         break;
   }
   cout<<"Menu"<<endl;
   cout<<"1 - clear data members"<<endl;
   cout<<"2 - run game"<<endl;
   cout<<"3 - add rule"<<endl;
   cout<<"4 - set the limit"<<endl;
   cout<<"5 - quit program"<<endl<<endl;
   cout<<"Enter your choice"<<endl;
   cin>>choice;
}

   return 0;
}
