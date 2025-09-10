#include <iostream>
#include <string>
using namespace std;

class mahasiswa
{
    private:
    string nama;

    public:
    friend void setnama(mahasiswa &a, string);
};

void setnama(mahasiswa &a, string b)
{
    a.nama = b;
    cout << a.nama;
}
int main(){
    mahasiswa joko;
    setnama(joko, "kairi kumar");
    return 0;

}