class WordDictionary
{
public:

    class TrieNode
    {
    public:
        TrieNode* children[26];
        bool isCompleteWord;

        TrieNode()
        {
            isCompleteWord = false;

            for (int i = 0; i < 26; i++)
            {
                children[i] = nullptr;
            }
        }
    };

    TrieNode* root;

    WordDictionary()
    {
        root = new TrieNode();
    }

    void addWord(string word)
    {
        TrieNode* node = root;

        for (int i = 0; i < word.length(); i++)
        {
            int idx = word[i] - 'a';

            if (node->children[idx] == nullptr)
            {
                node->children[idx] = new TrieNode();
            }

            node = node->children[idx];
        }

        node->isCompleteWord = true;
    }

    bool searchHelper(string word, TrieNode* node)
    {
        for (int i = 0; i < word.length(); i++)
        {
            char ch = word[i];

            if (ch == '.')
            {
                for (auto child : node->children)
                {
                    if (child != nullptr)
                    {
                        if (searchHelper(word.substr(i + 1), child))
                        {
                            return true;
                        }
                    }
                }

                return false;
            }

            int idx = ch - 'a';

            if (node->children[idx] == nullptr)
            {
                return false;
            }

            node = node->children[idx];
        }

        return node->isCompleteWord;
    }

    bool search(string word)
    {
        return searchHelper(word, root);
    }
};
