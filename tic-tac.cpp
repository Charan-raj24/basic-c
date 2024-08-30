 #include<iostream>
using namespace std;

char space[3][3]={{'0', '1', '2'}, {'3', '4', '5'}, {'6', '7', '8'}};
int row;
int column;
char token='x';
bool tie=false;
string n1="" ; // Declared globally
string n2=""; // Declared globally

void functionOne()
{

    cout<< "   |   |  \n";
    cout<< " "<<space[0][0]<<" | "<<space[0][1]<<" | "<<space[0][2]<<" \n";
    cout<< "___|___|___\n";
    cout<< "   |   |  \n";
    cout<< " "<<space[1][0]<<" | "<<space[1][1]<<" | "<<space[1][2]<<" \n";
    cout<< "___|___|___\n";
    cout<< "   |   |  \n";
    cout<< " "<<space[2][0]<<" | "<<space[2][1]<<" | "<<space[2][2]<<" \n";
    cout<< "   |   |  \n";
} 

void functionTwo()
{
    int digit;
    if(token=='x'){
        cout<<n1<<" enter: ";
        cin>>digit;
    }
    if(token=='0'){
        cout<<n2<<" enter: ";
        cin>>digit;
    }
    if(digit==0)
    {
        row=0;
        column=0;
    }
    if(digit==1)
    {
        row=0;
        column=1;
    }
    if(digit==2)
    {
        row=0;
        column=2;
    }
    if(digit==3)
    {
        row=1;
        column=0;
    }
    if(digit==4)
    {
        row=0;
        column=1;
    }
    if(digit==5)
    {
        row=1;
        column=2;
    }
    if(digit==6)
    {
        row=2;
        column=0;
    }
    if(digit==7)
    {
        row=2;
        column=1;
    }
    if(digit==8)
    {
        row=2;
        column=2;
    }
    else if(digit<0 || digit>8){
        cout<<"Invalid"<<endl;

    }
    if(token=='x' && space[row][column] !='x' && space[row][column] !='0')
    {
        space[row][column]='x';
        token='0';
    }
    else if(token=='0' && space[row][column] !='x' && space[row][column] !='0')
    {
         space[row][column]='0';
        token='x';
    }
    else{
        cout<<"There is no empty space"<<endl;
        functionTwo();
    }
    functionOne();

    }
    bool functionthree()
    {
    
        for(int i=0;i<3;i++){
            if(space[i][0]==space[i][1] && space[i][0]==space[i][2] || space[0][i]==space[1][i] && space[0][i]==space[2][i])
            return true;
        }
        if(space[0][0]==space[1][1] && space[1][1]==space[2][2] || space[0][2]==space[1][1] && space[1][1]==space[2][0])
        {
            return true;
        }
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
                if(space[i][j] != 'x' && space[i][j] !='0')
                {
                    return false;
                }
            }
        }


    }
    tie=true;
}
int main(){

    cout<<"Enter the name of first player :\n";
    cin>>n1;
    cout<<"Enter the name of second player :\n";
    cin>>n2;

    cout<<n1<< " is player 1, so he/she will play first \n";
    cout<<n2<< " is player 2, so he/she will play second \n";
    while(!functionOne())
    {
        functionOne();
        functionTwo();
        functionthree();
    }
    if(token =='x' && tie == false)
    {
        cout<<n2<<"Wins!!"<<endl;
    }
    else if(token =='0' && tie==false)
    {
        cout<<n1<<"Wins!!"<<endl;
    }
    else{
        cout<<"it's a draw!"<<endl;
    }
}


 

