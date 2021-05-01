#include"node.h"
#include <queue>
#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
#include <stdlib.h>
#include <string>
#include <sstream>
using namespace std;
class qtree
{
private:
	
	bool isInBox(float x, float y, node* r);
public:
	node* root;
	int maxPointPerRegion;
	qtree(node * root,int maxPointPerRegion);
	node *search(float x, float y);
	void insert(float x, float y);
	void parseCuadrants();
	~qtree();
};