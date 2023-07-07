#include <iostream>
using namespace std;
#include "stack.h"
#include <cstring>

int main(int argc, char *argv[]) {
  Stack s;
  int i,j, match;
  char c;
  for (j=1;j<argc;j++){
    match=1;
  for(i=0;i<strlen(argv[1]);i++){
    switch(argv[1][i]){
      case '[':
      case '{':
        s.push(argv[1][i]);
        break;
      case '}':
        c=s.pop();
        //break;
      if (c != '{')
        match = 0;
        break;
      case ']':
        c=s.pop();
        //break;
      if (c != '[')
        match = 0;
        break;
    }
  }
  }
  if(match==0) cout<<"Parentheses do not match"<<endl;
  //else if(s.get_size()>0) //too many open
  //else if() // too close open
  else cout<<"Parentheses match"<<endl;


  
  /*for(i=0;i<strlen(argv[1]);i++){
    if (argv[1][i]=='x'){
      //pop
      s.pop();
    }
    else{
      //push it
      s.push(atoi(argv[i]));
    }
  }*/
 /*s.push(5);
  s.push(1);
  s.push(7);
  s.push(6);
  s.pop();//6
  s.pop();//7
  s.push(3);
  s.push(4);
 s.pop();//4
  s.pop();//3
  s.pop();//1
    s.pop();//5
    s.pop();
    s.pop();*/
}