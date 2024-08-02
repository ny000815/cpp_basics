class Account{
    protected:
        string id;
        int balance;
    public:
        string getId();
        int getBalance();
        void setBalance(int balance);
        Account(string id, int balance);
};
