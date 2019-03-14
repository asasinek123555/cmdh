#include <iostream>
#include <fstream>
#include <windows.h>

using namespace std;

int main(int argc, char *argv[])
{
    ofstream plik;
    char x = '0';
    for (int i = 0; i < 92; i++)
        cin >> x;
    getchar();
    getchar();
    plik.rdbuf()->pubsetbuf(0, 0);
    plik.open("cmdh.log", ios::out | ios::app);
    plik << endl;
    while (x = getchar())
    {
        if (x == 'ÿ')
            break;
        plik << x;
        cout << x;
    }
    plik << endl;
    plik.close();
    system("doskey /history>>cmdh.log");

    return 0;
} /*
#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <iostream>
using namespace std;
 
int pipe( int fd[2] );
 
int main()
{
   int fd[2];
   pid_t childpid;
 
   cout<<endl<<"POTOK:"<<endl;
   cout<<"0-sukces"<<endl;
   cout<<"-1-b³ad"<<endl;
   cout<<"Co nam zwrocil?"<<endl;
   cout<<pipe(fd)<<endl;
 
   if((childpid = fork()) == -1)
   {
       perror("fork");
       exit(1);
   }
 
   if(childpid == 0)
   {
 
       cout<<endl<<"POTOMEK zamyka koñcówkê WEJSCIOWA potoku:"<<endl;
       cout<<"0-sukces"<<endl;
       cout<<"-1-b³ad"<<endl;
       cout<<"Czy powiod³o siê zamkniêcie?"<<endl;
       cout<<close(fd[0])<<endl;
   }
   else
      {
         cout<<endl<<"RODZIC zamyka koñcówkê WYJSCOWA potoku:"<<endl;
         cout<<"0-sukces"<<endl;
         cout<<"-1-b³ad"<<endl;
         cout<<"Czy powiod³o siê zamkniêcie?"<<endl;
         cout<<close(fd[1])<<endl;
      }
 }
*/
