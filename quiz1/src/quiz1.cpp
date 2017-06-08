#include "quiz1.hh"
using namespace std;


int main(int argc, char* argv[]){  //argc gives # of args in argv
  string filename, line;

  if(argc<2)
    {cout << "Please give me an input file \n";
     }
  else {
    filename=argv[1];
    ifstream inputfile (filename);

    if (inputfile.is_open())
      {
	while (getline(inputfile,line))
	  {if (line[0]!='%')  // only care about the first line not starting with %                                                                                                  
	      {cout << line << '\n';
		break;}
	  }
	inputfile.close();    
      }}
  return 0;

}