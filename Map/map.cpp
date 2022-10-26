#include <numeric>
#include <iostream>
#include <iterator>
#include <map>

using namespace std;

struct student
{
    string name;
    int mid;
    int final;
};

int main()
{
    map<int, student> map;
    student report;
    int stu_num;

    cout << "입력할 학생 수 : ";
    cin >> stu_num;

    for (int i = 0; i < stu_num; i++)
    {
        cout << "학생" << i+1 <<" 이름, 중간점수, 기말점수 입력\n";
        cin >> report.name >> report.mid >> report.final;
        map.emplace(i, report);
    }

    for (auto i = begin(map); i != end(map); ++i)
    {
        cout << "결과";
        cout << i->second.name << " " << i->second.mid << " " << i->second.final;
        cout << endl;
    }
}
