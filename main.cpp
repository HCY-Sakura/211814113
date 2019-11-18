#include<method.h>

int main() {
	Node node;
	string fileName;
	shared_ptr<Method> s = make_shared<Method>();
	s->~Method();
	node.invector();				//≥ı ºªØ
	cout << ">>>Please FileName" << endl;
	cin >> fileName;
	cout << endl;
	cout << "Start reading files" << endl;
	s->ReadFromFile(&node, fileName);
	if (s->ReadFromFile(&node,fileName)) {
		cout << "Set about catching the enemy" << endl;
		s->CheckRpetition(&node);
		cout << "Start getting hacker information" << endl;
		s->getCracker(&node);
	}
	return 0;
}