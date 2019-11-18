#pragma once
#include<iostream>
#include<stdlib.h>
#include<fstream>
#include<string.h>
#include<vector>
#include<string>
#include<sstream>
#include<map>
#include<iterator>
#include<unordered_map>
#include<ctime>
using namespace std;

struct Communication
{
	string sender="0";
	string acceptor="0";
	int dataNumber=0;
};
struct Attack {
	string sender="0";
};
struct Node {
	int m_size=0;
	int attack_size=0;
	std::vector<Communication> Arry;
	std::vector<Attack> lis;
	void invector();
};
class Method {
public:
	Method();
	~Method();

	bool ReadFromFile(Node *note,string in_file);
	void getCracker(Node *note);
	void CheckRpetition(Node *note);
};


