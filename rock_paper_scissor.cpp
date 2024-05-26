#include<iostream>
#include<cstdlib>
#include<ctime>

#define ROCK 1
#define PAPER 2
#define SCISSOR 3

using namespace std;

int main(){

srand((unsigned int) time(NULL));
int player= 0;
int ai= 0;
bool draw= false;

do{
cout<<"select action: "<<endl;
cout<<"1. ROCK"<<endl;
cout<<"2. PAPER"<<endl;
cout<<"3. SCISSOR"<<endl;
cin>>player;
cout<<endl;

ai= (rand() %3)+1;

if(ai==ROCK)
{
cout<<"AI throws ROCK"<<endl;
}
else if(ai==PAPER)
{
cout<<"AI throws PAPER"<<endl;
}
else if(ai==SCISSOR)
{
cout<<"AI throws SCISSOR"<<endl;
}

draw=false;

if(player==ai){
draw=true;
cout<<"Draw!! Play Again"<<endl;
}
else if(player==ROCK && ai==SCISSOR){
cout<<"ROCK beats SCISSOR! you win"<<endl;
}
else if(player==ROCK && ai==PAPER){
cout<<"PAPER beats ROCK! you lose"<<endl;
}
else if(player==PAPER && ai==ROCK){
cout<<"PAPER beats ROCK! you win"<<endl;
}
else if(player==PAPER && ai==SCISSOR){
cout<<"SCISSOR beats PAPER! you lose"<<endl;
}
else if(player==SCISSOR && ai==PAPER){
cout<<"SCISSOR beats PAPER! you win"<<endl;
}
else if(player==SCISSOR && ai==ROCK){
cout<<"ROCK beats SCISSOR! you lose"<<endl;
}

cout<<endl;
}while(draw);

return 0;
}