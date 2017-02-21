#include<cstdio>
#include<cstdlib>
#include<random>
#include<iostream>
#include<algorithm>
using namespace std;

/*********************************
 * Testdata generating utilities *
 * By bigelephant29              *
 *********************************/

const int PROBLEM_NO = 17020102;
const int TESTDATA_COUNT = 50;

mt19937 rng(0x5EED);
int randint(int lb, int ub) {
    /* randomly generate number in [lb, ub] */
    return uniform_int_distribution<int>(lb, ub)(rng);
}

string intToStr(int num) {
    string ret = "";
    while(num) {
        ret += num % 10 + '0';
        num /= 10;
    }
    reverse(ret.begin(), ret.end());
    return ret;
}

string getFileName(int prob_no, int data_no, bool sample, const string& suffix = "") {
    string ret = "testdata/";
    if(sample) {
        ret += intToStr(prob_no) + ".sample";
        //ret += data_no - 1 + 'a';
        ret += suffix;
    } else {
        ret += intToStr(prob_no) + ".";
        ret += intToStr(data_no) + suffix;
    }
    return ret;
}

string getFileInName(int prob_no, int data_no, bool sample) {
    return getFileName(prob_no, data_no, sample, ".in");
}

string getFileOutName(int prob_no, int data_no, bool sample) {
    return getFileName(prob_no, data_no, sample, ".out");
}

void genOut(const string& in, const string& out) {
    char cmd[256];
    sprintf(cmd, "./solve < %s > %s", in.c_str(), out.c_str());
    system(cmd);
}

void writeFileLog(const string& file_name) {
    fprintf(stderr, "Generating [%s] ...", file_name.c_str());
}

void writeFinished() {
    fprintf(stderr, "Finished.\n");
}


int main() {
    
    FILE *fp;
    string fn_in, fn_out;
    
    // sample
    writeFileLog( getFileName(PROBLEM_NO, 1, true) );
    fn_in = getFileInName(PROBLEM_NO, 1, true);
    fn_out = getFileOutName(PROBLEM_NO, 1, true);
    fp = fopen(fn_in.c_str(), "w");
    fprintf(fp, "0 3\n2 1\n1 2\n3 0\n");
    fclose(fp);
    genOut(fn_in, fn_out);
    writeFinished();
    
    for(int i = 1 ; i <= TESTDATA_COUNT ; i++) {
        writeFileLog( getFileName(PROBLEM_NO, i, false) );
        fn_in = getFileInName(PROBLEM_NO, i, false);
        fn_out = getFileOutName(PROBLEM_NO, i, false);
        fp = fopen(fn_in.c_str(), "w");
        int x1, y1, x2, y2, x3, y3, x4, y4;
        if(i == 1) {
            x1 = -1000000000;
            y1 = 1000000000;
            x2 = 1000000000;
            y2 = -1000000000;
            x3 = -1;
            y3 = 1;
            x4 = 1;
            y4 = -1;
        } else if(i == 2) {
            x1 = -2;
            y1 = 2;
            x2 = -1;
            y2 = 1;
            x3 = -1;
            y3 = 1;
            x4 = 1;
            y4 = -1;
        } else if(i == 3) {
            x1 = -2;
            y1 = -1;
            x2 = -1;
            y2 = -2;
            x3 = -1;
            y3 = 1;
            x4 = 1;
            y4 = -1;
        } else if(i == 4) {
            x1 = 1;
            y1 = 2;
            x2 = 2;
            y2 = 1;
            x3 = -1;
            y3 = 1;
            x4 = 1;
            y4 = -1;
        } else if(i == 5) {
            x1 = 1;
            y1 = -1;
            x2 = 2;
            y2 = -2;
            x3 = -1;
            y3 = 1;
            x4 = 1;
            y4 = -1;
        } else if(i == 6) {
            x1 = -3;
            y1 = 1;
            x2 = 3;
            y2 = -1;
            x3 = -1;
            y3 = 3;
            x4 = 1;
            y4 = -3;
        } else if(i <= 40) {
            x1 = randint(-10, 10);
            do {
                x2 = randint(-10, 10);
            } while(x1 == x2);
            if(x1 > x2) swap(x1, x2);
            x3 = randint(-10, 10);
            do {
                x4 = randint(-10, 10);
            } while(x3 == x4);
            if(x3 > x4) swap(x3, x4);
            y1 = randint(-10, 10);
            do {
                y2 = randint(-10, 10);
            } while(y1 == y2);
            if(y1 < y2) swap(y1, y2);
            y3 = randint(-10, 10);
            do {
                y4 = randint(-10, 10);
            } while(y3 == y4);
            if(y3 < y4) swap(y3, y4);
        } else {
            x1 = randint(-1000000000, 1000000000);
            do {
                x2 = randint(-1000000000, 1000000000);
            } while(x1 == x2);
            if(x1 > x2) swap(x1, x2);
            x3 = randint(-1000000000, 1000000000);
            do {
                x4 = randint(-1000000000, 1000000000);
            } while(x3 == x4);
            if(x3 > x4) swap(x3, x4);
            y1 = randint(-1000000000, 1000000000);
            do {
                y2 = randint(-1000000000, 1000000000);
            } while(y1 == y2);
            if(y1 < y2) swap(y1, y2);
            y3 = randint(-1000000000, 1000000000);
            do {
                y4 = randint(-1000000000, 1000000000);
            } while(y3 == y4);
            if(y3 < y4) swap(y3, y4);
        }
        fprintf(fp, "%d %d\n%d %d\n%d %d\n%d %d\n", x1, y1, x2, y2, x3, y3, x4, y4);
        fclose(fp);
        genOut(fn_in, fn_out);
        writeFinished();
    }

    return 0;
}
