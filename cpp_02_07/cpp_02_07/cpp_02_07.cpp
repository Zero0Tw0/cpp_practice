#define _CRT_SECURE_NO_WARNINGS 1

//1859. ����������

#include <iostream>
#include <string>

using namespace std;


class Solution {
public:
    string sortSentence(string s) {
        //sΪ��
        if (s.size() == 0)
            return s;

        //s��Ϊ��
        string ret;
        char find = '1';
        size_t tail = s.find(find);

        while (tail != string::npos)
        {
            cout << tail << endl;
            //�ҵ�ͷβ
            size_t head;
            head = s.rfind(' ', tail);

            if (head == string::npos)  //˵���ǵ�һ������
            {
                head = 0;
            }
            else              //���ǵ�һ�����ʣ��ҵ��˿ո�++head�õ����ҵ��ʵĵ�һ����ĸ
            {
                head++;
            }
            ret.append(s, head, tail - head);
            ret += ' ';
            find++;
            tail = s.find(find);
        }

        ret.pop_back();
        return ret;
    }
};

int main()
{
    string a = "is2 sentence4 This1 a3";
    

    cout << sortSentence(a) << endl;

    return 0;
}