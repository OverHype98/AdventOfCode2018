#include <iostream>
#include <unordered_map>
#include<vector>
#include<fstream>


using namespace std;

int main()
{
	int i,ok2,ok3;
	string temp;
	int twos = 0;
	int threes = 0;
	vector<string> list;
    unordered_map<char,int> mapList;

	fstream txt;
	txt.open("input.txt");

	while (txt >> temp)
	{
		list.push_back(temp);

	}

	for(auto it : list)
	{
	    ok2 = 1;
	    ok3 = 1;
	    for(i = 0; i < it.size();i++)
        {
            mapList[it[i]]++;
        }
        for(auto it : mapList)
        {
            if(it.second == 2 && ok2 == 1)
            {
                ok2 = 0;
                twos++;
            }else if(it.second == 3 && ok3 == 1)
            {
                ok3 =0;
                threes++;
            }
        }

        mapList.clear();

	}
 cout<<threes*twos;



}
