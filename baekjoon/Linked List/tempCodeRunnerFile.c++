list<char> li;
        list<char>::iterator it = li.begin();
        string s;
        cin >> s;
        for (auto e : s)
        {
            if (e == '<')
            {
                if (it != li.begin())
                    it--;
            }
            else if (e == '>')
            {
                if (it != li.end())
                    it++;
            }
            else if (e == '-')
            {
                if (it != li.begin())
                    it = li.erase(--it);
            }
            else
            {
                li.insert(it, e);
            }
            for (auto a : li)
            {
                cout << a;
            }
            cout << "\n";
        }