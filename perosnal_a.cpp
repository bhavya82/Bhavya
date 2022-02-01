#include<iostream>
#include<bits/stdc++.h>
#include<windows.h>
#include<stdio.h>
#include<string.h>
#include<ctime>
#include<cstdlib>
using namespace std;
void greetings()
{
	time_t now=time(0);
	tm*time=localtime(&now);
	if(time->tm_hour<12)
	{
		cout<<"Good Morning Bhavya!"<<endl;
		string phrase="Good Morning Bhavya";
		string command="espeak \""+phrase+"\"";
		const char *charCommand=command.c_str();
		system(charCommand);
	}
	else if(time->tm_hour>12&&time->tm_hour<16)
	{
		cout<<"Good Afternoon Bhavya!"<<endl;
		string phrase="Good Afternoon Bhavya";
		string command="espeak \""+phrase+"\"";
		const char *charCommand=command.c_str();
		system(charCommand);
	}
	else
	{
		cout<<"Good Evening Bhavya!"<<endl;
		string phrase="Good Evening Bhavya";
		string command="espeak \""+phrase+"\"";
		const char *charCommand=command.c_str();
		system(charCommand);
	}
}
	void date_time()
	{
		time_t now = time(0);
    	char *dt = ctime(&now);
        cout<<"The date and time is "<<endl<<dt<<endl;
	}
int main()
{
	system("cls");
	cout<<"\t\t:::::::::::::::::::::::::::::::PERSONAL ASSISTANT:::::::::::::::::::::::::::::::::";
	cout<<"\n\n";
	string password;
	string command;
	do
	{
		cout<<"||ENTER THE SECURITY CODE TO CONFIRM YOUR IDENTITY||"<<endl;
		string phrase="ENTER THE SECURITY CODE TO CONFIRM YOUR IDENTITY";
		string command="espeak \"" +phrase + "\"";
		const char *charCommand=command.c_str();
		system(charCommand);
		
		getline(cin,password);
		STARTUPINFO startInfo={0};
		PROCESS_INFORMATION processInfo={0};
		if(password=="windows")
		{
			cout<<"**********************************************************************************"<<endl;
			greetings();
			do
			{
				string phrase="How can I help you";
				string command="espeak \""+phrase+"\"";
				const char *charCommand=command.c_str();
				system(charCommand);
				cout<<"******************************************************************************************"<<endl;
				cout<<"Enter the Command!!"<<endl;
				getline(cin,command);
				if(command=="hello"||command=="hi")
				{
					cout<<"Hey Bhavya!"<<endl;
					string phrase="Hey Bhavya";
					string command="espeak \""+phrase+"\"";
					const char *charCommand=command.c_str();
					system(charCommand);
				}
				else if(command=="what is the time now?"||command=="what is the date today?"||command=="what is date and time now?")
				{
					date_time();
				}
				else if(command=="who are you"||command=="who is speaking")
				{
					cout<<"I'm a Personal Assistant created by Bhavya!!"<<endl;
					string phrase="Hello, I am a personal assistant created by Bhavya";
					string command="espeak \""+phrase+"\"";
					const char *charCommand=command.c_str();
					system(charCommand);
				}
				else if(command=="open notepad")
				{
					string phrase="opening notepad";
					string command="espeak \""+phrase+"\"";
					const char *charCommand=command.c_str();
					system(charCommand);
					CreateProcess(TEXT("C:\\Windows\\notepad.exe"), NULL, NULL, NULL, FALSE, NULL, NULL, NULL, &startInfo, &processInfo);
				}
				else if(command=="open microsoft word")
				{
					string phrase="opening microsoft word";
					string command="espeak \""+phrase+"\"";
					const char *charCommand=command.c_str();
					system(charCommand);
					CreateProcess(TEXT("C:\\Program Files\\Microsoft Office\\root\\Office16\\WINWORD.exe"),NULL,NULL,NULL,FALSE,NULL,NULL,NULL,&startInfo,&processInfo);
				}
				else if(command=="open microsoft excel")
				{
					string phrase="opening microsoft excel";
					string command="espeak \""+phrase+"\"";
					const char *charCommand=command.c_str();
					system(charCommand);
					CreateProcess(TEXT("C:\\Program Files\\Microsoft Office\\root\\Office16\\EXCEL.exe"),NULL,NULL,NULL,FALSE,NULL,NULL,NULL,&startInfo,&processInfo);
				}
				else if(command=="open microsoft paint")
				{
					string phrase="opening microsoft paint";
					string command="espeak \""+phrase+"\"";
					const char *charCommand=command.c_str();
					system(charCommand);
					CreateProcess(TEXT("C:\\Windows\\mspaint.exe"),NULL,NULL,NULL,FALSE,NULL,NULL,NULL,&startInfo,&processInfo);
				}
				else if(command=="open google")
                {
                    string phrase = "opening google";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                    system("start https://www.google.com");
                }
                else if(command=="open youtube")
                {
                    string phrase = "opening youtube";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                    system("start https://www.youtube.com");
                }
                else if(command=="close chrome browser")
                {
                    string phrase = "closing chrome browser";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                    system("TASKKILL /IM chrome.exe /F");
                }
                else if(command=="open a photo")
                {
                	string phrase="opening a picture";
                	string command="espeak \""+ phrase +"\"";
                	const char *charCommand=command.c_str();
                	system(charCommand);
                	ShellExecute(NULL,"open","C:\\Users\\annam\\Downloads\\paris.jpg",NULL,NULL,SW_NORMAL);
				}
				else if(command=="open a pdf")
                {
                	string phrase="opening a pdf";
                	string command="espeak \""+ phrase +"\"";
                	const char *charCommand=command.c_str();
                	system(charCommand);
                	ShellExecute(NULL,"open","C:\\Users\\annam\\Downloads\\PPE-2.pdf",NULL,NULL,SW_NORMAL);
				}
				else if(command=="play some music")
                {
                	string phrase="playing music";
                	string command="espeak \""+ phrase +"\"";
                	const char *charCommand=command.c_str();
                	system(charCommand);
                	ShellExecute(NULL,"open","C:\\Users\\annam\\Downloads\\senorita.mp3",NULL,NULL,SW_NORMAL);
				}
                else if(command=="bye" || command=="exit")
                {
                	cout<<"Good Bye Bhavya, see you soon!"<<endl;
                    string phrase = "Good Bye Bhavya, see you soon!";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                    exit(0);
                }
                else
                {
                    cout<<"Sorry could not understand your command please try again !!!"<<endl;
                    string phrase = "Sorry could not understand your command please try again";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                }
			}while(1);
		}
		else
                {
                    system("cls");

                    cout<<"\t\t:::::::::::::::::::::::::::::::PERSONAL ASSISSTANT:::::::::::::::::::::::::::::::::::::"<<endl<<endl;
                    cout << "**********************" << endl;
                    cout << "X Incorrect Password X" << endl;
                    cout << "**********************" << endl << endl;

                    string phrase = "Incorrect Password, please enter correct password";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                }
			
	}while(1);
	return 0;
}
