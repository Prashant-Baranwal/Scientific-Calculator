#include <iostream>
#include <cmath>
using namespace std;

main()
{
    float x,y;
    int ch;
    do
    {
        cout<<endl;
        cout<<"\t -------------------------------------------------------------------------"<<endl;
        cout<<"\t|                         SCIENTIFIC CALCULATOR                           |"<<endl;
        cout<<"\t -------------------------------------------------------------------------"<<endl;
        cout<<"\t 1: Addition\t\t"<<"   2: Subtraction\t\t"<<" 3: Multiplication"<<endl;
        cout<<"\t 4: Division\t\t"<<"   5: Power\t\t\t"<<" 6: Square root"<<endl;
        cout<<"\t 7: Exponential\t\t"<<"   8: Log_10\t\t\t"<<" 9: Log_e"<<endl;
        cout<<"\t10: Sine\t\t"<<"  11: Cosine\t\t\t"<<"12: Tangent"<<endl;
        cout<<"\t13: Inverse of Sine\t"<<"  14: Inverse of Cosine\t\t"<<"15: Inverse of Tangent"<<endl;
        cout<<"\t16: Hyperbolic Sine\t"<<"  17: Hyperbolic Cosine\t\t"<<"18: Hyperbolic Tangent"<<endl;
        cout<<"\t\t\t\t  19: Exit"<<endl;
        cout<<"\n\tEnter the function that you want to perform : ";
        cin>>ch;
        cout<<endl;
        switch(ch)
        {
            case 1:
                cout<<"Enter 1st number : ";
                cin>>x;
                cout<<"Enter 2nd number : ";
                cin>>y;
                cout<<"\tResult: "<<x<<" + "<<y<<" = "<<x+y<<endl;
                break;
            case 2:
                cout<<"Enter 1st number : ";
                cin>>x;
                cout<<"Enter 2nd number : ";
                cin>>y;
                cout<<"\tResult: "<<x<<" - "<<y<<" = "<<x-y<<endl;
                break;
            case 3:
                cout<<"Enter 1st number : ";
                cin>>x;
                cout<<"Enter 2nd number : ";
                cin>>y;
                cout<<"\tResult: "<<x<<" * "<<y<<" = "<<x*y<<endl;
                break;
            case 4:
                cout<<"Enter 1st number : ";
                cin>>x;
                cout<<"Enter 2nd number : ";
                cin>>y;
                cout<<"\tResult: "<<x<<" / "<<y<<" = "<<x/y<<endl;
                break;
            case 5:
                cout<<"Enter the number : ";
                cin>>x;
                cout<<"Enter the power : ";
                cin>>y;
                cout<<"\tResult: "<<x<<" to the power "<<y<<" = "<<pow(x,y)<<endl;
                break;
            case 6:
                cout<<"Enter the number : ";
                cin>>x;
                cout<<"\tResult: "<<"Square root of "<<x<<" = "<<sqrt(x)<<endl;
                break;
            case 7:
                cout<<"Enter the number : ";
                cin>>x;
                cout<<"\tResult: "<<"Exponential power of "<<x<<" = "<<exp(x)<<endl;
                break;
            case 8:
                cout<<"Enter the number : ";
                cin>>x;
                cout<<"\tResult: "<<"Log to the base 10 of "<<x<<" = "<<log10(x)<<endl;
                break;
            case 9:
                cout<<"Enter the number : ";
                cin>>x;
                cout<<"\tResult: "<<"Log to the base e of "<<x<<" = "<<log(x)<<endl;
                break;
            case 10:
                cout<<"\t1:Radians\t\t"<<"2:Degrees"<<endl;
                while (true)
                {
                    cout<<"Enter your choice : ";
                    int ch2;
                    cin>>ch2;
                    if (ch2 == 1)
                    {
                        cout<<"Enter the angle in radians : ";
                        cin>>x;
                        cout<<"\tResult: "<<"sin("<<x<<") = "<<sin(x)<<endl;
                        break;
                    }
                    else if (ch2 == 2)
                    {
                        cout<<"Enter the angle in degrees : ";
                        cin>>x;
                        y = (x*M_PI)/180;
                        cout<<"\tResult: "<<"sin("<<x<<") = "<<sin(y)<<endl;
                        break;
                    }
                    else
                    {
                        cout<<"Please enter a valid input (Either 1 or 2)."<<endl;
                    }
                }
                break;
            case 11:
                cout<<"\t1:Radians\t\t"<<"2:Degrees"<<endl;
                while (true)
                {
                    cout<<"Enter your choice : ";
                    int ch2;
                    cin>>ch2;
                    if (ch2 == 1)
                    {
                        cout<<"Enter the angle in radians : ";
                        cin>>x;
                        cout<<"\tResult: "<<"cos("<<x<<") = "<<cos(x)<<endl;
                        break;
                    }
                    else if (ch2 == 2)
                    {
                        cout<<"Enter the angle in degrees : ";
                        cin>>x;
                        y = (x*M_PI)/180;
                        cout<<"\tResult: "<<"cos("<<x<<") = "<<cos(y)<<endl;
                        break;
                    }
                    else
                    {
                        cout<<"Please enter a valid input (Either 1 or 2)."<<endl;
                    }
                }
                break;
            case 12:
                cout<<"\t1:Radians\t\t"<<"2:Degrees"<<endl;
                while (true)
                {
                    cout<<"Enter your choice : ";
                    int ch2;
                    cin>>ch2;
                    if (ch2 == 1)
                    {
                        cout<<"Enter the angle in radians : ";
                        cin>>x;
                        cout<<"\tResult: "<<"tan("<<x<<") = "<<tan(y)<<endl;
                        break;
                    }
                    else if (ch2 == 2)
                    {
                        cout<<"Enter the angle in degrees : ";
                        cin>>x;
                        y = (x*M_PI)/180;
                        cout<<"\tResult: "<<"tan("<<x<<") = "<<tan(y)<<endl;
                        break;
                    }
                    else
                    {
                        cout<<"Please enter a valid input (Either 1 or 2)."<<endl;
                    }
                }
                break;
            case 13:
                while (true)
                {
                    cout<<"Enter the number : ";
                    cin>>x;
                    if (x >= -1 && x <= 1)
                    {
                        cout<<"\tResult: "<<"sin inverse of "<<x<<" = "<<(asin(x)*180)/M_PI<<" degrees"<<endl;
                        break;
                    }
                    else
                    {
                        cout<<"Please enter a valid input (Between -1 and 1)."<<endl;
                    }
                }
                break;
            case 14:
                while (true)
                {
                    cout<<"Enter the number : ";
                    cin>>x;
                    if (x >= -1 && x <= 1)
                    {
                        cout<<"\tResult: "<<"cos inverse of "<<x<<" = "<<(acos(x)*180)/M_PI<<" degrees"<<endl;
                        break;
                    }
                    else
                    {
                        cout<<"Please enter a valid input (Between -1 and 1)."<<endl;
                    }
                }
                break;
            case 15:
                cout<<"Enter the number : ";
                cin>>x;
                cout<<"\tResult: "<<"tan inverse of "<<x<<" = "<<(atan(x)*180)/M_PI<<" degrees"<<endl;
                break;
            case 16:
                cout<<"Enter the number : ";
                cin>>x;
                cout<<"\tResult: "<<"Hyperbolic sine of "<<x<<" = "<<sinh(x)<<endl;
                break;
            case 17:
                cout<<"Enter the number : ";
                cin>>x;
                cout<<"\tResult: "<<"Hyperbolic cosine of "<<x<<" = "<<cosh(x)<<endl;
                break;
            case 18:
                cout<<"Enter the number : ";
                cin>>x;
                cout<<"\tResult: "<<"Hyperbolic tangent of "<<x<<" = "<<tanh(x)<<endl;
                break;
            case 19:
                cout<<"\tThank you for using this scientific calculator :)"<<endl;;
                break;
            default:
                cout<<"\tWrong Input. Please enter a valid input."<<endl;
        }
    }while (ch != 19);
}