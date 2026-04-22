#include <iostream>
#include <conio.h>
using namespace std;
main()
{
    string societyName;
    string societyPresident;
    int societyBudget = 0;
    bool societyAdded = false;

    int memberID[50];
    string memberName[50];
    string memberRoll[50];
    int memberCount = 0;

    string eventTitle[20];
    int eventDate[20];
    int eventExpense[20];
    int eventCount = 0;

    string usernames[10];
    string passwords[10];
    int userCount = 0;

    bool isloggedin = false;

    while (true)
    {
        system("cls");
        while (!isloggedin)
        {
            cout <<  "======================\n";
            cout <<  "====== START MENU ====\n";
            cout <<  "======================\n";
            cout << "1. Sign Up\n2. Login\n3. Exit\nChoice: ";

            int option;
            cin >> option;
            cin.ignore();

            if (option == 1)
            {
                system("cls");
                if (userCount >= 10)
                {
                    cout << "User limit reached.\n";
                    continue;
                }

                cout << "Username: ";
                getline(cin, usernames[userCount]);

                cout << "Password: ";
                getline(cin, passwords[userCount]);

                userCount++;
                cout << "Signup successful.\n";
            }

            else if (option == 2)
            {
                 system("cls");
                if (userCount == 0)
                {
                    cout << "No users found.\n";
                    continue;
                }

                string u, p;
                cout << "Username: ";
                getline(cin, u);
                cout << "Password: ";
                getline(cin, p);

                bool found = false;
                for (int i = 0; i < userCount; i++)
                {
                    if (usernames[i] == u && passwords[i] == p)
                    {
                        isloggedin = true;
                        cout << "Login successful.\n";
                        found = true;
                        break;
                    }
                }
                if (!found) cout << "Invalid login.\n";
            }
            else return 0;
        }

        cout << "\n1. Admin\n2. Member\nChoice: ";
        int userType;
        cin >> userType;
        cin.ignore();

        if (userType == 1)
        {
             system("cls");
            int choice = -1;
            while (choice != 0)
            {
                cout << "\n==== ADMIN MENU ====\n";
                cout << "1.Add Society\n2.View Society\n3.Update Society\n4.Add Member\n5.View Members\n6.Update Member\n7.Delete Member\n8.Add Event\n9.View Events\n10.Update Event\n11.Delete Event\n0.Logout\nChoice: ";

                cin >> choice;
                cin.ignore();

                if (choice == 1)
                {
                     system("cls");
                    cout << "Society Name: ";
                    getline(cin, societyName);

                    cout << "President Name: ";
                    getline(cin, societyPresident);

                    cout << "Budget: ";
                    cin >> societyBudget;
                    cin.ignore();

                    societyAdded = true;
                }

                else if (choice == 2)
                {
                     system("cls");
                    if (!societyAdded) cout << "No society added.\n";
                    else
                    {
                        cout << "Name: " << societyName << endl;
                        cout << "President: " << societyPresident << endl;
                        cout << "Budget: " << societyBudget << endl;
                    }
                }

                else if (choice == 3)
                {
                     system("cls");
                    if (!societyAdded) cout << "No society.\n";
                    else
                    {
                        cout << "New Name: ";
                        getline(cin, societyName);

                        cout << "New President: ";
                        getline(cin, societyPresident);

                        cout << "New Budget: ";
                        cin >> societyBudget;
                        cin.ignore();
                    }
                }

                else if (choice == 4)
                {
                     system("cls");
                    cout << "ID: ";
                    cin >> memberID[memberCount];
                    cin.ignore();

                    cout << "Name: ";
                    getline(cin, memberName[memberCount]);

                    cout << "Roll: ";
                    getline(cin, memberRoll[memberCount]);

                    memberCount++;
                }

                else if (choice == 5)
                {
                     system("cls");
                    for (int i = 0; i < memberCount; i++)
                        cout << memberID[i] << " | " << memberName[i] << endl;
                }

                else if (choice == 6)
                {
                     system("cls");
                    int id;
                    cout << "Enter ID: ";
                    cin >> id;
                    cin.ignore();

                    for (int i = 0; i < memberCount; i++)
                    {
                        if (memberID[i] == id)
                        {
                            cout << "New Name: ";
                            getline(cin, memberName[i]);

                            cout << "New Roll: ";
                            getline(cin, memberRoll[i]);
                        }
                    }
                }

                else if (choice == 7)
                {
                     system("cls");
                    int id;
                    cout << "Enter ID: ";
                    cin >> id;
                    cin.ignore();

                    for (int i = 0; i < memberCount; i++)
                    {
                        if (memberID[i] == id)
                        {
                            for (int j = i; j < memberCount - 1; j++)
                            {
                                memberID[j] = memberID[j + 1];
                                memberName[j] = memberName[j + 1];
                                memberRoll[j] = memberRoll[j + 1];
                            }
                            memberCount--;
                            break;
                        }
                    }
                }

                else if (choice == 8)
                {
                     system("cls");
                    cout << "Title: ";
                    getline(cin, eventTitle[eventCount]);

                    cout << "Date: ";
                    cin >> eventDate[eventCount];

                    cout << "Expense: ";
                    cin >> eventExpense[eventCount];
                    cin.ignore();

                    eventCount++;
                }

                else if (choice == 9)
                {
                     system("cls");
                    for (int i = 0; i < eventCount; i++)
                        cout << eventTitle[i] << " | " << eventDate[i] << endl;
                }

                else if (choice == 10)
                {
                     system("cls");
                    string t;
                    cout << "Enter Title: ";
                    getline(cin, t);

                    for (int i = 0; i < eventCount; i++)
                    {
                        if (eventTitle[i] == t)
                        {
                            cout << "New Title: ";
                            getline(cin, eventTitle[i]);

                            cout << "New Date: ";
                            cin >> eventDate[i];

                            cout << "New Expense: ";
                            cin >> eventExpense[i];
                            cin.ignore();
                        }
                    }
                }

                else if (choice == 11)
                {
                     system("cls");
                    string t;
                    cout << "Enter Title: ";
                    getline(cin, t);

                    for (int i = 0; i < eventCount; i++)
                    {
                        if (eventTitle[i] == t)
                        {
                            for (int j = i; j < eventCount - 1; j++)
                            {
                                eventTitle[j] = eventTitle[j + 1];
                                eventDate[j] = eventDate[j + 1];
                                eventExpense[j] = eventExpense[j + 1];
                            }
                            eventCount--;
                            break;
                        }
                    }
                }
            }
        }

        else
        {
            int choice = -1;
            while (choice != 0)
            {
                 system("cls");
                cout << "\n==== MEMBER MENU ====\n";
                cout << "1.View Society\n2.View Members\n3.View Events\n0.Logout\nChoice: ";

                cin >> choice;
                cin.ignore();

                if (choice == 1){
                 system("cls");
                    cout << societyName << endl;
                }
                else if (choice == 2)
                {
                     system("cls");
                    for (int i = 0; i < memberCount; i++)
                        cout << memberName[i] << endl;
                }

                else if (choice == 3)
                {
                     system("cls");
                    for (int i = 0; i < eventCount; i++)
                        cout << eventTitle[i] << endl;
                }
            }
        }

        isloggedin = false;
    }
}