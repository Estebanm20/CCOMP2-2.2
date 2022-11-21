# include <fstream >
using namespace std ;

int main () {
    ifstream source ("source_file.txt ");
    ofstream destination ("dest_file.txt ");
    char x;
    int prom;
    int sum = 0;
            for(int i=0;i<=10;i++){
                sum = +i;
            }
        prom = x/sum;

    source >> x; // Reads one int from source - file . txt

    


    source . close (); // close file as soon as we ’re done using it
    destination << x; // Writes x to dest - file . txt
    return 0;
} // close () called on destination by its destructor