#include <iostream>
#include "qtree.h"
#include <fstream>
#include <vector>
#include <algorithm>
#include <stdlib.h>
#include <time.h>
#include <ctime>
#include <queue>
#include <string>
#include <sstream>

vector<vector<string>> parseTSV(string fileName) {
	vector<vector<string> > items;
	ifstream ifs("./points.tsv");
	if (ifs.fail()) {
		cerr << "error" << endl;
		return items;
	}
	string line;
	int count = 0;
	while (getline(ifs, line) && count < 999999) {
		stringstream ss(line);
		vector<string> item;
		string tmp;
		while (getline(ss, tmp, '\t')) {
			item.push_back(tmp);
		}
		items.push_back(item);
		count++;
	}

	return items;
}

int main(int, char**) {
    point *topLeftPoint = new point(-181, 181);
	point *botRightPoint = new point(181, -181);
	vector<vector<string> > items = parseTSV("points.tsv");
	node *root = new node(topLeftPoint, botRightPoint);
	qtree q(root, 200);

	for (int i = 0; i < items.size(); i++) {

 		q.insert(stof(items[i][0]),stof(items[i][1]));
	
	}

	q.parseCuadrants();
	cout<<q.root->num_of_points<<endl;
	cout<<"Termino"<<endl;
	
    
}
