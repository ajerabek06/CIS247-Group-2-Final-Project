#pragma once
#include "Menu.h"
#include "Util.h"
#include "Parts.h"
#include <vector>
#include <string>
#include <iostream>

using namespace std;


// Template class that helps facilitate the Add/View/Removal of each Part
template<class T>
class PartEditorMenu :
    public Menu
{
protected:
    void initialize()
    {
        options.push_back("Add");
        options.push_back("View");
        options.push_back("Remove");
    }

    // Name of the file that will store instances of T
    string Filename = "Unknown.csv";

    // Singular version of what T represents
    string ItemName = "Unknown";

    // Process in which to create a populated instanace of T
    virtual void add() = 0;

    // Process in which to remove T from disk
    void remove()
    {
        vector<T> parts = Parts::GetFileContents<T>(Filename);

        if (parts.size() == 0)
        {
            Util::PrintText("Inventory is already empty", Color::RED);
            return;
        }

        system("cls");
        cout << "List of items currently in inventory: " << endl;
        string delim(20, '-');

        for (int i = 0; i < parts.size(); i++)
        {
            cout << delim << endl;

            string record = "[Record " + to_string((i + 1)) + "]";
            Util::PrintText(record, Color::CYAN);
            cout << parts[i] << endl;
        }

        // This is in human readable format, so we cannot forget to subtract 1 to the value they provide
        int option = Util::GetInput<int>("Which record # would you like to remove?", 1, parts.size()) - 1;

        // We shall remove the item at the index they provided
        parts.erase(parts.begin() + option);

        // We do not have to specify the type next to SaveToFile because it infers it from our
        // parts parameter (vector<T> param is replaced with vector<GPU> since that's what our parts is
        Parts::SaveToFile(Filename, parts, false);
        system("cls");
    }

    // Process in which to view all instances of T on disk
    void view()
    {
        vector<T> parts = Parts::GetFileContents<T>(Filename);
        system("cls");

        cout << "Current " << ItemName << " in inventory" << endl;
        
        if (parts.size() == 0)
        {
            Util::PrintText("\tInventory is empty\n\n", Color::RED);
            return;
        }

        string delim(20, '-');
        for (T part : parts)
        {
            cout << delim << endl;
            cout << part;
        }

    }

public:
    PartEditorMenu() : Menu()
    {

    }

    int PickMenuOption()
    {
        cout << title << ":" << endl;
        int option = Util::SelectOption(options, true);

        return option;
    }

    void HandleMenuOption(int option)
    {
        /*
        * ADD
        * VIEW
        * REMOVE
        * GOBACK
        */
        switch (option)
        {
        case 0:
            add();
            break;
        case 1:
            view();
            break;
        case 2:
            remove();
            break;
        case 3:
            Exit();
            break;
        default:
            cout << "Unimplemented option: " << option << endl;
            break;
        }
    }
};

