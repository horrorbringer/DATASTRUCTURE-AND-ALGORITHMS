
using namespace std;
int main(){
    float a, b, c, dalta, x, x1, x2;
    cout << "Input a= ";
    cin >> a;
    cout << "Input b= ";
    cin >> b;
    cout << "Input c=";
    cin >> c;
    if(a==0){
        x = -c / b;
        cout << "Result= " << x;
    }else if(a!=0){
        dalta = (b * b) - (4 * a * c);
        if(dalta>0){
            x1 = (-b - (sqrt(dalta))) / (2 * a);
            x1 = (-b + (sqrt(dalta))) / (2 * a);
        }if(dalta==0){
            x1 = x2 = -b / 2 * a;