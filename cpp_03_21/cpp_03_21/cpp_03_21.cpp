#define _CRT_SECURE_NO_WARNINGS 1

//BM18
class Solution {
public:
    bool Find(int target, vector<vector<int> > array) {
        int i = 0;
        int j = array[0].size() - 1;
        //cout << i << ' ' << j;
        while (i < array.size() && j >= 0)
        {
            if (target < array[i][j])
            {
                j--;
            }
            else if (target > array[i][j])
            {
                i++;
            }
            else
            {
                return true;
            }
            //cout<< array[i][j] << ' ';
        }
        return false;
    }
};


//��ת�������С����
class Solution {
public:
    int minNumberInRotateArray(vector<int> rotateArray) {
        int left = 0;
        int right = rotateArray.size() - 1;
        int mid = (left + right) / 2;
        //cout << rotateArray[left] << ' ' << rotateArray[mid] << " " << rotateArray[right];
        cout << left << ' ' << mid << " " << right;

        if (rotateArray[left] == rotateArray[right] && rotateArray[left] == rotateArray[mid])
        {

            for (int i = 1; i < rotateArray.size(); i++)
            {
                if (rotateArray[i] < rotateArray[i - 1])
                {
                    return rotateArray[i];
                }
            }
            return rotateArray[0];
        }

        while (left < right)
        {
            //δ��ת
            if (rotateArray[left] < rotateArray[right])
            {
                mid = left;
                break;
            }
            //����
            if (right - left == 1)
            {
                if (rotateArray[left] > rotateArray[right])
                {
                    mid = right;
                    break;
                }
                else
                {
                    mid = left;
                    break;
                }
            }
            //������
            if (rotateArray[mid] >= rotateArray[left])
            {
                left = mid;
            }
            else
            {
                right = mid;
            }

            mid = (left + right) / 2;
        }
        return rotateArray[mid];
    }
};
//�Ľ�
class Solution {
public:
    int minNumberInRotateArray(vector<int> rotateArray) {
        if (rotateArray.empty())
        {
            return 0;
        }
        int left = 0;
        int right = rotateArray.size() - 1;
        int mid = 0;
        while (rotateArray[left] >= rotateArray[right])
        {
            //��������
            if (right - left == 1)
            {
                return rotateArray[right];
            }

            mid = (left + right) / 2;
            //�޷��б�
            if (rotateArray[left] == rotateArray[right] &&
                rotateArray[left] == rotateArray[mid])
            {
                for (int i = 1; i < rotateArray.size(); i++)
                {
                    if (rotateArray[i] < rotateArray[i - 1])
                    {
                        return rotateArray[i];
                    }
                }
            }
            //�������
            if (rotateArray[mid] >= rotateArray[left])
            {
                left = mid;
            }
            else
            {
                right = mid;
            }
        }
        return rotateArray[mid];
    }
};


//��������1�ĸ���
class Solution {
public:
    int  NumberOf1(int n) {
        int sum = 0;
        for (int i = 0; i < 32; i++)
        {
            cout << (1 << i) << ' ';
            if ((n >> i) & 1 == 1)
            {
                sum += 1;
            }
        }
        return sum;
    }
};
//�Ľ�


//��������˳��ʹ����λ��ż��ǰ��
class Solution {
public:
    void reOrderArray(vector<int>& array) {
        //int i = 0;
        int oddnum = 0;
        for (int i = 0; i < array.size(); i++)
        {
            //��������
            int tmp = 0;
            if (array[i] & 1)
            {
                tmp = array[i];
                //��������ǰ���ż������ƶ�һλ
                int j = i;
                while (j > oddnum)
                {
                    array[j] = array[j - 1];
                    j--;
                }
                //������������ŵ��ƶ������Ŀ�λ��
                array[oddnum++] = tmp;
            }
        }
    }
};

//�����г��ִ�������һ�����
class Solution {
public:
    int MoreThanHalfNum_Solution(vector<int> numbers) {
        sort(numbers.begin(), numbers.end());
        return numbers[numbers.size() / 2];
    }
};