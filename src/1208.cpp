//#include <cstdio>
//#include <cstdlib>
//#include <algorithm>
//#include <string>
//#include <string.h>
//#include <map>
////#include <unordered_map>
////#include <unordered_set>
//#include <set>
//#include <vector>
//#include <cmath>
//#include <climits>
//#include <queue>
//#include <stack>
//#include <cassert>
//#include <iostream>
//#include <sstream>
//#include <utility>
//#include <bitset>
//using namespace std;
////=============================================================
////* code: Big Integer
////=============================================================
//#include<iostream>
//#include<string>
//#include<deque>
//
//class Integer {
//public:
//	//========���캯��====================================
//	Integer(int = 0);
//	Integer(const string&);
//	Integer(const Integer&);
//
//	//========��ֵ����������===============================
//	Integer& operator =(const Integer&);
//
//	//========��������������===============================
//	friend Integer operator+(const Integer&, const Integer&);
//	friend Integer operator-(const Integer&, const Integer&);
//	friend Integer operator*(const Integer&, const Integer&);
//	friend Integer operator/(const Integer&, const Integer&);
//	friend Integer operator&(const Integer&, const Integer&);
//
//	//========�Ƚϲ���������===============================
//	friend const bool operator ==(const Integer&, const Integer&);
//	friend const bool operator !=(const Integer&, const Integer&);
//	friend const bool operator >(const Integer&, const Integer&);
//	friend const bool operator >=(const Integer&, const Integer&);
//	friend const bool operator <(const Integer&, const Integer&);
//	friend const bool operator <=(const Integer&, const Integer&);
//
//	//========���ϸ�ֵ����������===========================
//	Integer& operator +=(const Integer&);
//	Integer& operator -=(const Integer&);
//	Integer& operator *=(const Integer&);
//	Integer& operator /=(const Integer&);
//	Integer& operator %=(const Integer&);
//
//	//=========�����Լ�����������==========================
//	Integer& operator ++();
//	Integer operator ++(int); //����
//	Integer& operator --();
//	Integer operator --(int); //����
//
//	//=========���Ų���������==============================
//	Integer operator -() const;
//
//	//=========�������������==============================
//	friend ostream& operator <<(ostream&, const Integer&);
//	deque<int> data;
//private:
//	int sign; //�ж������Ż��Ǹ���
//
//	//==========����=======================================
//	void subtract(const deque<int>& temp1, const deque<int>& temp2);
//
//	//==========�ӷ�=======================================
//	void add(const deque<int>& temp1, const deque<int>& temp2);
//
//	int cmpData(const deque<int>& temp1, const deque<int>& temp2) const; //�Ƚ����ݾ���ֵ�Ĵ�С
//
//	deque<int> divide(const deque<int>& temp);
//};
//
//Integer::Integer(int i) {
//	if (i == 0) {
//		sign = 0;
//		return;
//	}
//	if (i < 0) {
//		sign = -1;
//		i = -i;
//	} else
//		sign = 1;
//	while (i != 0) {
//		data.push_back(i % 10);
//		i /= 10;
//	}
//}
//
//Integer::Integer(const string& str) {
//	if (str[0] == '-')
//		sign = -1;
//	else
//		sign = 1;
//	for (int i = (str.size()) - 1; i > 0; i--) {
//		data.push_back(str[i] - '0');
//	}
//	if (sign == 1)
//		data.push_back(str[0] - '0');
//	while (!data.empty()) {
//		if (data.back() != 0) {
//			break;
//		}
//		data.pop_back();
//	}
//	if (data.empty()) {
//		sign = 0;
//	}
//}
//
//Integer::Integer(const Integer& temp) {
//	data.clear();
//	sign = temp.sign;
//	data = temp.data;
//}
//
//Integer& Integer::operator =(const Integer& temp) {
//	data.clear();
//	sign = temp.sign;
//	data = temp.data;
//	return *this;
//}
//
//const bool operator ==(const Integer& temp1, const Integer& temp2) {
//	return ((temp1.data == temp2.data) && (temp1.sign == temp2.sign));
//}
//
//const bool operator !=(const Integer& temp1, const Integer& temp2) {
//	return !(temp1 == temp2);
//}
//
//const bool operator >(const Integer& temp1, const Integer& temp2) {
//	if (temp1.sign < temp2.sign)
//		return false;
//	if (temp1.sign > temp2.sign)
//		return true;
//	if (temp1.sign == -1) {
//		if (temp1.data.size() < temp2.data.size())
//			return true;
//		if (temp1.data.size() > temp2.data.size())
//			return false;
//		for (int i = temp1.data.size() - 1; i >= 0; i--) {
//			if (temp1.data[i] > temp2.data[i])
//				return false;
//			if (temp1.data[i] < temp2.data[i])
//				return true;
//		}
//		return false;
//	} else if (temp1.sign == 1) {
//		if (temp1.data.size() > temp2.data.size())
//			return true;
//		if (temp1.data.size() < temp2.data.size())
//			return false;
//		for (int i = temp1.data.size() - 1; i >= 0; i--) {
//			if (temp1.data[i] < temp2.data[i])
//				return false;
//			if (temp1.data[i] > temp2.data[i])
//				return true;
//		}
//		return false;
//	}
//	return false;
//}
//const bool operator >=(const Integer& temp1, const Integer& temp2) {
//	if (temp1 > temp2)
//		return true;
//	if (temp1 == temp2)
//		return true;
//	return false;
//}
//const bool operator <(const Integer& temp1, const Integer& temp2) {
//	return !(temp1 >= temp2);
//}
//const bool operator <=(const Integer& temp1, const Integer& temp2) {
//	return !(temp1 > temp2);
//}
//
//// ��������� {
//Integer operator +(const Integer& temp1, const Integer& temp2) {
//	Integer temp(temp1);
//	temp += temp2;
//	return temp;
//}
//
//Integer operator -(const Integer& temp1, const Integer& temp2) {
//	Integer temp(temp1);
//	temp -= temp2;
//	return temp;
//}
//
//Integer operator *(const Integer& temp1, const Integer& temp2) {
//	Integer temp(temp1);
//	temp *= temp2;
//	return temp;
//}
//Integer operator /(const Integer& temp1, const Integer& temp2) {
//	Integer temp(temp1);
//	temp /= temp2;
//	return temp;
//}
//
//Integer operator %(const Integer& temp1, const Integer& temp2) {
//	Integer temp(temp1);
//	temp %= temp2;
//	return temp;
//}
//
//Integer Integer::operator -() const {
//	Integer temp = *this;
//	switch (temp.sign) {
//	case -1:
//		temp.sign = 1;
//		break;
//	case 1:
//		temp.sign = -1;
//		break;
//	default:
//		break;
//	}
//	return temp;
//}
//Integer& Integer::operator +=(const Integer& temp) {
//	if (temp.sign == 0)
//		return (*this);
//
//	if (sign == 0) {
//		(*this) = temp;
//		return (*this);
//	}
//
//	if (sign == temp.sign) {
//		add(deque<int>(data), temp.data);
//		return (*this);
//	}
//	if (sign != temp.sign) {
//		if (cmpData((*this).data, temp.data) == -1) {
//			subtract(temp.data, deque<int>(data));
//			sign = temp.sign;
//			return (*this);
//		} else if (cmpData((*this).data, temp.data) == 1) {
//			subtract(deque<int>(data), temp.data);
//			return (*this);
//		} else {
//			sign = 0;
//			(*this).data.clear();
//			return (*this);
//		}
//	}
//}
//
//Integer& Integer::operator -=(const Integer& temp) {
//	(*this) += (-temp);
//	return (*this);
//}
//
//Integer& Integer::operator *=(const Integer& temp_) {
//	if (sign == 0 || temp_.sign == 0) {
//		sign = 0;
//		data.clear();
//		return (*this);
//	}
//	Integer temp(1), temp1(1);
//	temp.data.clear();
//	int tmp, count = 0, sing1 = sign;
//	deque<int>::const_iterator iter1 = this->data.begin();
//	deque<int>::const_iterator iter2 = temp_.data.begin();
//	for (; iter1 != this->data.end(); ++iter1) {
//		count++;
//		temp1.data.clear();
//		tmp = 0;
//		for (iter2 = temp_.data.begin(); iter2 != temp_.data.end(); ++iter2) {
//			temp1.data.push_back((*iter1) * (*iter2) + tmp);
//			tmp = data.back() / 10;
//			data.back() %= 10;
//		}
//		if (tmp != 0)
//			temp1.data.push_back(tmp);
//		for (int i = 1; i < count; i++) {
//			temp1.data.push_front(0);
//		}
//		temp1.sign = 1;
//		temp += temp1;
//	}
//	(*this) = temp;
//	sign = sing1 * temp_.sign;
//	return (*this);
//}
//
//Integer& Integer::operator /=(const Integer& temp) {
//	if (sign == 0 || temp.sign == 0) {
//		sign = 0;
//		data.clear();
//		return *this;
//	}
//	if (cmpData(data, temp.data) == -1) {
//		sign = 0;
//		data.clear();
//		return *this;
//	}
//
//	(*this).data = divide(temp.data);
//
//	while (!data.empty()) {
//		if (data.back() != 0) {
//			break;
//		}
//		data.pop_back();
//	}
//
//	if (data.empty()) {
//		sign = 0;
//	}
//	return *this;
//}
//
//Integer& Integer::operator %=(const Integer& temp) {
//	if (sign == 0 || temp.sign == 0) {
//		return (*this);
//	}
//	if (cmpData(data, temp.data) == -1) {
//		return (*this);
//	}
//	Integer temp1(1);
//	temp1.data.clear();
//	temp1 = (*this) / temp;
//	temp1 *= temp;
//	(*this) -= temp1;
//	return (*this);
//}
//
//Integer& Integer::operator ++() {
//	*this += 1;
//	return *this;
//}
//
//Integer Integer::operator ++(int) {
//	Integer tmp(*this);
//	++(*this);
//	return tmp;
//}
//
//Integer& Integer::operator --() {
//	*this -= 1;
//	return *this;
//}
//
//Integer Integer::operator --(int) {
//	Integer tmp(*this);
//	--(*this);
//	return tmp;
//}
//
//ostream& operator <<(ostream& output, const Integer& temp) {
//	if (temp.sign == 0) {
//		output << 0;
//		return output;
//	}
//	if (temp.sign == -1)
//		output << "-";
//	deque<int>::const_reverse_iterator iter = temp.data.rbegin();
//	for (; iter != temp.data.rend(); iter++)
//		output << *iter;
//	return output;
//}
//
//void Integer::add(const deque<int>& integer1, const deque<int>& integer2) {
//	data.clear();
//	deque<int>::const_iterator iter1 = integer1.begin();
//	deque<int>::const_iterator iter2 = integer2.begin();
//
//	int tmp = 0;
//	for (; iter1 != integer1.end() && iter2 != integer2.end();
//			iter1++, iter2++) {
//		data.push_back(*iter1 + *iter2 + tmp);
//		tmp = data.back() / 10;
//		data.back() %= 10;
//	}
//	deque<int>::const_iterator iter = (iter1 == integer1.end() ? iter2 : iter1);
//	deque<int>::const_iterator iter_end = (
//			iter1 == integer1.end() ? integer2.end() : integer1.end());
//
//	for (; iter != iter_end; iter++) {
//		data.push_back(*iter + tmp);
//		tmp = data.back() / 10;
//		data.back() %= 10;
//	}
//	if (tmp != 0)
//		data.push_back(tmp);
//}
//
//void Integer::subtract(const deque<int>& integer1, const deque<int>& integer2) {
//	data.clear();
//	deque<int>::const_iterator iter1 = integer1.begin();
//	deque<int>::const_iterator iter2 = integer2.begin();
//
//	int tmp = 0;
//	for (; iter2 != integer2.end(); iter1++, iter2++) {
//		if (((*iter1) - tmp) >= (*iter2)) {
//			data.push_back((*iter1) - (*iter2) - tmp);
//			tmp = 0;
//		} else {
//			data.push_back((*iter1) + 10 - (*iter2) - tmp);
//			tmp = 1;
//		}
//	}
//	deque<int>::const_iterator iter = (iter1 == integer1.end() ? iter2 : iter1);
//	deque<int>::const_iterator iter_end = (
//			iter1 == integer1.end() ? integer2.end() : integer1.end());
//
//	for (; iter <= iter_end - 1; iter++) {
//		if ((*iter) - tmp >= 0) {
//			data.push_back((*iter) - tmp);
//			tmp = 0;
//		} else {
//			data.push_back((*iter) + 10 - tmp);
//			tmp = 1;
//		}
//	}
//
//	deque<int>::const_reverse_iterator iter3 = data.rbegin();
//	for (; iter3 != data.rend();) {
//		if ((*iter3) == 0) {
//			data.pop_back();
//			iter3 = data.rbegin();
//		} else {
//			break;
//		}
//	}
//	if (data.empty())
//		sign = 0;
//}
//
////�ȽϾ���ֵ�Ĵ�С
//int Integer::cmpData(const deque<int>& temp1, const deque<int>& temp2) const {
//	if (temp1.size() < temp2.size())
//		return -1;
//	if (temp1.size() > temp2.size())
//		return 1;
//
//	deque<int>::const_iterator iter1 = temp1.end() - 1;
//	deque<int>::const_iterator iter2 = temp2.end() - 1;
//	for (int i = 0; i != temp1.size(), i != temp2.size(); i++) {
//		if ((*(iter1 - i)) > (*(iter2 - i)))
//			return 1;
//		if ((*(iter1 - i)) < (*(iter2 - i)))
//			return -1;
//	}
//	return 0;
//}
//
//deque<int> Integer::divide(const deque<int>& divisor) {
//	deque<int> quotients;
//
//	if (cmpData(data, divisor) == -1) {
//		return quotients;
//	}
//
//	Integer tmp;
//	tmp.sign = 1;
//	while (cmpData(tmp.data, divisor) == -1) {
//		tmp.data.push_front(data.back());
//		data.pop_back();
//	}
//
//	quotients.push_front(0);
//	while (cmpData(tmp.data, divisor) != -1) {
//		tmp.subtract(deque<int>(tmp.data), divisor);
//		quotients.front()++;}
//
//	while (!data.empty()) {
//		tmp.data.push_front(data.back());
//		data.pop_back();
//		quotients.push_front(0);
//		while (cmpData(tmp.data, divisor) != -1) {
//			tmp.subtract(deque<int>(tmp.data), divisor);
//			quotients.front()++;}
//		}
//	data = tmp.data;
//	return quotients;
//}
//
//int main() {
//	string s;
//	while (cin >> s) {
//		Integer a(s);
////		cout<<a<<' ';
//		string b;
//		while (a.data.size()) {
////			cout<<(char)(a.data.back()%2+'0')<<' ';
//			b += char(a.data.back() % 2 + '0');
//			a /= 2;
//			cout << b << ' ' << a << endl;
//		}
//		cout << b << endl;
//	}
//	return 0;
//}
