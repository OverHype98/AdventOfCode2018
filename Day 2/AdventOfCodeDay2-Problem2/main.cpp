#include <iostream>
#include <unordered_map>
#include<vector>
#include<fstream>


using namespace std;

int main()
{
	int i,ok;
	string temp;
	int minDif = 1000;
	int count = 0;
	int position = 0;

	vector<string> list;


	fstream txt;
	txt.open("input.txt");

	while (txt >> temp)
	{
		list.push_back(temp);

	}



	for(vector<string>::iterator it = list.begin(); it != list.end();it++)
	{


        for(vector<string>::iterator it2 = list.begin(); it2 != list.end();it2++)
        {
            count = 0;
            position = 0;

            for(i = 0; i < (*it).size();i++)
            {

                if((*it)[i] != (*it2)[i])
                {
                    ++count;
                    position = i;

                    if(count>1)
                        break;
                }


            }

            if (count == 1) {
                cout <<"First word------>"<< *it <<endl;
                cout <<"Second word----->"<< *it2 <<endl;
                (*it).erase(position, 1);

                cout << "Answer---------->" << *it << endl;
                return 0;
        }


	}


	}

	}


