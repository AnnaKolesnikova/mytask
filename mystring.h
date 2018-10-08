class string {
    public:
        string();
        ~string();

        void resize(int size);

        char *str = new char[10];
        int length = 10;
};