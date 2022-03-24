#define _CRT_SECURE_NO_WARNINGS 1

//Day 4
//
#include<iostream>

using namespace::std;

int main()
{
    int A_B, B_C, AOB, BOC, AOC1, AOC2;
    int A1, A2, B1, B2, C1, C2;
    cin >> A_B >> B_C >> AOB >> BOC;
    A1 = (A_B + AOB) / 2;
    B1 = AOB - A1;
    B2 = (B_C + BOC) / 2;
    C1 = BOC - B2;
    AOC1 = A_B + BOC;
    AOC2 = AOB - B_C;
    if (B1 == B2 && AOC1 == AOC2)
    {
        cout << A1 << ' ' << B1 << ' ' << C1;
    }
    else
    {
        cout << "NO";
    }
    return 0;
}


class Solution {
public:
    /**
     * ����ת��
     * @param M int���� ��������
     * @param N int���� ת�����Ľ���
     * @return string�ַ���
     */
    string solve(int m, int n) {
        //int m, n;
        cin >> m >> n;
        string output;
        int tmp = abs(m);
        while (tmp)
        {
            if (tmp % n >= 10)
            {
                output += (tmp % n - 10) + 'A';
            }
            else
            {
                output += '0' + tmp % n;
            }
            tmp /= n;
        }
        if (m < 0 && n != 2)
        {
            output += '-';
        }
        else if (m < 0 && n == 2)
        {
            output += '1';
        }
        reverse(output.begin(), output.end());
        return output;
    }
};