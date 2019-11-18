#include<method.h>

Method::Method() {
}
Method::~Method() {
}

void Method::CheckRpetition(Node* note) {
	int j;
	int i;
	for (i = 0; i < note->m_size; i++) {
		if (note->Arry[i].dataNumber >= 100) {
			for (j = 0; j < note->attack_size; j++) {
				if (note->Arry[i].sender == note->lis[j].sender)
					break;
			}
			if (j >= note->attack_size) {
				note->lis[note->attack_size].sender = note->Arry[i].sender;
				note->attack_size++;
			}
		}
	}
	cout << ">>>Capture the success" << endl;
}
void Method::getCracker(Node* note) {
	int i;
	cout << ">>>Cracker Number : " << note->attack_size << endl;
	cout << ">>>Cracker Name List " << endl;
	for (i = 0; i < note->attack_size; i++) {
		cout << i + 1 << ".	" << note->lis[i].sender << endl;
	}
	cout<<">>> Capture the success" << endl;
}
bool Method::ReadFromFile(Node* note,string in_file) {
	ifstream file(in_file.c_str());
	if (!file.is_open()) {
		cout << "Open file " << in_file << " ERROR" << endl;
		return false;
	}
	else {
		string line;
		cout << ">>>Loading...." << endl;
		while (getline(file, line)) {
			Communication s;
			std::stringstream ss;
			string a, b;
			int c;
			ss << line;
			ss >> a >> b >> c;
			s.sender = a;
			s.acceptor = b;
			s.dataNumber = c;
			note->Arry.push_back(s);
			note->m_size++;
		} //加载每一行数据
		cout << "Open file " << in_file << " sussessful" << endl;
		return true;
	}
}
void Node::invector() {
	this->attack_size = 0;
	this->m_size = 0;
	this->Arry = vector<Communication>(100);
	this->lis = vector<Attack>(100);
}
