#include <bits/stdc++.h>

using namespace std;

struct PhanSo {
	int tuSo;
	int mauSo;
	PhanSo() {
		tuSo = 0;
		mauSo = 1;
	}

	PhanSo(int tuSo, int mauSo) {}

	friend istream& operator>> (istream& is, PhanSo& ps) {
		do {
			is >> ps.tuSo >> ps.mauSo;
		} while (ps.mauSo == 0);
		return is;
	}

	friend ostream& operator<< (ostream& out, PhanSo& ps) {
		if (ps.mauSo==1) {
			out << ps.tuSo << endl;
		}
		else if (ps.mauSo==-1) {
			out << -ps.tuSo << endl;
		}
		else {
			out << ps.tuSo << '/' << ps.mauSo << endl;
		}
	}

	PhanSo operator+(const PhanSo &ps) {
		PhanSo kq;
		kq.tuSo = this->tuSo * ps.mauSo + this->mauSo * ps.tuSo;
		kq.mauSo = this->mauSo * ps.mauSo;
		return kq;
	}

	bool operator> (const PhanSo &ps) {
		if (this->tuSo * ps.mauSo > this->mauSo * ps.tuSo) 
			return true;
		else return false;
	}

	bool operator< (const PhanSo &ps) {
		if (this->tuSo * ps.mauSo < this->mauSo * ps.tuSo) 
			return true;
		else return false;
	}
};

int gcd(int a, int b) {
    if (a==b) return a;
    if (a>b)
        gcd(a-b, b);
    else
        gcd(a, b-a);
}

void toigian(PhanSo &ps) {
	int x = gcd(abs(ps.tuSo), abs(ps.mauSo));
	ps.tuSo = ps.tuSo / x;
	ps.mauSo = ps.mauSo / x;
}

void getInfo_many(PhanSo ps[], int n) {
	for (int i=0; i<n; i++) {
		cin >> ps[i];
	}
}

void showInfo_many(PhanSo ps[], int n) {
	for (int i=0; i<n; i++) {
		cout << ps[i];
	}
}

void sort(PhanSo ps[], int n) {
	for (int i=0; i<n-1; i++) {
		for (int j=i+1; j<n; j++) {
			if (ps[i] > ps[j]) {
				continue;
			}
			else {
				PhanSo temp = ps[i];
				ps[i] = ps[j];
				ps[j] = temp;
			}
		}
	}
}

PhanSo total(PhanSo ps[], int n) {
	PhanSo sum = ps[0];
	for (int i=1; i<n; i++) {
		sum = sum + ps[i];
	}
	return sum;
}

int main() {
	int n; cin >> n;
	PhanSo ps[n];
	getInfo_many(ps, n);
	for (int i=0; i<n; i++) {
		toigian(ps[i]);
	}
	sort(ps, n); 
	showInfo_many(ps, n);
	PhanSo sum = total(ps, n);
	toigian(sum);
	cout << sum;
}
