#include<cstdio>
#include<cstdlib>
#include<random>
#include<iostream>
#include<algorithm>
#include<climits>
using namespace std;

/*********************************
 * Testdata generating utilities *
 * By bigelephant29              *
 *********************************/

const int PROBLEM_NO = 17020304;
const int TESTDATA_COUNT = 20;

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
    fprintf(fp, "3\n1 2 3\n4 5 6\n7 8 9\n");
    fclose(fp);
    genOut(fn_in, fn_out);
    writeFinished();
    
    for(int i = 1 ; i <= TESTDATA_COUNT ; i++) {
        writeFileLog( getFileName(PROBLEM_NO, i, false) );
        fn_in = getFileInName(PROBLEM_NO, i, false);
        fn_out = getFileOutName(PROBLEM_NO, i, false);
        fp = fopen(fn_in.c_str(), "w");

        int n;
        if(i <= 5) n = i;
        else if(i == 20) {
            n = 100;
        } else if(i >= 16){
            n = randint(90, 100);
        } else {
            n = randint(10, 50);
        }
        fprintf(fp, "%d\n", n);
        for(int i = 0 ; i < n ; i++) {
            for(int j = 0 ; j < n ; j++) {
                fprintf(fp, "%d%c", randint(INT_MIN, INT_MAX), " \n"[j==n-1]);
            }
        }

        fclose(fp);
        genOut(fn_in, fn_out);
        writeFinished();
    }

    return 0;
}


